
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef scalar_t__ sqlite3_int64 ;
typedef int sqlite3 ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*,int,...) ;
 double FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(sqlite3 *VAR_1, const char *VAR_2){
  sqlite3_stmt *VAR_3;
  int VAR_4 = 0;
  sqlite3_int64 VAR_5 = 0, VAR_6 = 0;
  int VAR_7 = 0;
  sqlite3_int64 VAR_8 = 0, VAR_9 = 0;
  int VAR_10 = 0;
  sqlite3_int64 VAR_11 = 0, VAR_12 = 0;
  sqlite3_int64 VAR_13;
  int VAR_14;
  int VAR_15;
  int VAR_16;
  int VAR_17;
  int VAR_18;

  VAR_3 = FUNC_0(VAR_1,
                  "SELECT count(*), sum(length(block)), max(length(block))"
                  " FROM '%q_segments'",
                  VAR_2);
  while( FUNC_6(VAR_3)==VAR_0 ){
    VAR_4 = FUNC_3(VAR_3, 0);
    VAR_5 = FUNC_4(VAR_3, 1);
    VAR_6 = FUNC_4(VAR_3, 2);
  }
  FUNC_5(VAR_3);
  VAR_3 = FUNC_0(VAR_1,
            "SELECT count(*), sum(length(block)), max(length(block))"
            "  FROM '%q_segments' a JOIN '%q_segdir' b"
            " WHERE a.blockid BETWEEN b.leaves_end_block+1 AND b.end_block",
            VAR_2, VAR_2);
  while( FUNC_6(VAR_3)==VAR_0 ){
    VAR_7 = FUNC_3(VAR_3, 0);
    VAR_8 = FUNC_4(VAR_3, 1);
    VAR_9 = FUNC_4(VAR_3, 2);
  }
  FUNC_5(VAR_3);
  VAR_3 = FUNC_0(VAR_1,
            "SELECT count(*), sum(length(root)), max(length(root))"
            "  FROM '%q_segdir'",
            VAR_2);
  while( FUNC_6(VAR_3)==VAR_0 ){
    VAR_10 = FUNC_3(VAR_3, 0);
    VAR_11 = FUNC_4(VAR_3, 1);
    VAR_12 = FUNC_4(VAR_3, 2);
  }
  FUNC_5(VAR_3);

  FUNC_1("Number of segments....................... %9d\n", VAR_4+VAR_10);
  FUNC_1("Number of leaf segments.................. %9d\n", VAR_4-VAR_7);
  FUNC_1("Number of index segments................. %9d\n", VAR_7);
  FUNC_1("Number of root segments.................. %9d\n", VAR_10);
  FUNC_1("Total size of all segments............... %9lld\n", VAR_5+VAR_11);
  FUNC_1("Total size of all leaf segments.......... %9lld\n", VAR_5-VAR_8);
  FUNC_1("Total size of all index segments......... %9lld\n", VAR_8);
  FUNC_1("Total size of all root segments.......... %9lld\n", VAR_11);
  if( VAR_4>0 ){
    FUNC_1("Average size of all segments............. %11.1f\n",
            (double)(VAR_5+VAR_11)/(double)(VAR_4+VAR_10));
    FUNC_1("Average size of leaf segments............ %11.1f\n",
            (double)(VAR_5-VAR_8)/(double)(VAR_4-VAR_7));
  }
  if( VAR_7>0 ){
    FUNC_1("Average size of index segments........... %11.1f\n",
            (double)VAR_8/(double)VAR_7);
  }
  if( VAR_10>0 ){
    FUNC_1("Average size of root segments............ %11.1f\n",
            (double)VAR_11/(double)VAR_10);
  }
  VAR_13 = VAR_6;
  if( VAR_13<VAR_12 ) VAR_13 = VAR_12;
  FUNC_1("Maximum segment size..................... %9lld\n", VAR_13);
  FUNC_1("Maximum index segment size............... %9lld\n", VAR_9);
  FUNC_1("Maximum root segment size................ %9lld\n", VAR_12);

  VAR_3 = FUNC_0(VAR_1, "PRAGMA page_size");
  VAR_16 = 1024;
  while( FUNC_6(VAR_3)==VAR_0 ){
    VAR_16 = FUNC_3(VAR_3, 0);
  }
  FUNC_5(VAR_3);
  FUNC_1("Database page size....................... %9d\n", VAR_16);
  VAR_3 = FUNC_0(VAR_1,
            "SELECT count(*)"
            "  FROM '%q_segments' a JOIN '%q_segdir' b"
            " WHERE a.blockid BETWEEN b.start_block AND b.leaves_end_block"
            "   AND length(a.block)>%d",
            VAR_2, VAR_2, VAR_16-45);
  VAR_15 = 0;
  while( FUNC_6(VAR_3)==VAR_0 ){
    VAR_15 = FUNC_3(VAR_3, 0);
  }
  FUNC_5(VAR_3);
  VAR_14 = VAR_4 - VAR_7;
  FUNC_1("Leaf segments larger than %5d bytes.... %9d   %5.2f%%\n",
         VAR_16-45, VAR_15, VAR_14>0 ? VAR_15*100.0/VAR_14 : 0.0);

  VAR_3 = FUNC_0(VAR_1, "SELECT max(level%%1024) FROM '%q_segdir'", VAR_2);
  VAR_17 = 0;
  while( FUNC_6(VAR_3)==VAR_0 ){
    VAR_17 = FUNC_3(VAR_3, 0);
  }
  FUNC_5(VAR_3);

  for(VAR_18=0; VAR_18<=VAR_17; VAR_18++){
    VAR_3 = FUNC_0(VAR_1,
           "SELECT count(*), sum(len), avg(len), max(len), sum(len>%d),"
           "       count(distinct idx)"
           "  FROM (SELECT length(a.block) AS len, idx"
           "          FROM '%q_segments' a JOIN '%q_segdir' b"
           "         WHERE (a.blockid BETWEEN b.start_block"
                                       " AND b.leaves_end_block)"
           "           AND (b.level%%1024)==%d)",
           VAR_16-45, VAR_2, VAR_2, VAR_18);
    if( FUNC_6(VAR_3)==VAR_0
     && (VAR_14 = FUNC_3(VAR_3, 0))>0
    ){
      sqlite3_int64 VAR_19;
      VAR_7 = FUNC_3(VAR_3, 5);
      FUNC_1("For level %d:\n", VAR_18);
      FUNC_1("  Number of indexes...................... %9d\n", VAR_7);
      FUNC_1("  Number of leaf segments................ %9d\n", VAR_14);
      if( VAR_7>1 ){
        FUNC_1("  Average leaf segments per index........ %11.1f\n",
               (double)VAR_14/(double)VAR_7);
      }
      FUNC_1("  Total size of all leaf segments........ %9lld\n",
             (VAR_19 = FUNC_4(VAR_3, 1)));
      FUNC_1("  Average size of leaf segments.......... %11.1f\n",
             FUNC_2(VAR_3, 2));
      if( VAR_7>1 ){
        FUNC_1("  Average leaf segment size per index.... %11.1f\n",
               (double)VAR_19/(double)VAR_7);
      }
      FUNC_1("  Maximum leaf segment size.............. %9lld\n",
             FUNC_4(VAR_3, 3));
      VAR_15 = FUNC_3(VAR_3, 4);
      FUNC_1("  Leaf segments larger than %5d bytes.. %9d   %5.2f%%\n",
             VAR_16-45, VAR_15, VAR_15*100.0/VAR_14);
    }
    FUNC_5(VAR_3);
  }
}
