
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
typedef struct TYPE_37__ TYPE_14__ ;
typedef struct TYPE_36__ TYPE_13__ ;
typedef struct TYPE_35__ TYPE_12__ ;
typedef struct TYPE_34__ TYPE_11__ ;
typedef struct TYPE_33__ TYPE_10__ ;


struct InLoop {int iCur; int iBase; int nPrefix; int eEndLoopOp; int addrInTop; } ;
struct TYPE_46__ {int mallocFailed; } ;
typedef TYPE_9__ sqlite3 ;
struct TYPE_33__ {TYPE_14__* pExpr; } ;
typedef TYPE_10__ WhereTerm ;
struct TYPE_39__ {TYPE_1__* pIndex; } ;
struct TYPE_40__ {TYPE_2__ btree; } ;
struct TYPE_34__ {int wsFlags; int nLTerm; TYPE_10__** aLTerm; TYPE_3__ u; } ;
typedef TYPE_11__ WhereLoop ;
struct TYPE_45__ {int nIn; struct InLoop* aInLoop; } ;
struct TYPE_44__ {TYPE_8__ in; } ;
struct TYPE_35__ {TYPE_7__ u; int addrNxt; TYPE_11__* pWLoop; } ;
typedef TYPE_12__ WhereLevel ;
typedef int Vdbe ;
struct TYPE_43__ {TYPE_5__* pSelect; } ;
struct TYPE_42__ {TYPE_4__* pEList; } ;
struct TYPE_41__ {int nExpr; } ;
struct TYPE_38__ {scalar_t__* aSortOrder; } ;
struct TYPE_37__ {scalar_t__ op; int flags; int iTable; TYPE_6__ x; int pRight; } ;
struct TYPE_36__ {TYPE_9__* db; int * pVdbe; } ;
typedef TYPE_13__ Parse ;
typedef TYPE_14__ Expr ;


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
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_12__*,TYPE_10__*) ;
 TYPE_14__* FUNC_4 (TYPE_13__*,int,TYPE_11__*,TYPE_14__*) ;
 int FUNC_5 (TYPE_9__*,int*) ;
 scalar_t__ FUNC_6 (TYPE_9__*,int) ;
 struct InLoop* FUNC_7 (TYPE_9__*,struct InLoop*,int) ;
 int FUNC_8 (TYPE_13__*,int ,int) ;
 int FUNC_9 (TYPE_9__*,TYPE_14__*) ;
 int FUNC_10 (TYPE_13__*,TYPE_14__*,int ,int ,int*,int*) ;
 int FUNC_11 (int *,int ,int) ;
 int FUNC_12 (int *,int ,int,int) ;
 int FUNC_13 (int *,int ,int,int,int) ;
 int FUNC_14 (TYPE_13__*) ;
 int FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(
  Parse *VAR_22,
  WhereTerm *VAR_23,
  WhereLevel *VAR_24,
  int VAR_25,
  int VAR_26,
  int VAR_27
){
  Expr *VAR_28 = VAR_23->pExpr;
  Vdbe *VAR_29 = VAR_22->pVdbe;
  int VAR_30;

  FUNC_2( VAR_24->pWLoop->aLTerm[VAR_25]==VAR_23 );
  FUNC_2( VAR_27>0 );
  if( VAR_28->op==VAR_14 || VAR_28->op==VAR_16 ){
    VAR_30 = FUNC_8(VAR_22, VAR_28->pRight, VAR_27);
  }else if( VAR_28->op==VAR_17 ){
    VAR_30 = VAR_27;
    FUNC_12(VAR_29, VAR_10, 0, VAR_30);

  }else{
    int VAR_31 = VAR_3;
    int VAR_32;
    struct InLoop *VAR_33;
    WhereLoop *VAR_34 = VAR_24->pWLoop;
    int VAR_35;
    int VAR_36 = 0;
    int *VAR_37 = 0;

    if( (VAR_34->wsFlags & VAR_21)==0
      && VAR_34->u.btree.pIndex!=0
      && VAR_34->u.btree.pIndex->aSortOrder[VAR_25]
    ){
      FUNC_15( VAR_25==0 );
      FUNC_15( VAR_26 );
      VAR_26 = !VAR_26;
    }
    FUNC_2( VAR_28->op==VAR_15 );
    VAR_30 = VAR_27;

    for(VAR_35=0; VAR_35<VAR_25; VAR_35++){
      if( VAR_34->aLTerm[VAR_35] && VAR_34->aLTerm[VAR_35]->pExpr==VAR_28 ){
        FUNC_3(VAR_24, VAR_23);
        return VAR_27;
      }
    }
    for(VAR_35=VAR_25;VAR_35<VAR_34->nLTerm; VAR_35++){
      FUNC_2( VAR_34->aLTerm[VAR_35]!=0 );
      if( VAR_34->aLTerm[VAR_35]->pExpr==VAR_28 ) VAR_36++;
    }

    VAR_32 = 0;
    if( (VAR_28->flags & VAR_0)==0 || VAR_28->x.pSelect->pEList->nExpr==1 ){
      VAR_31 = FUNC_10(VAR_22, VAR_28, VAR_2, 0, 0, &VAR_32);
    }else{
      sqlite3 *VAR_38 = VAR_22->db;
      VAR_28 = FUNC_4(VAR_22, VAR_25, VAR_34, VAR_28);

      if( !VAR_38->mallocFailed ){
        VAR_37 = (int*)FUNC_6(VAR_22->db, sizeof(int)*VAR_36);
        VAR_31 = FUNC_10(VAR_22, VAR_28, VAR_2, 0, VAR_37, &VAR_32);
        VAR_23->pExpr->iTable = VAR_32;
      }
      FUNC_9(VAR_38, VAR_28);
      VAR_28 = VAR_23->pExpr;
    }

    if( VAR_31==VAR_1 ){
      FUNC_15( VAR_26 );
      VAR_26 = !VAR_26;
    }
    FUNC_12(VAR_29, VAR_26 ? VAR_7 : VAR_12, VAR_32, 0);
    FUNC_1(VAR_29, VAR_26);
    FUNC_1(VAR_29, !VAR_26);
    FUNC_2( (VAR_34->wsFlags & VAR_20)==0 );

    VAR_34->wsFlags |= VAR_18;
    if( VAR_24->u.in.nIn==0 ){
      VAR_24->addrNxt = FUNC_14(VAR_22);
    }

    VAR_35 = VAR_24->u.in.nIn;
    VAR_24->u.in.nIn += VAR_36;
    VAR_24->u.in.aInLoop =
       FUNC_7(VAR_22->db, VAR_24->u.in.aInLoop,
                              sizeof(VAR_24->u.in.aInLoop[0])*VAR_24->u.in.nIn);
    VAR_33 = VAR_24->u.in.aInLoop;
    if( VAR_33 ){
      int VAR_39 = 0;
      VAR_33 += VAR_35;
      for(VAR_35=VAR_25;VAR_35<VAR_34->nLTerm; VAR_35++){
        if( VAR_34->aLTerm[VAR_35]->pExpr==VAR_28 ){
          int VAR_40 = VAR_30 + VAR_35 - VAR_25;
          if( VAR_31==VAR_4 ){
            VAR_33->addrInTop = FUNC_12(VAR_29, VAR_13, VAR_32, VAR_40);
          }else{
            int VAR_41 = VAR_37 ? VAR_37[VAR_39++] : 0;
            VAR_33->addrInTop = FUNC_13(VAR_29,VAR_5,VAR_32, VAR_41, VAR_40);
          }
          FUNC_11(VAR_29, VAR_6, VAR_40); FUNC_0(VAR_29);
          if( VAR_35==VAR_25 ){
            VAR_33->iCur = VAR_32;
            VAR_33->eEndLoopOp = VAR_26 ? VAR_11 : VAR_8;
            if( VAR_25>0 && (VAR_34->wsFlags & VAR_21)==0 ){
              VAR_33->iBase = VAR_30 - VAR_35;
              VAR_33->nPrefix = VAR_35;
              VAR_34->wsFlags |= VAR_19;
            }else{
              VAR_33->nPrefix = 0;
            }
          }else{
            VAR_33->eEndLoopOp = VAR_9;
          }
          VAR_33++;
        }
      }
    }else{
      VAR_24->u.in.nIn = 0;
    }
    FUNC_5(VAR_22->db, VAR_37);

  }
  FUNC_3(VAR_24, VAR_23);
  return VAR_30;
}
