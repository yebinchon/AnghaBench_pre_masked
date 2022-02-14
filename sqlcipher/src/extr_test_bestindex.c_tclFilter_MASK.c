
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {void* zErrMsg; } ;
struct TYPE_8__ {TYPE_1__ base; int db; int pCmd; int * interp; } ;
typedef TYPE_2__ tcl_vtab ;
struct TYPE_9__ {int pStmt; } ;
typedef TYPE_3__ tcl_cursor ;
struct TYPE_10__ {scalar_t__ pVtab; } ;
typedef TYPE_4__ sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int * FUNC_3 (int *) ;
 char* FUNC_4 (int *) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int *) ;
 int FUNC_8 (int *,int *,int*,int ***) ;
 int * FUNC_9 (int) ;
 int * FUNC_10 () ;
 int * FUNC_11 (char const*,int) ;
 char* FUNC_12 (int ) ;
 void* FUNC_13 (char*,char const*) ;
 int FUNC_14 (int ,char const*,int,int *,int ) ;
 scalar_t__ FUNC_15 (char*,char const*) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_18(
  sqlite3_vtab_cursor *VAR_4,
  int VAR_5, const char *VAR_6,
  int VAR_7, sqlite3_value **VAR_8
){
  tcl_cursor *VAR_9 = (tcl_cursor*)VAR_4;
  tcl_vtab *VAR_10 = (tcl_vtab*)(VAR_4->pVtab);
  Tcl_Interp *VAR_11 = VAR_10->interp;
  Tcl_Obj *VAR_12;
  Tcl_Obj *VAR_13;
  int VAR_14;
  int VAR_15;

  VAR_12 = FUNC_1(VAR_10->pCmd);
  FUNC_6(VAR_12);
  FUNC_7(VAR_11, VAR_12, FUNC_11("xFilter", -1));
  FUNC_7(VAR_11, VAR_12, FUNC_9(VAR_5));
  if( VAR_6 ){
    FUNC_7(VAR_11, VAR_12, FUNC_11(VAR_6, -1));
  }else{
    FUNC_7(VAR_11, VAR_12, FUNC_11("", -1));
  }

  VAR_13 = FUNC_10();
  FUNC_6(VAR_13);
  for(VAR_14=0; VAR_14<VAR_7; VAR_14++){
    const char *VAR_16 = (const char*)FUNC_16(VAR_8[VAR_14]);
    Tcl_Obj *VAR_17;
    if( VAR_16==0 ){
      VAR_17 = FUNC_10();
    }else{
      VAR_17 = FUNC_11(VAR_16, -1);
    }
    FUNC_7(VAR_11, VAR_13, VAR_17);
  }
  FUNC_7(VAR_11, VAR_12, VAR_13);
  FUNC_0(VAR_13);

  VAR_15 = FUNC_2(VAR_11, VAR_12, VAR_2);
  if( VAR_15!=VAR_3 ){
    const char *VAR_18 = FUNC_5(VAR_11);
    VAR_15 = VAR_0;
    VAR_10->base.zErrMsg = FUNC_13("%s", VAR_18);
  }else{






    Tcl_Obj *VAR_19 = FUNC_3(VAR_11);
    Tcl_Obj **VAR_20 = 0;
    int VAR_21;
    VAR_15 = FUNC_8(VAR_11, VAR_19, &VAR_21, &VAR_20);
    if( VAR_15!=VAR_3 ){
      const char *VAR_22 = FUNC_5(VAR_11);
      VAR_15 = VAR_0;
      VAR_10->base.zErrMsg = FUNC_13("%s", VAR_22);
    }else{
      for(VAR_14=0; VAR_15==VAR_1 && VAR_14<VAR_21; VAR_14+=2){
        const char *VAR_23 = FUNC_4(VAR_20[VAR_14]);
        Tcl_Obj *VAR_24 = VAR_20[VAR_14+1];
        if( FUNC_15("sql", VAR_23)==0 ){
          const char *VAR_25 = FUNC_4(VAR_24);
          VAR_15 = FUNC_14(VAR_10->db, VAR_25, -1, &VAR_9->pStmt, 0);
          if( VAR_15!=VAR_1 ){
            const char *VAR_26 = FUNC_12(VAR_10->db);
            VAR_10->base.zErrMsg = FUNC_13("unexpected: %s", VAR_26);
          }
        }else{
          VAR_15 = VAR_0;
          VAR_10->base.zErrMsg = FUNC_13("unexpected: %s", VAR_23);
        }
      }
    }
  }

  if( VAR_15==VAR_1 ){
    VAR_15 = FUNC_17(VAR_4);
  }
  return VAR_15;
}
