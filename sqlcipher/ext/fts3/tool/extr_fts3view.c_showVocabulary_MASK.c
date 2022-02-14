
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;
typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int r ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*) ;
 int * FUNC_2 (int *,char*,char const*,...) ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (int *,int) ;
 char* FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char const*,int ) ;
 int FUNC_10 (int,int *) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(sqlite3 *VAR_1, const char *VAR_2){
  char *VAR_3;
  sqlite3_uint64 VAR_4;
  sqlite3_stmt *VAR_5;
  int VAR_6 = 0;
  int VAR_7 = 0;
  int VAR_8 = 0;
  int VAR_9;
  int VAR_10, VAR_11;

  FUNC_10(sizeof(VAR_4), &VAR_4);
  VAR_3 = FUNC_9("viewer_%llx", VAR_2, VAR_4);
  FUNC_4(VAR_1, "BEGIN");
  VAR_5 = FUNC_2(VAR_1, "SELECT count(*) FROM %Q", VAR_2);
  while( FUNC_11(VAR_5)==VAR_0 ){
    VAR_6 = FUNC_5(VAR_5, 0);
  }
  FUNC_7(VAR_5);
  FUNC_3("Number of documents...................... %9d\n", VAR_6);

  FUNC_4(VAR_1, "CREATE VIRTUAL TABLE %s USING fts4aux(%Q)", VAR_3, VAR_2);
  VAR_5 = FUNC_2(VAR_1,
             "SELECT count(*), sum(occurrences) FROM %s WHERE col='*'",
             VAR_3);
  while( FUNC_11(VAR_5)==VAR_0 ){
    VAR_7 = FUNC_5(VAR_5, 0);
    VAR_8 = FUNC_5(VAR_5, 1);
  }
  FUNC_7(VAR_5);
  FUNC_3("Total tokens in all documents............ %9d\n", VAR_8);
  FUNC_3("Total number of distinct tokens.......... %9d\n", VAR_7);
  if( VAR_7==0 ) goto end_vocab;

  VAR_10 = 0;
  VAR_5 = FUNC_2(VAR_1, "SELECT count(*) FROM %s"
                      " WHERE col='*' AND occurrences==1", VAR_3);
  while( FUNC_11(VAR_5)==VAR_0 ){
    VAR_10 = FUNC_5(VAR_5, 0);
  }
  FUNC_7(VAR_5);
  FUNC_3("Tokens used exactly once................. %9d %5.2f%%\n",
          VAR_10, VAR_10*100.0/VAR_7);

  VAR_10 = 0;
  VAR_5 = FUNC_2(VAR_1, "SELECT count(*) FROM %s"
                      " WHERE col='*' AND documents==1", VAR_3);
  while( FUNC_11(VAR_5)==VAR_0 ){
    VAR_10 = FUNC_5(VAR_5, 0);
  }
  FUNC_7(VAR_5);
  FUNC_3("Tokens used in only one document......... %9d %5.2f%%\n",
          VAR_10, VAR_10*100.0/VAR_7);

  if( VAR_6>=2000 ){
    VAR_10 = 0;
    VAR_5 = FUNC_2(VAR_1, "SELECT count(*) FROM %s"
                        " WHERE col='*' AND occurrences<=%d", VAR_3, VAR_6/1000);
    while( FUNC_11(VAR_5)==VAR_0 ){
      VAR_10 = FUNC_5(VAR_5, 0);
    }
    FUNC_7(VAR_5);
    FUNC_3("Tokens used in 0.1%% or less of docs...... %9d %5.2f%%\n",
            VAR_10, VAR_10*100.0/VAR_7);
  }

  if( VAR_6>=200 ){
    VAR_10 = 0;
    VAR_5 = FUNC_2(VAR_1, "SELECT count(*) FROM %s"
                        " WHERE col='*' AND occurrences<=%d", VAR_3, VAR_6/100);
    while( FUNC_11(VAR_5)==VAR_0 ){
      VAR_10 = FUNC_5(VAR_5, 0);
    }
    FUNC_7(VAR_5);
    FUNC_3("Tokens used in 1%% or less of docs........ %9d %5.2f%%\n",
            VAR_10, VAR_10*100.0/VAR_7);
  }

  VAR_9 = FUNC_0(FUNC_1("top", 1, "25"));
  FUNC_3("The %d most common tokens:\n", VAR_9);
  VAR_5 = FUNC_2(VAR_1,
            "SELECT term, documents FROM %s"
            " WHERE col='*'"
            " ORDER BY documents DESC, term"
            " LIMIT %d", VAR_3, VAR_9);
  VAR_11 = 0;
  while( FUNC_11(VAR_5)==VAR_0 ){
    VAR_11++;
    VAR_10 = FUNC_5(VAR_5, 1);
    FUNC_3("  %2d. %-30s %9d docs %5.2f%%\n", VAR_11,
      FUNC_6(VAR_5, 0), VAR_10, VAR_10*100.0/VAR_6);
  }
  FUNC_7(VAR_5);

end_vocab:
  FUNC_4(VAR_1, "ROLLBACK");
  FUNC_8(VAR_3);
}
