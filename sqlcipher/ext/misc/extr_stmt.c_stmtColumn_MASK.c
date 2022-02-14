
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pStmt; } ;
typedef TYPE_1__ stmt_cursor ;
typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,int ) ;

__attribute__((used)) static int FUNC_7(
  sqlite3_vtab_cursor *VAR_4,
  sqlite3_context *VAR_5,
  int VAR_6
){
  stmt_cursor *VAR_7 = (stmt_cursor*)VAR_4;
  switch( VAR_6 ){
    case 128: {
      FUNC_2(VAR_5, FUNC_3(VAR_7->pStmt), -1, VAR_3);
      break;
    }
    case 135: {
      FUNC_1(VAR_5, FUNC_0(VAR_7->pStmt));
      break;
    }
    case 130: {
      FUNC_1(VAR_5, FUNC_5(VAR_7->pStmt));
      break;
    }
    case 138: {
      FUNC_1(VAR_5, FUNC_4(VAR_7->pStmt));
      break;
    }
    case 137: {
      VAR_6 = VAR_2 +
            134 - VAR_1;

    }
    case 134:
    case 133:
    case 136:
    case 132:
    case 131:
    case 129: {
      FUNC_1(VAR_5, FUNC_6(VAR_7->pStmt,
                      VAR_6-134 +VAR_1, 0));
      break;
    }
  }
  return VAR_0;
}
