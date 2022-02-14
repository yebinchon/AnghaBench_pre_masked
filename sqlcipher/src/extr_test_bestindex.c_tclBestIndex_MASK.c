
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* zErrMsg; } ;
struct TYPE_8__ {TYPE_2__ base; int pCmd; int * interp; } ;
typedef TYPE_3__ tcl_vtab ;
typedef scalar_t__ tRowcnt ;
struct sqlite3_index_orderby {int desc; int iColumn; } ;
struct sqlite3_index_constraint {int op; int usable; int iColumn; } ;
typedef int sqlite3_vtab ;
struct TYPE_9__ {int nConstraint; int nOrderBy; int orderByConsumed; int idxNum; int needToFreeIdxStr; TYPE_1__* aConstraintUsage; scalar_t__ estimatedRows; void* idxStr; int estimatedCost; int colUsed; struct sqlite3_index_orderby* aOrderBy; struct sqlite3_index_constraint* aConstraint; } ;
typedef TYPE_4__ sqlite3_index_info ;
typedef scalar_t__ Tcl_WideInt ;
typedef int Tcl_Obj ;
typedef int Tcl_Interp ;
struct TYPE_6__ {int omit; int argvIndex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *,int*) ;
 int * FUNC_5 (int *) ;
 char const* FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,scalar_t__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *) ;
 int FUNC_11 (int *,int *,int*,int ***) ;
 int * FUNC_12 (int ) ;
 int * FUNC_13 () ;
 int * FUNC_14 (char const*,int) ;
 int * FUNC_15 (int ) ;
 int FUNC_16 (void*) ;
 void* FUNC_17 (char*,...) ;
 scalar_t__ FUNC_18 (char*,char const*) ;

