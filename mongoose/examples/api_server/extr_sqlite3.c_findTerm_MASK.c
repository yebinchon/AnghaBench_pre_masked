
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_19__ {int leftColumn; } ;
struct TYPE_23__ {int leftCursor; int prereqRight; int eOperator; TYPE_9__* pExpr; TYPE_1__ u; } ;
typedef TYPE_5__ WhereTerm ;
struct TYPE_24__ {int nTerm; TYPE_7__* pParse; TYPE_5__* a; struct TYPE_24__* pOuter; } ;
typedef TYPE_6__ WhereClause ;
struct TYPE_27__ {int pLeft; scalar_t__ op; int iTable; int iColumn; int pRight; } ;
struct TYPE_26__ {int* aiColumn; int nColumn; int * azColl; TYPE_3__* pTable; } ;
struct TYPE_25__ {TYPE_4__* db; } ;
struct TYPE_22__ {TYPE_10__* pDfltColl; } ;
struct TYPE_21__ {TYPE_2__* aCol; } ;
struct TYPE_20__ {char affinity; } ;
struct TYPE_18__ {int zName; } ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ Index ;
typedef TYPE_9__ Expr ;
typedef TYPE_10__ CollSeq ;
typedef int Bitmask ;


 int FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 TYPE_10__* FUNC_3 (TYPE_7__*,int,int ) ;
 TYPE_9__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_9__*,char) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static WhereTerm *FUNC_7(
  WhereClause *VAR_5,
  int VAR_6,
  int VAR_7,
  Bitmask VAR_8,
  u32 VAR_9,
  Index *VAR_10
){
  WhereTerm *VAR_11;
  WhereTerm *VAR_12 = 0;
  WhereClause *VAR_13 = VAR_5;
  int VAR_14, VAR_15;
  Expr *VAR_16;
  Parse *VAR_17;
  int VAR_18 = VAR_7;
  int VAR_19 = 2;
  int VAR_20 = 2;
  int VAR_21[22];

  FUNC_2( VAR_6>=0 );
  VAR_21[0] = VAR_6;
  VAR_21[1] = VAR_7;
  for(;;){
    for(VAR_5=VAR_13; VAR_5; VAR_5=VAR_5->pOuter){
      for(VAR_11=VAR_5->a, VAR_15=VAR_5->nTerm; VAR_15; VAR_15--, VAR_11++){
        if( VAR_11->leftCursor==VAR_6
          && VAR_11->u.leftColumn==VAR_7
        ){
          if( (VAR_11->prereqRight & VAR_8)==0
           && (VAR_11->eOperator & VAR_9 & VAR_1)!=0
          ){
            if( VAR_18>=0 && VAR_10 && (VAR_11->eOperator & VAR_4)==0 ){
              CollSeq *VAR_22;
              char VAR_23;

              VAR_16 = VAR_11->pExpr;
              VAR_17 = VAR_5->pParse;
              VAR_23 = VAR_10->pTable->aCol[VAR_18].affinity;
              if( !FUNC_5(VAR_16, VAR_23) ){
                continue;
              }





              FUNC_2(VAR_16->pLeft);
              VAR_22 = FUNC_3(VAR_17,VAR_16->pLeft,VAR_16->pRight);
              if( VAR_22==0 ) VAR_22 = VAR_17->db->pDfltColl;

              for(VAR_14=0; VAR_10->aiColumn[VAR_14]!=VAR_18; VAR_14++){
                if( FUNC_1(VAR_14>=VAR_10->nColumn) ) return 0;
              }
              if( FUNC_6(VAR_22->zName, VAR_10->azColl[VAR_14]) ){
                continue;
              }
            }
            if( VAR_11->prereqRight==0 && (VAR_11->eOperator&VAR_2)!=0 ){
              VAR_12 = VAR_11;
              goto findTerm_success;
            }else if( VAR_12==0 ){
              VAR_12 = VAR_11;
            }
          }
          if( (VAR_11->eOperator & VAR_3)!=0
           && VAR_19<FUNC_0(VAR_21)
          ){
            VAR_16 = FUNC_4(VAR_11->pExpr->pRight);
            FUNC_2( VAR_16->op==VAR_0 );
            for(VAR_14=0; VAR_14<VAR_19; VAR_14+=2){
              if( VAR_21[VAR_14]==VAR_16->iTable && VAR_21[VAR_14+1]==VAR_16->iColumn ) break;
            }
            if( VAR_14==VAR_19 ){
              VAR_21[VAR_14] = VAR_16->iTable;
              VAR_21[VAR_14+1] = VAR_16->iColumn;
              VAR_19 += 2;
            }
          }
        }
      }
    }
    if( VAR_20>=VAR_19 ) break;
    VAR_6 = VAR_21[VAR_20++];
    VAR_7 = VAR_21[VAR_20++];
  }
findTerm_success:
  return VAR_12;
}
