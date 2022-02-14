
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_stmt ;
typedef int sqlite3_int64 ;
typedef int sqlite3 ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int * FUNC_1 (int *,char*,char const*) ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(sqlite3 *VAR_1, const char *VAR_2){
  sqlite3_stmt *VAR_3;
  VAR_3 = FUNC_1(VAR_1, "SELECT id, value FROM '%q_stat'", VAR_2);
  while( FUNC_8(VAR_3)==VAR_0 ){
    FUNC_2("stat[%d] =", FUNC_5(VAR_3, 0));
    switch( FUNC_6(VAR_3, 1) ){
      case 128: {
        FUNC_2(" %d\n", FUNC_5(VAR_3, 1));
        break;
      }
      case 129: {
        unsigned char *VAR_4 = (unsigned char*)FUNC_3(VAR_3, 1);
        int VAR_5 = FUNC_4(VAR_3, 1);
        int VAR_6 = 0;
        sqlite3_int64 VAR_7;
        while( VAR_6<VAR_5 ){
          VAR_6 += FUNC_0(VAR_4, &VAR_7);
          FUNC_2(" %lld", VAR_7);
        }
        FUNC_2("\n");
        break;
      }
    }
  }
  FUNC_7(VAR_3);
}
