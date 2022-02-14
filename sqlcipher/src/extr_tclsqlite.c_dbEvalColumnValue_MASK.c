
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite_int64 ;
typedef int sqlite3_stmt ;
typedef int Tcl_Obj ;
struct TYPE_7__ {TYPE_1__* pDb; TYPE_2__* pPreStmt; } ;
struct TYPE_6__ {int * pStmt; } ;
struct TYPE_5__ {char* zNull; } ;
typedef TYPE_3__ DbEvalContext ;






 int * FUNC_0 (int *,int) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int) ;
 int * FUNC_3 (char*,int) ;
 int * FUNC_4 (int) ;
 char* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static Tcl_Obj *FUNC_11(DbEvalContext *VAR_0, int VAR_1){
  sqlite3_stmt *VAR_2 = VAR_0->pPreStmt->pStmt;
  switch( FUNC_10(VAR_2, VAR_1) ){
    case 131: {
      int VAR_3 = FUNC_6(VAR_2, VAR_1);
      const char *VAR_4 = FUNC_5(VAR_2, VAR_1);
      if( !VAR_4 ) VAR_3 = 0;
      return FUNC_0((u8*)VAR_4, VAR_3);
    }
    case 129: {
      sqlite_int64 VAR_5 = FUNC_8(VAR_2, VAR_1);
      if( VAR_5>=-2147483647 && VAR_5<=2147483647 ){
        return FUNC_2((int)VAR_5);
      }else{
        return FUNC_4(VAR_5);
      }
    }
    case 130: {
      return FUNC_1(FUNC_7(VAR_2, VAR_1));
    }
    case 128: {
      return FUNC_3(VAR_0->pDb->zNull, -1);
    }
  }

  return FUNC_3((char*)FUNC_9(VAR_2, VAR_1), -1);
}
