
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {int iOrderByCol; } ;
struct TYPE_20__ {TYPE_2__ x; } ;
struct ExprList_item {scalar_t__ zSpan; scalar_t__ zName; TYPE_3__ u; } ;
typedef int Vdbe ;
struct TYPE_25__ {int nExpr; } ;
struct TYPE_24__ {int nMem; int nTab; int * pVdbe; } ;
struct TYPE_23__ {int iOffset; TYPE_1__* pEList; } ;
struct TYPE_22__ {int eDest; int iSDParm; int iSdst; int zAffSdst; } ;
struct TYPE_21__ {int labelDone; int labelBkOut; int regReturn; int iECursor; int nOBSat; int sortFlags; TYPE_8__* pOrderBy; } ;
struct TYPE_18__ {struct ExprList_item* a; } ;
typedef TYPE_4__ SortCtx ;
typedef TYPE_5__ SelectDest ;
typedef TYPE_6__ Select ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ ExprList ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;


 int VAR_19 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_7__*,int,int) ;
 int FUNC_5 (TYPE_7__*,int) ;
 int FUNC_6 (TYPE_7__*) ;
 int FUNC_7 (TYPE_7__*,int,int) ;
 int FUNC_8 (TYPE_7__*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,int ,int,int) ;
 int FUNC_13 (int *,int ,int,int,int) ;
 int FUNC_14 (int *,int ,int,int,int,int ,int) ;
 int FUNC_15 (int *,int ,int,int,int,int) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int) ;

__attribute__((used)) static void FUNC_22(
  Parse *VAR_20,
  Select *VAR_21,
  SortCtx *VAR_22,
  int VAR_23,
  SelectDest *VAR_24
){
  Vdbe *VAR_25 = VAR_20->pVdbe;
  int VAR_26 = VAR_22->labelDone;
  int VAR_27 = FUNC_19(VAR_25);
  int VAR_28;
  int VAR_29 = 0;
  int VAR_30;
  ExprList *VAR_31 = VAR_22->pOrderBy;
  int VAR_32 = VAR_24->eDest;
  int VAR_33 = VAR_24->iSDParm;
  int VAR_34;
  int VAR_35;
  int VAR_36;
  int VAR_37;
  int VAR_38;
  int VAR_39;
  int VAR_40;
  int VAR_41;
  struct ExprList_item *VAR_42 = VAR_21->pEList->a;

  FUNC_2( VAR_26<0 );
  if( VAR_22->labelBkOut ){
    FUNC_12(VAR_25, VAR_2, VAR_22->regReturn, VAR_22->labelBkOut);
    FUNC_17(VAR_25, VAR_26);
    FUNC_20(VAR_25, VAR_22->labelBkOut);
  }
  VAR_30 = VAR_22->iECursor;
  if( VAR_32==VAR_19 || VAR_32==VAR_18 || VAR_32==130 ){
    VAR_35 = 0;
    VAR_34 = VAR_24->iSdst;
    VAR_39 = VAR_23;
  }else{
    VAR_35 = FUNC_6(VAR_20);
    VAR_34 = FUNC_5(VAR_20, VAR_23);
    VAR_39 = VAR_23;
  }
  VAR_37 = VAR_31->nExpr - VAR_22->nOBSat;
  if( VAR_22->sortFlags & VAR_17 ){
    int VAR_43 = ++VAR_20->nMem;
    VAR_38 = VAR_20->nTab++;
    if( VAR_22->labelBkOut ){
      VAR_29 = FUNC_10(VAR_25, VAR_8); FUNC_1(VAR_25);
    }
    FUNC_13(VAR_25, VAR_9, VAR_38, VAR_43, VAR_37+1+VAR_39);
    if( VAR_29 ) FUNC_18(VAR_25, VAR_29);
    VAR_28 = 1 + FUNC_12(VAR_25, VAR_15, VAR_30, VAR_26);
    FUNC_1(VAR_25);
    FUNC_3(VAR_25, VAR_21->iOffset, VAR_27);
    FUNC_13(VAR_25, VAR_13, VAR_30, VAR_43, VAR_38);
    VAR_41 = 0;
  }else{
    VAR_28 = 1 + FUNC_12(VAR_25, VAR_12, VAR_30, VAR_26); FUNC_1(VAR_25);
    FUNC_3(VAR_25, VAR_21->iOffset, VAR_27);
    VAR_38 = VAR_30;
    VAR_41 = 1;
  }
  for(VAR_40=0, VAR_36=VAR_37+VAR_41; VAR_40<VAR_39; VAR_40++){
    int VAR_44;
    if( VAR_42[VAR_40].u.x.iOrderByCol ){
      VAR_44 = VAR_42[VAR_40].u.x.iOrderByCol-1;
    }else{
      VAR_44 = VAR_36++;
    }
    FUNC_13(VAR_25, VAR_1, VAR_38, VAR_44, VAR_34+VAR_40);
    FUNC_0((VAR_25, "%s", VAR_42[VAR_40].zName ? VAR_42[VAR_40].zName : VAR_42[VAR_40].zSpan));
  }
  switch( VAR_32 ){
    case 128:
    case 131: {
      FUNC_12(VAR_25, VAR_6, VAR_33, VAR_35);
      FUNC_13(VAR_25, VAR_4, VAR_33, VAR_34, VAR_35);
      FUNC_16(VAR_25, VAR_0);
      break;
    }

    case 129: {
      FUNC_2( VAR_23==FUNC_9(VAR_24->zAffSdst) );
      FUNC_14(VAR_25, VAR_5, VAR_34, VAR_23, VAR_35,
                        VAR_24->zAffSdst, VAR_23);
      FUNC_4(VAR_20, VAR_34, VAR_23);
      FUNC_15(VAR_25, VAR_3, VAR_33, VAR_35, VAR_34, VAR_23);
      break;
    }
    case 130: {

      break;
    }

    default: {
      FUNC_2( VAR_32==VAR_19 || VAR_32==VAR_18 );
      FUNC_21( VAR_32==VAR_19 );
      FUNC_21( VAR_32==VAR_18 );
      if( VAR_32==VAR_19 ){
        FUNC_12(VAR_25, VAR_10, VAR_24->iSdst, VAR_23);
        FUNC_4(VAR_20, VAR_24->iSdst, VAR_23);
      }else{
        FUNC_11(VAR_25, VAR_16, VAR_24->iSDParm);
      }
      break;
    }
  }
  if( VAR_35 ){
    if( VAR_32==129 ){
      FUNC_7(VAR_20, VAR_34, VAR_23);
    }else{
      FUNC_8(VAR_20, VAR_34);
    }
    FUNC_8(VAR_20, VAR_35);
  }


  FUNC_20(VAR_25, VAR_27);
  if( VAR_22->sortFlags & VAR_17 ){
    FUNC_12(VAR_25, VAR_14, VAR_30, VAR_28); FUNC_1(VAR_25);
  }else{
    FUNC_12(VAR_25, VAR_7, VAR_30, VAR_28); FUNC_1(VAR_25);
  }
  if( VAR_22->regReturn ) FUNC_11(VAR_25, VAR_11, VAR_22->regReturn);
  FUNC_20(VAR_25, VAR_26);
}
