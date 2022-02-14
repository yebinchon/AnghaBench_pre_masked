
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
typedef int sqlite3 ;
typedef int rtag ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,char const*,int) ;
 int * FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,char*,char*,int) ;
 scalar_t__ FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(sqlite3 *VAR_1, const char *VAR_2){
  int VAR_3, VAR_4;
  sqlite3_stmt *VAR_5 = 0;
  sqlite3_stmt *VAR_6 = 0;
  int VAR_7;

  VAR_5 = FUNC_1(VAR_1, "SELECT max(level/1024) FROM '%q_segdir'", VAR_2);
  if( FUNC_11(VAR_5)==VAR_0 ){
    VAR_3 = FUNC_6(VAR_5, 0);
  }else{
    VAR_3 = 0;
  }
  FUNC_8(VAR_5);

  FUNC_3("Number of inverted indices............... %3d\n", VAR_3+1);
  VAR_5 = FUNC_1(VAR_1,
    "SELECT level, idx, start_block, leaves_end_block, end_block, rowid"
    "  FROM '%q_segdir'"
    " WHERE level/1024==?"
    " ORDER BY level DESC, idx",
    VAR_2);
  VAR_6 = FUNC_1(VAR_1,
    "SELECT blockid FROM '%q_segments'"
    " WHERE blockid BETWEEN ? AND ? ORDER BY blockid",
    VAR_2);
  for(VAR_4=0; VAR_4<=VAR_3; VAR_4++){
    if( VAR_3>0 ){
      FUNC_3("**************************** Index %d "
             "****************************\n", VAR_4);
    }
    FUNC_4(VAR_5, 1, VAR_4);
    VAR_7 = -1;
    while( FUNC_11(VAR_5)==VAR_0 ){
      int VAR_8 = FUNC_6(VAR_5, 0)%1024;
      int VAR_9 = FUNC_6(VAR_5, 1);
      sqlite3_int64 VAR_10 = FUNC_7(VAR_5, 2);
      sqlite3_int64 VAR_11 = FUNC_7(VAR_5, 3);
      sqlite3_int64 VAR_12 = FUNC_7(VAR_5, 4);
      char VAR_13[20];
      if( VAR_8!=VAR_7 ){
        FUNC_3("level %2d idx %2d", VAR_8, VAR_9);
        VAR_7 = VAR_8;
      }else{
        FUNC_3("         idx %2d", VAR_9);
      }
      FUNC_10(sizeof(VAR_13), VAR_13, "r%lld",
                       FUNC_7(VAR_5,5));
      FUNC_3("  root   %9s\n", VAR_13);
      if( VAR_11>VAR_10 ){
        sqlite3_int64 VAR_14, VAR_15 = 0, VAR_16;
        if( VAR_11+1<=VAR_12 ){
          FUNC_5(VAR_6, 1, VAR_11+1);
          FUNC_5(VAR_6, 2, VAR_12);
          VAR_14 = -1;
          while( FUNC_11(VAR_6)==VAR_0 ){
            VAR_16 = FUNC_7(VAR_6, 0);
            if( VAR_14<0 ){
              VAR_14 = VAR_15 = VAR_16;
            }else if( VAR_16==VAR_15+1 ){
              VAR_15 = VAR_16;
            }else{
              FUNC_2(VAR_14, VAR_15);
              VAR_14 = VAR_15 = VAR_16;
            }
          }
          FUNC_9(VAR_6);
          if( VAR_14>=0 ){
            if( VAR_14==VAR_15 && VAR_14==VAR_12
             && FUNC_0(VAR_1,VAR_2,VAR_14)
            ){
              FUNC_3("                 null   %9lld\n", VAR_14);
            }else{
              FUNC_2(VAR_14, VAR_15);
            }
          }
        }
        FUNC_3("                 leaves %9lld thru %9lld  (%lld blocks)\n",
               VAR_10, VAR_11, VAR_11 - VAR_10 + 1);
      }
    }
    FUNC_9(VAR_5);
  }
  FUNC_8(VAR_5);
  FUNC_8(VAR_6);
}
