
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_51__ TYPE_8__ ;
typedef struct TYPE_50__ TYPE_7__ ;
typedef struct TYPE_49__ TYPE_6__ ;
typedef struct TYPE_48__ TYPE_5__ ;
typedef struct TYPE_47__ TYPE_4__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_25__ ;
typedef struct TYPE_43__ TYPE_1__ ;
typedef struct TYPE_42__ TYPE_12__ ;
typedef struct TYPE_41__ TYPE_11__ ;
typedef struct TYPE_40__ TYPE_10__ ;


typedef scalar_t__ sqlite3_xauth ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_48__ {scalar_t__ xAuth; scalar_t__ mallocFailed; } ;
typedef TYPE_5__ sqlite3 ;
typedef int sCtx ;
struct TYPE_46__ {TYPE_6__* pRename; } ;
struct TYPE_49__ {int iCol; int pList; TYPE_8__* pTab; TYPE_3__ u; int xSelectCallback; int xExprCallback; TYPE_10__* pParse; } ;
typedef TYPE_6__ Walker ;
struct TYPE_50__ {int * pExprList; int pIdList; TYPE_2__* pUpsert; scalar_t__ zTarget; struct TYPE_50__* pNext; } ;
typedef TYPE_7__ TriggerStep ;
struct TYPE_51__ {int nCol; int iPKey; char const* zName; TYPE_12__* pFKey; TYPE_11__* pIndex; int pCheck; TYPE_4__* aCol; int * pSelect; } ;
typedef TYPE_8__ Table ;
struct TYPE_47__ {char* zName; } ;
struct TYPE_45__ {int * pUpsertSet; } ;
struct TYPE_44__ {int pColumns; TYPE_7__* step_list; } ;
struct TYPE_43__ {int iFrom; char const* zCol; } ;
struct TYPE_42__ {int nCol; char const* zTo; TYPE_1__* aCol; struct TYPE_42__* pNextFrom; } ;
struct TYPE_41__ {int pPartIdxWhere; int aColExpr; struct TYPE_41__* pNext; } ;
struct TYPE_40__ {int rc; scalar_t__ zErrMsg; TYPE_25__* pNewTrigger; TYPE_8__* pTriggerTab; TYPE_11__* pNewIndex; TYPE_8__* pNewTable; } ;
typedef int Select ;
typedef TYPE_6__ RenameCtx ;
typedef TYPE_10__ Parse ;
typedef TYPE_11__ Index ;
typedef TYPE_12__ FKey ;
typedef int ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 int FUNC_3 (TYPE_10__*,TYPE_6__*,int *,char const*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_10__*,TYPE_6__*,int ,char const*) ;
 int FUNC_5 (int *,int ,int *,int *,TYPE_10__*) ;
 int VAR_3 ;
 int FUNC_6 (int *,TYPE_6__*,char const*,char const*,int) ;
 int FUNC_7 (TYPE_10__*) ;
 int FUNC_8 (TYPE_10__*,char const*,int ,TYPE_5__*,char const*,int) ;
 int FUNC_9 (TYPE_10__*,char const*) ;
 int FUNC_10 (TYPE_10__*,TYPE_6__*,void*) ;
 int FUNC_11 (TYPE_5__*,int ) ;
 int FUNC_12 (TYPE_6__*,TYPE_25__*) ;
 int FUNC_13 (TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*) ;
 TYPE_8__* FUNC_15 (TYPE_5__*,char const*,char const*) ;
 TYPE_8__* FUNC_16 (TYPE_10__*,int ,scalar_t__,char const*) ;
 int FUNC_17 (TYPE_10__*,int *,int ) ;
 int FUNC_18 (TYPE_6__*,int ) ;
 int FUNC_19 (TYPE_6__*,int ) ;
 int FUNC_20 (TYPE_6__*,int *) ;
 TYPE_5__* FUNC_21 (int *) ;
 int FUNC_22 (int *,int) ;
 scalar_t__ FUNC_23 (char const*,char const*) ;
 int FUNC_24 (int *) ;
 scalar_t__ FUNC_25 (int *) ;

