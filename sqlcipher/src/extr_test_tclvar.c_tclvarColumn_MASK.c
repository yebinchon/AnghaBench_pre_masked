
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * interp; } ;
typedef TYPE_1__ tclvar_vtab ;
struct TYPE_6__ {int i2; int pList2; int i1; int pList1; } ;
typedef TYPE_2__ tclvar_cursor ;
struct TYPE_7__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;
typedef int sqlite3_context ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,char const*,int ) ;
 int FUNC_2 (int *,int ,int ,int **) ;
 int VAR_3 ;
 char* FUNC_3 (char*,char const*,char const*) ;
 int FUNC_4 (int *,char const*,int,int ) ;

__attribute__((used)) static int FUNC_5(sqlite3_vtab_cursor *VAR_4, sqlite3_context *VAR_5, int VAR_6){
  Tcl_Obj *VAR_7;
  Tcl_Obj *VAR_8;
  const char *VAR_9;
  const char *VAR_10 = "";
  tclvar_cursor *VAR_11 = (tclvar_cursor*)VAR_4;
  Tcl_Interp *VAR_12 = ((tclvar_vtab *)VAR_4->pVtab)->interp;

  FUNC_2(VAR_12, VAR_11->pList1, VAR_11->i1, &VAR_7);
  FUNC_2(VAR_12, VAR_11->pList2, VAR_11->i2, &VAR_8);
  VAR_9 = FUNC_0(VAR_7);
  if( VAR_8 ){
    VAR_10 = FUNC_0(VAR_8);
  }
  switch (VAR_6) {
    case 0: {
      FUNC_4(VAR_5, VAR_9, -1, VAR_1);
      break;
    }
    case 1: {
      FUNC_4(VAR_5, VAR_10, -1, VAR_1);
      break;
    }
    case 2: {
      Tcl_Obj *VAR_13 = FUNC_1(VAR_12, VAR_9, *VAR_10?VAR_10:0, VAR_2);
      FUNC_4(VAR_5, FUNC_0(VAR_13), -1, VAR_1);
      break;
    }
    case 3: {
      char *VAR_14;
      if( VAR_8 ){
        VAR_14 = FUNC_3("%s(%s)", VAR_9, VAR_10);
        FUNC_4(VAR_5, VAR_14, -1, VAR_3);
      }else{
        FUNC_4(VAR_5, VAR_9, -1, VAR_1);
      }
      break;
    }
  }
  return VAR_0;
}
