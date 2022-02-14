
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pList2; scalar_t__ pList1; } ;
typedef TYPE_1__ tclvar_cursor ;
typedef int sqlite3_vtab_cursor ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_1){
  tclvar_cursor *VAR_2 = (tclvar_cursor *)VAR_1;
  if( VAR_2->pList1 ){
    FUNC_0(VAR_2->pList1);
  }
  if( VAR_2->pList2 ){
    FUNC_0(VAR_2->pList2);
  }
  FUNC_1(VAR_2);
  return VAR_0;
}
