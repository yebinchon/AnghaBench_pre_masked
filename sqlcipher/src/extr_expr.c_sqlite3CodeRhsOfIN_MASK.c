
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_7__ ;
typedef struct TYPE_43__ TYPE_6__ ;
typedef struct TYPE_42__ TYPE_5__ ;
typedef struct TYPE_41__ TYPE_4__ ;
typedef struct TYPE_40__ TYPE_3__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;


struct ExprList_item {TYPE_9__* pExpr; } ;
typedef int Vdbe ;
struct TYPE_38__ {int regReturn; int iAddr; } ;
struct TYPE_39__ {TYPE_1__ sub; } ;
struct TYPE_40__ {TYPE_8__* pList; TYPE_5__* pSelect; } ;
struct TYPE_46__ {int iTable; TYPE_2__ y; struct TYPE_46__* pLeft; TYPE_3__ x; } ;
struct TYPE_45__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_44__ {int * aColl; } ;
struct TYPE_43__ {scalar_t__ iSelfTab; int nMem; int db; int * pVdbe; } ;
struct TYPE_42__ {int selFlags; scalar_t__ iLimit; int selId; TYPE_8__* pEList; } ;
struct TYPE_41__ {int zAffSdst; } ;
typedef TYPE_4__ SelectDest ;
typedef TYPE_5__ Select ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ KeyInfo ;
typedef TYPE_8__ ExprList ;
typedef TYPE_9__ Expr ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (TYPE_9__*,int ) ;
 int FUNC_3 (TYPE_9__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_6__*,TYPE_9__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_9__*,TYPE_9__*) ;
 int FUNC_9 (int ,int ) ;
 char FUNC_10 (TYPE_9__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_9__*,int) ;
 int FUNC_12 (TYPE_6__*,TYPE_9__*) ;
 int FUNC_13 (TYPE_9__*) ;
 int FUNC_14 (TYPE_9__*) ;
 int FUNC_15 (TYPE_6__*) ;
 TYPE_7__* FUNC_16 (int ,int,int) ;
 int FUNC_17 (TYPE_7__*) ;
 int FUNC_18 (TYPE_7__*) ;
 int FUNC_19 (TYPE_6__*,int) ;
 scalar_t__ FUNC_20 (TYPE_6__*,TYPE_5__*,TYPE_4__*) ;
 int FUNC_21 (TYPE_4__*,int ,int) ;
 int FUNC_22 (int *,int ) ;
 int FUNC_23 (int *,int ,int) ;
 int FUNC_24 (int *,int ,int,int) ;
 int FUNC_25 (int *,int ,int,int,int,char*,int) ;
 int FUNC_26 (int *,int ,int,int,int,int) ;
 int FUNC_27 (int *,int,scalar_t__) ;
 int FUNC_28 (int *,int,void*,int ) ;
 int FUNC_29 (int *,int) ;
 scalar_t__ FUNC_30 (int *) ;
 int FUNC_31 (int *,int) ;
 TYPE_9__* FUNC_32 (TYPE_9__*,int) ;
 int FUNC_33 (int) ;

