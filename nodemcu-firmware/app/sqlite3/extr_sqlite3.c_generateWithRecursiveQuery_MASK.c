
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_17__ ;


typedef int Vdbe ;
struct TYPE_33__ {int nExpr; } ;
struct TYPE_32__ {int nMem; int db; int nTab; int * pVdbe; } ;
struct TYPE_31__ {int nSelectRow; int iLimit; int iOffset; scalar_t__ op; int selFlags; int * pOffset; int * pLimit; TYPE_7__* pOrderBy; struct TYPE_31__* pPrior; TYPE_17__* pEList; struct TYPE_31__* pNext; void** addrOpenEphm; TYPE_3__* pSrc; } ;
struct TYPE_30__ {TYPE_7__* pOrderBy; } ;
struct TYPE_29__ {int nSrc; TYPE_2__* a; } ;
struct TYPE_27__ {scalar_t__ isRecursive; } ;
struct TYPE_28__ {int iCursor; TYPE_1__ fg; } ;
struct TYPE_26__ {int nExpr; } ;
typedef TYPE_3__ SrcList ;
typedef TYPE_4__ SelectDest ;
typedef TYPE_5__ Select ;
typedef TYPE_6__ Parse ;
typedef int KeyInfo ;
typedef TYPE_7__ ExprList ;
typedef int Expr ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*,int) ;
 int * FUNC_6 (TYPE_6__*,TYPE_5__*,int) ;
 int FUNC_7 (TYPE_6__*,TYPE_5__*,TYPE_17__*,int,int ,int ,TYPE_4__*,int,int) ;
 scalar_t__ FUNC_8 (TYPE_6__*,int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_6__*,char*) ;
 int FUNC_10 (int ,TYPE_7__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_5__*,TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int,int) ;
 int FUNC_13 (int *,int ,int) ;
 void* FUNC_14 (int *,int ,int,int) ;
 int FUNC_15 (int *,int ,int,int,int) ;
 int FUNC_16 (int *,int ,int,int,int ,char*,int ) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int) ;

__attribute__((used)) static void FUNC_20(
  Parse *VAR_17,
  Select *VAR_18,
  SelectDest *VAR_19
){
  SrcList *VAR_20 = VAR_18->pSrc;
  int VAR_21 = VAR_18->pEList->nExpr;
  Vdbe *VAR_22 = VAR_17->pVdbe;
  Select *VAR_23 = VAR_18->pPrior;
  int VAR_24;
  int VAR_25, VAR_26;
  int VAR_27 = 0;
  int VAR_28;
  int VAR_29;
  int VAR_30 = 0;
  int VAR_31 = VAR_14;
  SelectDest VAR_32;
  int VAR_33;
  int VAR_34;
  ExprList *VAR_35;
  Expr *VAR_36, *VAR_37;
  int VAR_38, VAR_39;


  if( FUNC_8(VAR_17, VAR_11, 0, 0, 0) ) return;


  VAR_26 = FUNC_18(VAR_22);
  VAR_18->nSelectRow = 320;
  FUNC_5(VAR_17, VAR_18, VAR_26);
  VAR_36 = VAR_18->pLimit;
  VAR_37 = VAR_18->pOffset;
  VAR_38 = VAR_18->iLimit;
  VAR_39 = VAR_18->iOffset;
  VAR_18->pLimit = VAR_18->pOffset = 0;
  VAR_18->iLimit = VAR_18->iOffset = 0;
  VAR_35 = VAR_18->pOrderBy;


  for(VAR_33=0; FUNC_0(VAR_33<VAR_20->nSrc); VAR_33++){
    if( VAR_20->a[VAR_33].fg.isRecursive ){
      VAR_27 = VAR_20->a[VAR_33].iCursor;
      break;
    }
  }




  VAR_29 = VAR_17->nTab++;
  if( VAR_18->op==VAR_16 ){
    VAR_31 = VAR_35 ? VAR_13 : VAR_12;
    VAR_30 = VAR_17->nTab++;
  }else{
    VAR_31 = VAR_35 ? VAR_15 : VAR_14;
  }
  FUNC_12(&VAR_32, VAR_31, VAR_29);


  VAR_28 = ++VAR_17->nMem;
  FUNC_15(VAR_22, VAR_5, VAR_27, VAR_28, VAR_21);
  if( VAR_35 ){
    KeyInfo *VAR_40 = FUNC_6(VAR_17, VAR_18, 1);
    FUNC_16(VAR_22, VAR_4, VAR_29, VAR_35->nExpr+2, 0,
                      (char*)VAR_40, VAR_8);
    VAR_32.pOrderBy = VAR_35;
  }else{
    FUNC_14(VAR_22, VAR_4, VAR_29, VAR_21);
  }
  FUNC_1((VAR_22, "Queue table"));
  if( VAR_30 ){
    VAR_18->addrOpenEphm[0] = FUNC_14(VAR_22, VAR_4, VAR_30, 0);
    VAR_18->selFlags |= VAR_10;
  }


  VAR_18->pOrderBy = 0;


  VAR_23->pNext = 0;
  VAR_34 = FUNC_11(VAR_17, VAR_23, &VAR_32);
  VAR_23->pNext = VAR_18;
  if( VAR_34 ) goto end_of_recursive_query;


  VAR_24 = FUNC_14(VAR_22, VAR_6, VAR_29, VAR_26); FUNC_2(VAR_22);


  FUNC_13(VAR_22, VAR_3, VAR_27);
  if( VAR_35 ){
    FUNC_15(VAR_22, VAR_0, VAR_29, VAR_35->nExpr+1, VAR_28);
  }else{
    FUNC_14(VAR_22, VAR_7, VAR_29, VAR_28);
  }
  FUNC_13(VAR_22, VAR_2, VAR_29);


  VAR_25 = FUNC_18(VAR_22);
  FUNC_4(VAR_22, VAR_39, VAR_25);
  FUNC_7(VAR_17, VAR_18, VAR_18->pEList, VAR_27,
      0, 0, VAR_19, VAR_25, VAR_26);
  if( VAR_38 ){
    FUNC_14(VAR_22, VAR_1, VAR_38, VAR_26);
    FUNC_2(VAR_22);
  }
  FUNC_19(VAR_22, VAR_25);




  if( VAR_18->selFlags & VAR_9 ){
    FUNC_9(VAR_17, "recursive aggregate queries not supported");
  }else{
    VAR_18->pPrior = 0;
    FUNC_11(VAR_17, VAR_18, &VAR_32);
    FUNC_3( VAR_18->pPrior==0 );
    VAR_18->pPrior = VAR_23;
  }


  FUNC_17(VAR_22, VAR_24);
  FUNC_19(VAR_22, VAR_26);

end_of_recursive_query:
  FUNC_10(VAR_17->db, VAR_18->pOrderBy);
  VAR_18->pOrderBy = VAR_35;
  VAR_18->pLimit = VAR_36;
  VAR_18->pOffset = VAR_37;
  return;
}