__attribute__((used)) static void FUNC_26(
  sqlite3_context *VAR_4,
  int VAR_5,
  sqlite3_value **VAR_6
){
  sqlite3 *VAR_7 = FUNC_21(VAR_4);
  RenameCtx VAR_8;
  const char *VAR_9 = (const char*)FUNC_25(VAR_6[0]);
  const char *VAR_10 = (const char*)FUNC_25(VAR_6[3]);
  const char *VAR_11 = (const char*)FUNC_25(VAR_6[4]);
  int VAR_12 = FUNC_24(VAR_6[5]);
  const char *VAR_13 = (const char*)FUNC_25(VAR_6[6]);
  int VAR_14 = FUNC_24(VAR_6[7]);
  int VAR_15 = FUNC_24(VAR_6[8]);
  const char *VAR_16;
  int VAR_17;
  Parse VAR_18;
  Walker VAR_19;
  Index *VAR_20;
  int VAR_21;
  Table *VAR_22;

  sqlite3_xauth VAR_23 = VAR_7->xAuth;


  FUNC_0(VAR_5);
  if( VAR_9==0 ) return;
  if( VAR_11==0 ) return;
  if( VAR_13==0 ) return;
  if( VAR_12<0 ) return;
  FUNC_13(VAR_7);
  VAR_22 = FUNC_15(VAR_7, VAR_11, VAR_10);
  if( VAR_22==0 || VAR_12>=VAR_22->nCol ){
    FUNC_14(VAR_7);
    return;
  }
  VAR_16 = VAR_22->aCol[VAR_12].zName;
  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  VAR_8.iCol = ((VAR_12==VAR_22->iPKey) ? -1 : VAR_12);


  VAR_7->xAuth = 0;

  VAR_17 = FUNC_8(&VAR_18, VAR_10, 0, VAR_7, VAR_9, VAR_15);


  FUNC_2(&VAR_19, 0, sizeof(Walker));
  VAR_19.pParse = &VAR_18;
  VAR_19.xExprCallback = VAR_2;
  VAR_19.xSelectCallback = VAR_3;
  VAR_19.u.pRename = &VAR_8;

  VAR_8.pTab = VAR_22;
  if( VAR_17!=VAR_1 ) goto renameColumnFunc_done;
  if( VAR_18.pNewTable ){
    Select *VAR_24 = VAR_18.pNewTable->pSelect;
    if( VAR_24 ){
      VAR_18.rc = VAR_1;
      FUNC_17(&VAR_18, VAR_18.pNewTable->pSelect, 0);
      VAR_17 = (VAR_7->mallocFailed ? VAR_0 : VAR_18.rc);
      if( VAR_17==VAR_1 ){
        FUNC_20(&VAR_19, VAR_24);
      }
      if( VAR_17!=VAR_1 ) goto renameColumnFunc_done;
    }else{

      int VAR_25 = FUNC_23(VAR_11, VAR_18.pNewTable->zName);
      FKey *VAR_26;
      FUNC_1( VAR_18.pNewTable->pSelect==0 );
      VAR_8.pTab = VAR_18.pNewTable;
      if( VAR_25==0 ){
        FUNC_10(
            &VAR_18, &VAR_8, (void*)VAR_18.pNewTable->aCol[VAR_12].zName
        );
        if( VAR_8.iCol<0 ){
          FUNC_10(&VAR_18, &VAR_8, (void*)&VAR_18.pNewTable->iPKey);
        }
        FUNC_19(&VAR_19, VAR_18.pNewTable->pCheck);
        for(VAR_20=VAR_18.pNewTable->pIndex; VAR_20; VAR_20=VAR_20->pNext){
          FUNC_19(&VAR_19, VAR_20->aColExpr);
        }
        for(VAR_20=VAR_18.pNewIndex; VAR_20; VAR_20=VAR_20->pNext){
          FUNC_19(&VAR_19, VAR_20->aColExpr);
        }
      }

      for(VAR_26=VAR_18.pNewTable->pFKey; VAR_26; VAR_26=VAR_26->pNextFrom){
        for(VAR_21=0; VAR_21<VAR_26->nCol; VAR_21++){
          if( VAR_25==0 && VAR_26->aCol[VAR_21].iFrom==VAR_12 ){
            FUNC_10(&VAR_18, &VAR_8, (void*)&VAR_26->aCol[VAR_21]);
          }
          if( 0==FUNC_23(VAR_26->zTo, VAR_11)
           && 0==FUNC_23(VAR_26->aCol[VAR_21].zCol, VAR_16)
          ){
            FUNC_10(&VAR_18, &VAR_8, (void*)VAR_26->aCol[VAR_21].zCol);
          }
        }
      }
    }
  }else if( VAR_18.pNewIndex ){
    FUNC_19(&VAR_19, VAR_18.pNewIndex->aColExpr);
    FUNC_18(&VAR_19, VAR_18.pNewIndex->pPartIdxWhere);
  }else{

    TriggerStep *VAR_27;
    VAR_17 = FUNC_9(&VAR_18, (VAR_15 ? 0 : VAR_10));
    if( VAR_17!=VAR_1 ) goto renameColumnFunc_done;

    for(VAR_27=VAR_18.pNewTrigger->step_list; VAR_27; VAR_27=VAR_27->pNext){
      if( VAR_27->zTarget ){
        Table *VAR_28 = FUNC_16(&VAR_18, 0, VAR_27->zTarget, VAR_10);
        if( VAR_28==VAR_22 ){
          if( VAR_27->pUpsert ){
            ExprList *VAR_29 = VAR_27->pUpsert->pUpsertSet;
            FUNC_3(&VAR_18, &VAR_8, VAR_29, VAR_16);
          }
          FUNC_4(&VAR_18, &VAR_8, VAR_27->pIdList, VAR_16);
          FUNC_3(&VAR_18, &VAR_8, VAR_27->pExprList, VAR_16);
        }
      }
    }



    if( VAR_18.pTriggerTab==VAR_22 ){
      FUNC_4(&VAR_18, &VAR_8,VAR_18.pNewTrigger->pColumns,VAR_16);
    }


    FUNC_12(&VAR_19, VAR_18.pNewTrigger);
  }

  FUNC_1( VAR_17==VAR_1 );
  VAR_17 = FUNC_6(VAR_4, &VAR_8, VAR_9, VAR_13, VAR_14);

renameColumnFunc_done:
  if( VAR_17!=VAR_1 ){
    if( VAR_18.zErrMsg ){
      FUNC_5(VAR_4, 0, VAR_6[1], VAR_6[2], &VAR_18);
    }else{
      FUNC_22(VAR_4, VAR_17);
    }
  }

  FUNC_7(&VAR_18);
  FUNC_11(VAR_7, VAR_8.pList);

  VAR_7->xAuth = VAR_23;

  FUNC_14(VAR_7);
}
