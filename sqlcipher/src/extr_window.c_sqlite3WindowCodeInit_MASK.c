
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {int regPart; int regOne; int regStartRowid; int regEndRowid; int csrApp; int iEphCsr; scalar_t__ eStart; int regApp; TYPE_7__* pFunc; TYPE_3__* pOwner; struct TYPE_17__* pNextWin; scalar_t__ eExclude; TYPE_1__* pPartition; } ;
typedef TYPE_4__ Window ;
typedef int Vdbe ;
struct TYPE_20__ {int funcFlags; char* zName; } ;
struct TYPE_19__ {int* aSortOrder; } ;
struct TYPE_18__ {int nMem; int nTab; } ;
struct TYPE_15__ {int * pList; } ;
struct TYPE_16__ {TYPE_2__ x; } ;
struct TYPE_14__ {int nExpr; } ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ KeyInfo ;
typedef TYPE_7__ FuncDef ;
typedef int ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int * FUNC_1 (TYPE_5__*) ;
 TYPE_6__* FUNC_2 (TYPE_5__*,int *,int ,int ) ;
 int FUNC_3 (int *,int ,int,int) ;
 int FUNC_4 (int *,int ,int ,int,int) ;
 int FUNC_5 (int *,TYPE_6__*,int ) ;

void FUNC_6(Parse *VAR_11, Window *VAR_12){
  Window *VAR_13;
  Vdbe *VAR_14 = FUNC_1(VAR_11);



  if( VAR_12->pPartition ){
    int VAR_15 = VAR_12->pPartition->nExpr;
    VAR_12->regPart = VAR_11->nMem+1;
    VAR_11->nMem += VAR_15;
    FUNC_4(VAR_14, VAR_1, 0, VAR_12->regPart, VAR_12->regPart+VAR_15-1);
  }

  VAR_12->regOne = ++VAR_11->nMem;
  FUNC_3(VAR_14, VAR_0, 1, VAR_12->regOne);

  if( VAR_12->eExclude ){
    VAR_12->regStartRowid = ++VAR_11->nMem;
    VAR_12->regEndRowid = ++VAR_11->nMem;
    VAR_12->csrApp = VAR_11->nTab++;
    FUNC_3(VAR_14, VAR_0, 1, VAR_12->regStartRowid);
    FUNC_3(VAR_14, VAR_0, 0, VAR_12->regEndRowid);
    FUNC_3(VAR_14, VAR_2, VAR_12->csrApp, VAR_12->iEphCsr);
    return;
  }

  for(VAR_13=VAR_12; VAR_13; VAR_13=VAR_13->pNextWin){
    FuncDef *VAR_16 = VAR_13->pFunc;
    if( (VAR_16->funcFlags & VAR_5) && VAR_13->eStart!=VAR_6 ){







      ExprList *VAR_17 = VAR_13->pOwner->x.pList;
      KeyInfo *VAR_18 = FUNC_2(VAR_11, VAR_17, 0, 0);
      VAR_13->csrApp = VAR_11->nTab++;
      VAR_13->regApp = VAR_11->nMem+1;
      VAR_11->nMem += 3;
      if( VAR_18 && VAR_13->pFunc->zName[1]=='i' ){
        FUNC_0( VAR_18->aSortOrder[0]==0 );
        VAR_18->aSortOrder[0] = 1;
      }
      FUNC_3(VAR_14, VAR_3, VAR_13->csrApp, 2);
      FUNC_5(VAR_14, VAR_18, VAR_4);
      FUNC_3(VAR_14, VAR_0, 0, VAR_13->regApp+1);
    }
    else if( VAR_16->zName==VAR_10 || VAR_16->zName==VAR_7 ){


      VAR_13->regApp = VAR_11->nMem+1;
      VAR_13->csrApp = VAR_11->nTab++;
      VAR_11->nMem += 2;
      FUNC_3(VAR_14, VAR_2, VAR_13->csrApp, VAR_12->iEphCsr);
    }
    else if( VAR_16->zName==VAR_9 || VAR_16->zName==VAR_8 ){
      VAR_13->csrApp = VAR_11->nTab++;
      FUNC_3(VAR_14, VAR_2, VAR_13->csrApp, VAR_12->iEphCsr);
    }
  }
}
