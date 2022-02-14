
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_11__ ;


struct TYPE_20__ {TYPE_7__* pKeyInfo; } ;
struct TYPE_21__ {int p2; TYPE_2__ p4; } ;
typedef TYPE_3__ VdbeOp ;
typedef int Vdbe ;
struct TYPE_25__ {int nXField; int nField; int aSortOrder; } ;
struct TYPE_24__ {int nMem; TYPE_1__* db; int * pVdbe; } ;
struct TYPE_23__ {scalar_t__ iOffset; int iLimit; } ;
struct TYPE_22__ {int sortFlags; int nOBSat; int labelDone; int iECursor; int labelBkOut; int regReturn; scalar_t__ bOrderedInnerLoop; TYPE_11__* pOrderBy; int addrSortIndex; } ;
struct TYPE_19__ {scalar_t__ mallocFailed; } ;
struct TYPE_18__ {int nExpr; } ;
typedef TYPE_4__ SortCtx ;
typedef TYPE_5__ Select ;
typedef TYPE_6__ Parse ;
typedef TYPE_7__ KeyInfo ;


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
 TYPE_7__* FUNC_3 (TYPE_6__*,TYPE_11__*,int,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_11__*,int,int,int) ;
 int FUNC_6 (TYPE_6__*,int,int,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int,int) ;
 int FUNC_9 (int *,int ,int,int,int) ;
 int FUNC_10 (int *,int,int,int,int,int) ;
 int FUNC_11 (int *,int,char*,int ) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 TYPE_3__* FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int) ;
 void* FUNC_16 (int *) ;
 int FUNC_17 (int) ;

__attribute__((used)) static void FUNC_18(
  Parse *VAR_20,
  SortCtx *VAR_21,
  Select *VAR_22,
  int VAR_23,
  int VAR_24,
  int VAR_25,
  int VAR_26
){
  Vdbe *VAR_27 = VAR_20->pVdbe;
  int VAR_28 = ((VAR_21->sortFlags & VAR_16)==0);
  int VAR_29 = VAR_21->pOrderBy->nExpr;
  int VAR_30 = VAR_29 + VAR_28 + VAR_25;
  int VAR_31;
  int VAR_32 = ++VAR_20->nMem;
  int VAR_33 = VAR_21->nOBSat;
  int VAR_34;
  int VAR_35;

  FUNC_2( VAR_28==0 || VAR_28==1 );
  FUNC_2( VAR_25==1 || VAR_23==VAR_24 || VAR_24==0 );
  if( VAR_26 ){
    FUNC_2( VAR_26==VAR_29+VAR_28 );
    VAR_31 = VAR_23 - VAR_29 - VAR_28;
  }else{
    VAR_31 = VAR_20->nMem + 1;
    VAR_20->nMem += VAR_30;
  }
  FUNC_2( VAR_22->iOffset==0 || VAR_22->iLimit!=0 );
  VAR_35 = VAR_22->iOffset ? VAR_22->iOffset+1 : VAR_22->iLimit;
  VAR_21->labelDone = FUNC_16(VAR_27);
  FUNC_5(VAR_20, VAR_21->pOrderBy, VAR_31, VAR_24,
                          VAR_17 | (VAR_24? VAR_18 : 0));
  if( VAR_28 ){
    FUNC_8(VAR_27, VAR_12, VAR_21->iECursor, VAR_31+VAR_29);
  }
  if( VAR_26==0 && VAR_25>0 ){
    FUNC_6(VAR_20, VAR_23, VAR_31+VAR_29+VAR_28, VAR_25);
  }
  FUNC_9(VAR_27, VAR_10, VAR_31+VAR_33, VAR_30-VAR_33, VAR_32);
  if( VAR_33>0 ){
    int VAR_36;
    int VAR_37;
    int VAR_38;
    VdbeOp *VAR_39;
    int VAR_40;
    KeyInfo *VAR_41;

    VAR_36 = VAR_20->nMem+1;
    VAR_20->nMem += VAR_21->nOBSat;
    VAR_40 = VAR_29 - VAR_21->nOBSat + VAR_28;
    if( VAR_28 ){
      VAR_37 = FUNC_7(VAR_27, VAR_6, VAR_31+VAR_29);
    }else{
      VAR_37 = FUNC_7(VAR_27, VAR_13, VAR_21->iECursor);
    }
    FUNC_1(VAR_27);
    FUNC_9(VAR_27, VAR_1, VAR_36, VAR_31, VAR_21->nOBSat);
    VAR_39 = FUNC_14(VAR_27, VAR_21->addrSortIndex);
    if( VAR_20->db->mallocFailed ) return;
    VAR_39->p2 = VAR_40 + VAR_25;
    VAR_41 = VAR_39->p4.pKeyInfo;
    FUNC_4(VAR_41->aSortOrder, 0, VAR_41->nField);
    FUNC_11(VAR_27, -1, (char*)VAR_41, VAR_15);
    FUNC_17( VAR_41->nXField>2 );
    VAR_39->p4.pKeyInfo = FUNC_3(VAR_20, VAR_21->pOrderBy, VAR_33,
                                           VAR_41->nXField-1);
    VAR_38 = FUNC_13(VAR_27);
    FUNC_9(VAR_27, VAR_8, VAR_38+1, 0, VAR_38+1); FUNC_1(VAR_27);
    VAR_21->labelBkOut = FUNC_16(VAR_27);
    VAR_21->regReturn = ++VAR_20->nMem;
    FUNC_8(VAR_27, VAR_4, VAR_21->regReturn, VAR_21->labelBkOut);
    FUNC_7(VAR_27, VAR_11, VAR_21->iECursor);
    if( VAR_35 ){
      FUNC_8(VAR_27, VAR_6, VAR_35, VAR_21->labelDone);
      FUNC_1(VAR_27);
    }
    FUNC_15(VAR_27, VAR_37);
    FUNC_6(VAR_20, VAR_31, VAR_36, VAR_21->nOBSat);
    FUNC_15(VAR_27, VAR_38);
  }
  if( VAR_21->sortFlags & VAR_16 ){
    VAR_34 = VAR_14;
  }else{
    VAR_34 = VAR_5;
  }
  FUNC_10(VAR_27, VAR_34, VAR_21->iECursor, VAR_32,
                       VAR_31+VAR_33, VAR_30-VAR_33);
  if( VAR_35 ){
    int VAR_42;
    int VAR_43 = 0;




    VAR_42 = FUNC_7(VAR_27, VAR_7, VAR_35); FUNC_1(VAR_27);
    FUNC_7(VAR_27, VAR_9, VAR_21->iECursor);
    if( VAR_21->bOrderedInnerLoop ){
      VAR_43 = ++VAR_20->nMem;
      FUNC_9(VAR_27, VAR_0, VAR_21->iECursor, VAR_29, VAR_43);
      FUNC_0((VAR_27, "seq"));
    }
    FUNC_7(VAR_27, VAR_2, VAR_21->iECursor);
    if( VAR_21->bOrderedInnerLoop ){





      int VAR_44 = FUNC_13(VAR_27) + 2;
      FUNC_9(VAR_27, VAR_3, VAR_31+VAR_29, VAR_44, VAR_43);
      FUNC_12(VAR_27, VAR_19);
      FUNC_1(VAR_27);
    }
    FUNC_15(VAR_27, VAR_42);
  }
}
