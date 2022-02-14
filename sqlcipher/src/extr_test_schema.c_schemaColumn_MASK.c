
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
struct TYPE_2__ {int pColumnList; int pTableList; int pDbList; } ;
typedef TYPE_1__ schema_cursor ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_1, sqlite3_context *VAR_2, int VAR_3){
  schema_cursor *VAR_4 = (schema_cursor *)VAR_1;
  switch( VAR_3 ){
    case 0:
      FUNC_1(VAR_2, FUNC_0(VAR_4->pDbList, 1));
      break;
    case 1:
      FUNC_1(VAR_2, FUNC_0(VAR_4->pTableList, 0));
      break;
    default:
      FUNC_1(VAR_2, FUNC_0(VAR_4->pColumnList, VAR_3-2));
      break;
  }
  return VAR_0;
}
