
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_70__ TYPE_9__ ;
typedef struct TYPE_69__ TYPE_8__ ;
typedef struct TYPE_68__ TYPE_7__ ;
typedef struct TYPE_67__ TYPE_6__ ;
typedef struct TYPE_66__ TYPE_5__ ;
typedef struct TYPE_65__ TYPE_4__ ;
typedef struct TYPE_64__ TYPE_3__ ;
typedef struct TYPE_63__ TYPE_2__ ;
typedef struct TYPE_62__ TYPE_1__ ;
typedef struct TYPE_61__ TYPE_14__ ;
typedef struct TYPE_60__ TYPE_13__ ;
typedef struct TYPE_59__ TYPE_12__ ;
typedef struct TYPE_58__ TYPE_11__ ;
typedef struct TYPE_57__ TYPE_10__ ;


struct TYPE_62__ {int bDisable; } ;
struct TYPE_67__ {int flags; int mallocFailed; TYPE_1__ lookaside; } ;
typedef TYPE_6__ sqlite3 ;
struct TYPE_68__ {char* zTarget; TYPE_8__* pTrig; void* op; int pSelect; int pExprList; void* pWhere; } ;
typedef TYPE_7__ TriggerStep ;
struct TYPE_69__ {void* op; int pTabSchema; int pSchema; void* pWhen; TYPE_7__* step_list; } ;
typedef TYPE_8__ Trigger ;
struct TYPE_70__ {char* member_0; int member_1; char const* z; int n; } ;
typedef TYPE_9__ Token ;
struct TYPE_57__ {size_t iPKey; size_t nCol; int pSchema; TYPE_3__* aCol; } ;
typedef TYPE_10__ Table ;
struct TYPE_66__ {char* zName; TYPE_4__* aCol; } ;
struct TYPE_65__ {TYPE_14__* pDflt; int zName; } ;
struct TYPE_64__ {int zName; } ;
struct TYPE_63__ {int iFrom; } ;
struct TYPE_61__ {int affinity; } ;
struct TYPE_60__ {int* aAction; int nCol; TYPE_8__** apTrigger; TYPE_5__* pFrom; TYPE_2__* aCol; } ;
struct TYPE_59__ {size_t* aiColumn; } ;
struct TYPE_58__ {TYPE_6__* db; } ;
typedef int Select ;
typedef TYPE_11__ Parse ;
typedef TYPE_12__ Index ;
typedef TYPE_13__ FKey ;
typedef int ExprList ;
typedef TYPE_14__ Expr ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_2 (char*,char const*,int) ;
 int FUNC_3 (TYPE_6__*,int*) ;
 scalar_t__ FUNC_4 (TYPE_6__*,int) ;
 TYPE_14__* FUNC_5 (TYPE_6__*,int ,char*) ;
 TYPE_14__* FUNC_6 (TYPE_6__*,int ,TYPE_9__*,int ) ;
 TYPE_14__* FUNC_7 (TYPE_6__*,TYPE_14__*,TYPE_14__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_14__*) ;
 void* FUNC_9 (TYPE_6__*,TYPE_14__*,int ) ;
 int * FUNC_10 (TYPE_11__*,int *,TYPE_14__*) ;
 int FUNC_11 (TYPE_6__*,int *) ;
 int FUNC_12 (TYPE_6__*,int *,int ) ;
 int FUNC_13 (TYPE_11__*,int *,TYPE_9__*,int ) ;
 scalar_t__ FUNC_14 (TYPE_11__*,TYPE_10__*,TYPE_13__*,TYPE_12__**,int**) ;
 TYPE_14__* FUNC_15 (TYPE_11__*,int ,TYPE_14__*,TYPE_14__*) ;
 int FUNC_16 (TYPE_6__*,int *) ;
 int FUNC_17 (TYPE_6__*,int *,int ) ;
 int * FUNC_18 (TYPE_11__*,int *,int ,TYPE_14__*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_19 (TYPE_6__*,int ,TYPE_9__*,int ) ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (TYPE_9__*,int ) ;

__attribute__((used)) static Trigger *FUNC_22(
  Parse *VAR_15,
  Table *VAR_16,
  FKey *VAR_17,
  ExprList *VAR_18
){
  sqlite3 *VAR_19 = VAR_15->db;
  int VAR_20;
  Trigger *VAR_21;
  int VAR_22 = (VAR_18!=0);

  VAR_20 = VAR_17->aAction[VAR_22];
  if( VAR_20==128 && (VAR_19->flags & VAR_4) ){
    return 0;
  }
  VAR_21 = VAR_17->apTrigger[VAR_22];

  if( VAR_20!=VAR_2 && !VAR_21 ){
    char const *VAR_23;
    int VAR_24;
    Index *VAR_25 = 0;
    int *VAR_26 = 0;
    TriggerStep *VAR_27 = 0;
    Expr *VAR_28 = 0;
    ExprList *VAR_29 = 0;
    Select *VAR_30 = 0;
    int VAR_31;
    Expr *VAR_32 = 0;

    if( FUNC_14(VAR_15, VAR_16, VAR_17, &VAR_25, &VAR_26) ) return 0;
    FUNC_0( VAR_26 || VAR_17->nCol==1 );

    for(VAR_31=0; VAR_31<VAR_17->nCol; VAR_31++){
      Token VAR_33 = { "old", 3 };
      Token VAR_34 = { "new", 3 };
      Token VAR_35;
      Token VAR_36;
      int VAR_37;
      Expr *VAR_38;

      VAR_37 = VAR_26 ? VAR_26[VAR_31] : VAR_17->aCol[0].iFrom;
      FUNC_0( VAR_37>=0 );
      FUNC_0( VAR_25!=0 || (VAR_16->iPKey>=0 && VAR_16->iPKey<VAR_16->nCol) );
      FUNC_0( VAR_25==0 || VAR_25->aiColumn[VAR_31]>=0 );
      FUNC_21(&VAR_36,
                   VAR_16->aCol[VAR_25 ? VAR_25->aiColumn[VAR_31] : VAR_16->iPKey].zName);
      FUNC_21(&VAR_35, VAR_17->pFrom->aCol[VAR_37].zName);





      VAR_38 = FUNC_15(VAR_15, VAR_7,
          FUNC_15(VAR_15, VAR_6,
            FUNC_6(VAR_19, VAR_8, &VAR_33, 0),
            FUNC_6(VAR_19, VAR_8, &VAR_36, 0)),
          FUNC_6(VAR_19, VAR_8, &VAR_35, 0)
      );
      VAR_28 = FUNC_7(VAR_19, VAR_28, VAR_38);






      if( VAR_18 ){
        VAR_38 = FUNC_15(VAR_15, VAR_9,
            FUNC_15(VAR_15, VAR_6,
              FUNC_6(VAR_19, VAR_8, &VAR_33, 0),
              FUNC_6(VAR_19, VAR_8, &VAR_36, 0)),
            FUNC_15(VAR_15, VAR_6,
              FUNC_6(VAR_19, VAR_8, &VAR_34, 0),
              FUNC_6(VAR_19, VAR_8, &VAR_36, 0))
            );
        VAR_32 = FUNC_7(VAR_19, VAR_32, VAR_38);
      }

      if( VAR_20!=128 && (VAR_20!=129 || VAR_18) ){
        Expr *VAR_39;
        if( VAR_20==129 ){
          VAR_39 = FUNC_15(VAR_15, VAR_6,
            FUNC_6(VAR_19, VAR_8, &VAR_34, 0),
            FUNC_6(VAR_19, VAR_8, &VAR_36, 0));
        }else if( VAR_20==VAR_3 ){
          Expr *VAR_40 = VAR_17->pFrom->aCol[VAR_37].pDflt;
          if( VAR_40 ){
            VAR_39 = FUNC_9(VAR_19, VAR_40, 0);
          }else{
            VAR_39 = FUNC_6(VAR_19, VAR_11, 0, 0);
          }
        }else{
          VAR_39 = FUNC_6(VAR_19, VAR_11, 0, 0);
        }
        VAR_29 = FUNC_10(VAR_15, VAR_29, VAR_39);
        FUNC_13(VAR_15, VAR_29, &VAR_35, 0);
      }
    }
    FUNC_3(VAR_19, VAR_26);

    VAR_23 = VAR_17->pFrom->zName;
    VAR_24 = FUNC_20(VAR_23);

    if( VAR_20==128 ){
      Token VAR_41;
      Expr *VAR_42;

      VAR_41.z = VAR_23;
      VAR_41.n = VAR_24;
      VAR_42 = FUNC_5(VAR_19, VAR_12, "FOREIGN KEY constraint failed");
      if( VAR_42 ){
        VAR_42->affinity = VAR_1;
      }
      VAR_30 = FUNC_18(VAR_15,
          FUNC_10(VAR_15, 0, VAR_42),
          FUNC_19(VAR_19, 0, &VAR_41, 0),
          VAR_28,
          0, 0, 0, 0, 0, 0
      );
      VAR_28 = 0;
    }


    VAR_19->lookaside.bDisable++;

    VAR_21 = (Trigger *)FUNC_4(VAR_19,
        sizeof(Trigger) +
        sizeof(TriggerStep) +
        VAR_24 + 1
    );
    if( VAR_21 ){
      VAR_27 = VAR_21->step_list = (TriggerStep *)&VAR_21[1];
      VAR_27->zTarget = (char *)&VAR_27[1];
      FUNC_2((char *)VAR_27->zTarget, VAR_23, VAR_24);

      VAR_27->pWhere = FUNC_9(VAR_19, VAR_28, VAR_0);
      VAR_27->pExprList = FUNC_12(VAR_19, VAR_29, VAR_0);
      VAR_27->pSelect = FUNC_17(VAR_19, VAR_30, VAR_0);
      if( VAR_32 ){
        VAR_32 = FUNC_15(VAR_15, VAR_10, VAR_32, 0);
        VAR_21->pWhen = FUNC_9(VAR_19, VAR_32, VAR_0);
      }
    }


    VAR_19->lookaside.bDisable--;

    FUNC_8(VAR_19, VAR_28);
    FUNC_8(VAR_19, VAR_32);
    FUNC_11(VAR_19, VAR_29);
    FUNC_16(VAR_19, VAR_30);
    if( VAR_19->mallocFailed==1 ){
      FUNC_1(VAR_19, VAR_21);
      return 0;
    }
    FUNC_0( VAR_27!=0 );

    switch( VAR_20 ){
      case 128:
        VAR_27->op = VAR_13;
        break;
      case 129:
        if( !VAR_18 ){
          VAR_27->op = VAR_5;
          break;
        }
      default:
        VAR_27->op = VAR_14;
    }
    VAR_27->pTrig = VAR_21;
    VAR_21->pSchema = VAR_16->pSchema;
    VAR_21->pTabSchema = VAR_16->pSchema;
    VAR_17->apTrigger[VAR_22] = VAR_21;
    VAR_21->op = (VAR_18 ? VAR_14 : VAR_5);
  }

  return VAR_21;
}