void FUNC_34(
  Parse *VAR_15,
  Expr *VAR_16,
  int VAR_17
){
  int VAR_18 = 0;
  int VAR_19;
  Expr *VAR_20;
  KeyInfo *VAR_21 = 0;
  int VAR_22;
  Vdbe *VAR_23;

  VAR_23 = VAR_15->pVdbe;
  FUNC_6( VAR_23!=0 );
  if( !FUNC_2(VAR_16, VAR_1) && VAR_15->iSelfTab==0 ){




    if( FUNC_2(VAR_16, VAR_0) ){
      VAR_18 = FUNC_22(VAR_23, VAR_7); FUNC_5(VAR_23);
      if( FUNC_2(VAR_16, VAR_2) ){
        FUNC_1((VAR_15, 0, "REUSE LIST SUBQUERY %d",
              VAR_16->x.pSelect->selId));
      }
      FUNC_24(VAR_23, VAR_3, VAR_16->y.sub.regReturn,
                        VAR_16->y.sub.iAddr);
      FUNC_24(VAR_23, VAR_8, VAR_17, VAR_16->iTable);
      FUNC_31(VAR_23, VAR_18);
      return;
    }


    FUNC_3(VAR_16, VAR_0);
    VAR_16->y.sub.regReturn = ++VAR_15->nMem;
    VAR_16->y.sub.iAddr =
      FUNC_24(VAR_23, VAR_5, 0, VAR_16->y.sub.regReturn) + 1;
    FUNC_4((VAR_23, "return address"));

    VAR_18 = FUNC_22(VAR_23, VAR_7); FUNC_5(VAR_23);
  }


  VAR_20 = VAR_16->pLeft;
  VAR_22 = FUNC_14(VAR_20);




  VAR_16->iTable = VAR_17;
  VAR_19 = FUNC_24(VAR_23, VAR_9, VAR_16->iTable, VAR_22);







  VAR_21 = FUNC_16(VAR_15->db, VAR_22, 1);

  if( FUNC_2(VAR_16, VAR_2) ){





    Select *VAR_24 = VAR_16->x.pSelect;
    ExprList *VAR_25 = VAR_24->pEList;

    FUNC_1((VAR_15, 1, "%sLIST SUBQUERY %d",
        VAR_18?"":"CORRELATED ", VAR_24->selId
    ));


    if( FUNC_0(VAR_25->nExpr==VAR_22) ){
      SelectDest VAR_26;
      int VAR_27;
      FUNC_21(&VAR_26, VAR_14, VAR_17);
      VAR_26.zAffSdst = FUNC_7(VAR_15, VAR_16);
      VAR_24->iLimit = 0;
      FUNC_33( VAR_24->selFlags & VAR_12 );
      FUNC_33( VAR_21==0 );
      if( FUNC_20(VAR_15, VAR_24, &VAR_26) ){
        FUNC_9(VAR_15->db, VAR_26.zAffSdst);
        FUNC_18(VAR_21);
        return;
      }
      FUNC_9(VAR_15->db, VAR_26.zAffSdst);
      FUNC_6( VAR_21!=0 );
      FUNC_6( VAR_25!=0 );
      FUNC_6( VAR_25->nExpr>0 );
      FUNC_6( FUNC_17(VAR_21) );
      for(VAR_27=0; VAR_27<VAR_22; VAR_27++){
        Expr *VAR_28 = FUNC_32(VAR_20, VAR_27);
        VAR_21->aColl[VAR_27] = FUNC_8(
            VAR_15, VAR_28, VAR_25->a[VAR_27].pExpr
        );
      }
    }
  }else if( FUNC_0(VAR_16->x.pList!=0) ){







    char VAR_29;
    int VAR_30;
    ExprList *VAR_31 = VAR_16->x.pList;
    struct ExprList_item *VAR_32;
    int VAR_33, VAR_34, VAR_35;
    VAR_29 = FUNC_10(VAR_20);
    if( !VAR_29 ){
      VAR_29 = VAR_13;
    }
    if( VAR_21 ){
      FUNC_6( FUNC_17(VAR_21) );
      VAR_21->aColl[0] = FUNC_12(VAR_15, VAR_16->pLeft);
    }


    VAR_33 = FUNC_15(VAR_15);
    VAR_34 = FUNC_15(VAR_15);
    for(VAR_30=VAR_31->nExpr, VAR_32=VAR_31->a; VAR_30>0; VAR_30--, VAR_32++){
      Expr *VAR_36 = VAR_32->pExpr;






      if( VAR_18 && !FUNC_13(VAR_36) ){
        FUNC_29(VAR_23, VAR_18);
        VAR_18 = 0;
      }


      VAR_35 = FUNC_11(VAR_15, VAR_36, VAR_33);
      FUNC_25(VAR_23, VAR_6, VAR_35, 1, VAR_34, &VAR_29, 1);
      FUNC_26(VAR_23, VAR_4, VAR_17, VAR_34, VAR_35, 1);
    }
    FUNC_19(VAR_15, VAR_33);
    FUNC_19(VAR_15, VAR_34);
  }
  if( VAR_21 ){
    FUNC_28(VAR_23, VAR_19, (void *)VAR_21, VAR_11);
  }
  if( VAR_18 ){
    FUNC_31(VAR_23, VAR_18);

    FUNC_23(VAR_23, VAR_10, VAR_16->y.sub.regReturn);
    FUNC_27(VAR_23, VAR_16->y.sub.iAddr-1, FUNC_30(VAR_23)-1);
  }
}
