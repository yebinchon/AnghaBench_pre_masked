
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * interp; } ;
typedef TYPE_1__ tclvar_vtab ;
struct TYPE_7__ {int * pList1; scalar_t__ i2; scalar_t__ i1; int * pList2; } ;
typedef TYPE_2__ tclvar_cursor ;
struct TYPE_8__ {scalar_t__ pVtab; } ;
typedef TYPE_3__ sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;







 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int * FUNC_5 (char const*,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(
  sqlite3_vtab_cursor *VAR_1,
  int VAR_2, const char *VAR_3,
  int VAR_4, sqlite3_value **VAR_5
){
  tclvar_cursor *VAR_6 = (tclvar_cursor *)VAR_1;
  Tcl_Interp *VAR_7 = ((tclvar_vtab *)(VAR_1->pVtab))->interp;
  Tcl_Obj *VAR_8 = FUNC_5("tclvar_filter_cmd", -1);

  const char *VAR_9 = "";
  const char *VAR_10 = "";
  const char *VAR_11 = "";
  const char *VAR_12 = "";
  const char *VAR_13 = "";
  int VAR_14;

  for(VAR_14=0; VAR_3[VAR_14]; VAR_14++){
    switch( VAR_3[VAR_14] ){
      case 132:
        VAR_9 = (const char*)FUNC_7(VAR_5[VAR_14]);
        break;
      case 131:
        VAR_10 = (const char*)FUNC_7(VAR_5[VAR_14]);
        break;
      case 130:
        VAR_11 = (const char*)FUNC_7(VAR_5[VAR_14]);
        break;
      case 128:
        VAR_12 = (const char*)FUNC_7(VAR_5[VAR_14]);
        break;
      case 129:
        VAR_13 = (const char*)FUNC_7(VAR_5[VAR_14]);
        break;
      default:
        FUNC_6( 0 );
    }
  }

  FUNC_3(VAR_8);
  FUNC_4(0, VAR_8, FUNC_5(VAR_9, -1));
  FUNC_4(0, VAR_8, FUNC_5(VAR_10, -1));
  FUNC_4(0, VAR_8, FUNC_5(VAR_11, -1));
  FUNC_4(0, VAR_8, FUNC_5(VAR_12, -1));
  FUNC_4(0, VAR_8, FUNC_5(VAR_13, -1));

  FUNC_1(VAR_7, VAR_8, VAR_0);
  if( VAR_6->pList1 ){
    FUNC_0(VAR_6->pList1);
  }
  if( VAR_6->pList2 ){
    FUNC_0(VAR_6->pList2);
    VAR_6->pList2 = 0;
  }
  VAR_6->i1 = 0;
  VAR_6->i2 = 0;
  VAR_6->pList1 = FUNC_2(VAR_7);
  FUNC_3(VAR_6->pList1);

  FUNC_0(VAR_8);
  return FUNC_8(VAR_1);
}
