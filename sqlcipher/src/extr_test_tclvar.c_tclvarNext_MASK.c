
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * interp; } ;
typedef TYPE_1__ tclvar_vtab ;
struct TYPE_7__ {int i1; int pList1; } ;
typedef TYPE_2__ tclvar_cursor ;
struct TYPE_8__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;


 int FUNC_0 (int ,int ,int,int **) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int *,TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab_cursor *VAR_0){
  Tcl_Obj *VAR_1;
  int VAR_2 = 0;
  int VAR_3 = 0;

  tclvar_cursor *VAR_4 = (tclvar_cursor *)VAR_0;
  Tcl_Interp *VAR_5 = ((tclvar_vtab *)(VAR_0->pVtab))->interp;

  FUNC_1(0, VAR_4->pList1, &VAR_2);
  while( !VAR_3 && VAR_4->i1<VAR_2 ){
    FUNC_0(0, VAR_4->pList1, VAR_4->i1, &VAR_1);
    VAR_3 = FUNC_2(VAR_5, VAR_4, VAR_1);
    if( !VAR_3 ){
      VAR_4->i1++;
    }
  }

  return 0;
}
