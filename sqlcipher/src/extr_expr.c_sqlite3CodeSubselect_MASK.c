
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_13__ ;


typedef int Vdbe ;
struct TYPE_27__ {int regReturn; int iAddr; } ;
struct TYPE_28__ {TYPE_3__ sub; } ;
struct TYPE_25__ {TYPE_6__* pSelect; } ;
struct TYPE_32__ {scalar_t__ op; int iTable; TYPE_4__ y; TYPE_1__ x; } ;
struct TYPE_31__ {int nMem; int db; int * pVdbe; } ;
struct TYPE_30__ {scalar_t__ iLimit; TYPE_13__* pLimit; TYPE_2__* pEList; int selId; } ;
struct TYPE_29__ {int iSdst; int iSDParm; int nSdst; int eDest; } ;
struct TYPE_26__ {int nExpr; } ;
struct TYPE_24__ {TYPE_8__* pLeft; } ;
typedef TYPE_5__ SelectDest ;
typedef TYPE_6__ Select ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_7__*) ;
 int FUNC_1 (TYPE_8__*,int ) ;
 int FUNC_2 (TYPE_8__*,int ) ;
 int FUNC_3 (TYPE_8__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 TYPE_8__* FUNC_7 (int ,int ,int *,int ) ;
 int FUNC_8 (int ,TYPE_8__*) ;
 int * VAR_15 ;
 TYPE_13__* FUNC_9 (TYPE_7__*,int ,TYPE_8__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_7__*,TYPE_6__*,TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*,int ,int) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *,int ,int) ;
 int FUNC_14 (int *,int ,int,int) ;
 int FUNC_15 (int *,int ,int ,int,int) ;
 int FUNC_16 (int *,int,scalar_t__) ;
 scalar_t__ FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int) ;

int FUNC_20(Parse *VAR_16, Expr *VAR_17){
  int VAR_18 = 0;
  int VAR_19 = 0;
  Select *VAR_20;
  SelectDest VAR_21;
  int VAR_22;
  Expr *VAR_23;

  Vdbe *VAR_24 = VAR_16->pVdbe;
  FUNC_6( VAR_24!=0 );
  FUNC_19( VAR_17->op==VAR_11 );
  FUNC_19( VAR_17->op==VAR_14 );
  FUNC_6( VAR_17->op==VAR_11 || VAR_17->op==VAR_14 );
  FUNC_6( FUNC_1(VAR_17, VAR_3) );
  VAR_20 = VAR_17->x.pSelect;
  if( !FUNC_1(VAR_17, VAR_2) ){


    if( FUNC_1(VAR_17, VAR_1) ){
      FUNC_0((VAR_16, 0, "REUSE SUBQUERY %d", VAR_20->selId));
      FUNC_14(VAR_24, VAR_4, VAR_17->y.sub.regReturn,
                        VAR_17->y.sub.iAddr);
      return VAR_17->iTable;
    }


    FUNC_2(VAR_17, VAR_1);
    VAR_17->y.sub.regReturn = ++VAR_16->nMem;
    VAR_17->y.sub.iAddr =
      FUNC_14(VAR_24, VAR_5, 0, VAR_17->y.sub.regReturn) + 1;
    FUNC_4((VAR_24, "return address"));

    VAR_18 = FUNC_12(VAR_24, VAR_7); FUNC_5(VAR_24);
  }
  FUNC_0((VAR_16, 1, "%sSCALAR SUBQUERY %d",
        VAR_18?"":"CORRELATED ", VAR_20->selId));
  VAR_22 = VAR_17->op==VAR_14 ? VAR_20->pEList->nExpr : 1;
  FUNC_11(&VAR_21, 0, VAR_16->nMem+1);
  VAR_16->nMem += VAR_22;
  if( VAR_17->op==VAR_14 ){
    VAR_21.eDest = VAR_10;
    VAR_21.iSdst = VAR_21.iSDParm;
    VAR_21.nSdst = VAR_22;
    FUNC_15(VAR_24, VAR_6, 0, VAR_21.iSDParm, VAR_21.iSDParm+VAR_22-1);
    FUNC_4((VAR_24, "Init subquery result"));
  }else{
    VAR_21.eDest = VAR_9;
    FUNC_14(VAR_24, VAR_5, 0, VAR_21.iSDParm);
    FUNC_4((VAR_24, "Init EXISTS result"));
  }
  VAR_23 = FUNC_7(VAR_16->db, VAR_12,&VAR_15[1], 0);
  if( VAR_20->pLimit ){
    FUNC_8(VAR_16->db, VAR_20->pLimit->pLeft);
    VAR_20->pLimit->pLeft = VAR_23;
  }else{
    VAR_20->pLimit = FUNC_9(VAR_16, VAR_13, VAR_23, 0);
  }
  VAR_20->iLimit = 0;
  if( FUNC_10(VAR_16, VAR_20, &VAR_21) ){
    return 0;
  }
  VAR_17->iTable = VAR_19 = VAR_21.iSDParm;
  FUNC_3(VAR_17, VAR_0);
  if( VAR_18 ){
    FUNC_18(VAR_24, VAR_18);


    FUNC_13(VAR_24, VAR_8, VAR_17->y.sub.regReturn);
    FUNC_16(VAR_24, VAR_17->y.sub.iAddr-1, FUNC_17(VAR_24)-1);
  }

  return VAR_19;
}
