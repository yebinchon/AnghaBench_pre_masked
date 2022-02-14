
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite_int64 ;
typedef int sqlite3_vtab_cursor ;
struct TYPE_4__ {int ePlan; int pStmt; } ;
typedef TYPE_1__ Fts5Cursor ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int VAR_0 ;




 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(sqlite3_vtab_cursor *VAR_2, sqlite_int64 *VAR_3){
  Fts5Cursor *VAR_4 = (Fts5Cursor*)VAR_2;
  int VAR_5 = VAR_4->ePlan;

  FUNC_1( FUNC_0(VAR_4, VAR_0)==0 );
  switch( VAR_5 ){
    case 128:
      *VAR_3 = 0;
      break;

    case 129:
    case 131:
    case 130:
      *VAR_3 = FUNC_2(VAR_4);
      break;

    default:
      *VAR_3 = FUNC_3(VAR_4->pStmt, 0);
      break;
  }

  return VAR_1;
}