__attribute__((used)) static int FUNC_19(sqlite3_vtab *VAR_4, sqlite3_index_info *VAR_5){
  tcl_vtab *VAR_6 = (tcl_vtab*)VAR_4;
  Tcl_Interp *VAR_7 = VAR_6->interp;
  Tcl_Obj *VAR_8;
  Tcl_Obj *VAR_9;
  int VAR_10;
  int VAR_11 = VAR_1;

  VAR_9 = FUNC_1(VAR_6->pCmd);
  FUNC_9(VAR_9);
  FUNC_10(VAR_7, VAR_9, FUNC_14("xBestIndex", -1));

  VAR_8 = FUNC_13();
  FUNC_9(VAR_8);
  for(VAR_10=0; VAR_10<VAR_5->nConstraint; VAR_10++){
    struct sqlite3_index_constraint const *VAR_12 = &VAR_5->aConstraint[VAR_10];
    Tcl_Obj *VAR_13 = FUNC_13();
    const char *VAR_14 = "?";

    FUNC_9(VAR_13);

    switch( VAR_12->op ){
      case 141:
        VAR_14 = "eq"; break;
      case 138:
        VAR_14 = "gt"; break;
      case 133:
        VAR_14 = "le"; break;
      case 131:
        VAR_14 = "lt"; break;
      case 140:
        VAR_14 = "ge"; break;
      case 130:
        VAR_14 = "match"; break;
      case 132:
        VAR_14 = "like"; break;
      case 139:
        VAR_14 = "glob"; break;
      case 128:
        VAR_14 = "regexp"; break;
      case 129:
        VAR_14 = "ne"; break;
      case 136:
        VAR_14 = "isnot"; break;
      case 135:
        VAR_14 = "isnotnull"; break;
      case 134:
        VAR_14 = "isnull"; break;
      case 137:
        VAR_14 = "is"; break;
    }

    FUNC_10(0, VAR_13, FUNC_14("op", -1));
    FUNC_10(0, VAR_13, FUNC_14(VAR_14, -1));
    FUNC_10(0, VAR_13, FUNC_14("column", -1));
    FUNC_10(0, VAR_13, FUNC_12(VAR_12->iColumn));
    FUNC_10(0, VAR_13, FUNC_14("usable", -1));
    FUNC_10(0, VAR_13, FUNC_12(VAR_12->usable));

    FUNC_10(0, VAR_8, VAR_13);
    FUNC_0(VAR_13);
  }

  FUNC_10(0, VAR_9, VAR_8);
  FUNC_0(VAR_8);

  VAR_8 = FUNC_13();
  FUNC_9(VAR_8);
  for(VAR_10=0; VAR_10<VAR_5->nOrderBy; VAR_10++){
    struct sqlite3_index_orderby const *VAR_15 = &VAR_5->aOrderBy[VAR_10];
    Tcl_Obj *VAR_16 = FUNC_13();
    FUNC_9(VAR_16);

    FUNC_10(0, VAR_16, FUNC_14("column", -1));
    FUNC_10(0, VAR_16, FUNC_12(VAR_15->iColumn));
    FUNC_10(0, VAR_16, FUNC_14("desc", -1));
    FUNC_10(0, VAR_16, FUNC_12(VAR_15->desc));

    FUNC_10(0, VAR_8, VAR_16);
    FUNC_0(VAR_16);
  }

  FUNC_10(0, VAR_9, VAR_8);
  FUNC_0(VAR_8);

  FUNC_10(0, VAR_9, FUNC_15(VAR_5->colUsed));

  VAR_11 = FUNC_2(VAR_7, VAR_9, VAR_2);
  FUNC_0(VAR_9);
  if( VAR_11!=VAR_3 ){
    const char *VAR_17 = FUNC_7(VAR_7);
    VAR_11 = VAR_0;
    VAR_6->base.zErrMsg = FUNC_17("%s", VAR_17);
  }else{
    Tcl_Obj *VAR_18 = FUNC_5(VAR_7);
    Tcl_Obj **VAR_19 = 0;
    int VAR_20;
    VAR_11 = FUNC_11(VAR_7, VAR_18, &VAR_20, &VAR_19);
    if( VAR_11!=VAR_3 ){
      const char *VAR_21 = FUNC_7(VAR_7);
      VAR_11 = VAR_0;
      VAR_6->base.zErrMsg = FUNC_17("%s", VAR_21);
    }else{
      int VAR_22 = 1;
      for(VAR_10=0; VAR_11==VAR_1 && VAR_10<VAR_20; VAR_10+=2){
        const char *VAR_23 = FUNC_6(VAR_19[VAR_10]);
        Tcl_Obj *VAR_24 = VAR_19[VAR_10+1];
        if( FUNC_18("cost", VAR_23)==0 ){
          VAR_11 = FUNC_3(VAR_7, VAR_24, &VAR_5->estimatedCost);
        }else
        if( FUNC_18("orderby", VAR_23)==0 ){
          VAR_11 = FUNC_4(VAR_7, VAR_24, &VAR_5->orderByConsumed);
        }else
        if( FUNC_18("idxnum", VAR_23)==0 ){
          VAR_11 = FUNC_4(VAR_7, VAR_24, &VAR_5->idxNum);
        }else
        if( FUNC_18("idxstr", VAR_23)==0 ){
          FUNC_16(VAR_5->idxStr);
          VAR_5->idxStr = FUNC_17("%s", FUNC_6(VAR_24));
          VAR_5->needToFreeIdxStr = 1;
        }else
        if( FUNC_18("rows", VAR_23)==0 ){
          Tcl_WideInt VAR_25 = 0;
          VAR_11 = FUNC_8(VAR_7, VAR_24, &VAR_25);
          VAR_5->estimatedRows = (tRowcnt)VAR_25;
        }else
        if( FUNC_18("use", VAR_23)==0
         || FUNC_18("omit", VAR_23)==0
        ){
          int VAR_26;
          VAR_11 = FUNC_4(VAR_7, VAR_24, &VAR_26);
          if( VAR_11==VAR_1 ){
            if( VAR_26<0 || VAR_26>=VAR_5->nConstraint ){
              VAR_11 = VAR_0;
              VAR_6->base.zErrMsg = FUNC_17("unexpected: %d", VAR_26);
            }else{
              int VAR_27 = (VAR_23[0]=='o' || VAR_23[0]=='O');
              VAR_5->aConstraintUsage[VAR_26].argvIndex = VAR_22++;
              VAR_5->aConstraintUsage[VAR_26].omit = VAR_27;
            }
          }
        }else{
          VAR_11 = VAR_0;
          VAR_6->base.zErrMsg = FUNC_17("unexpected: %s", VAR_23);
        }
        if( VAR_11!=VAR_1 && VAR_6->base.zErrMsg==0 ){
          const char *VAR_28 = FUNC_7(VAR_7);
          VAR_6->base.zErrMsg = FUNC_17("%s", VAR_28);
        }
      }
    }
  }

  return VAR_11;
}
