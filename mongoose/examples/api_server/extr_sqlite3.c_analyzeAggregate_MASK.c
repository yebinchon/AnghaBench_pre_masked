
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_11__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int u8 ;
struct SrcList_item {int iCursor; } ;
struct ExprList_item {TYPE_10__* pExpr; } ;
struct AggInfo_func {int iDistinct; int pFunc; int iMem; TYPE_10__* pExpr; } ;
struct AggInfo_col {int iSorterColumn; TYPE_10__* pExpr; int iMem; int iColumn; int iTable; int pTab; } ;
typedef void* i16 ;
struct TYPE_23__ {TYPE_8__* pNC; } ;
struct TYPE_27__ {int walkerDepth; TYPE_1__ u; } ;
typedef TYPE_5__ Walker ;
struct TYPE_31__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_30__ {int ncFlags; TYPE_11__* pAggInfo; TYPE_6__* pSrcList; TYPE_7__* pParse; } ;
struct TYPE_29__ {int nTab; int db; int nMem; } ;
struct TYPE_28__ {int nSrc; struct SrcList_item* a; } ;
struct TYPE_26__ {TYPE_3__* pList; } ;
struct TYPE_25__ {int nExpr; } ;
struct TYPE_24__ {int zToken; } ;
struct TYPE_22__ {int nColumn; int nFunc; struct AggInfo_func* aFunc; int nSortingColumn; TYPE_9__* pGroupBy; struct AggInfo_col* aCol; } ;
struct TYPE_21__ {int op; int flags; TYPE_11__* pAggInfo; void* iAgg; TYPE_4__ x; TYPE_2__ u; int op2; int iColumn; int iTable; int pTab; } ;
typedef TYPE_6__ SrcList ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ NameContext ;
typedef TYPE_9__ ExprList ;
typedef TYPE_10__ Expr ;
typedef TYPE_11__ AggInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_10__*,int) ;
 int FUNC_3 (TYPE_10__*,int ) ;
 int FUNC_4 (TYPE_10__*) ;
 int VAR_5 ;



 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int ,TYPE_11__*) ;
 int FUNC_6 (int ,TYPE_11__*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_10__*,TYPE_10__*) ;
 int FUNC_9 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(Walker *VAR_8, Expr *VAR_9){
  int VAR_10;
  NameContext *VAR_11 = VAR_8->u.pNC;
  Parse *VAR_12 = VAR_11->pParse;
  SrcList *VAR_13 = VAR_11->pSrcList;
  AggInfo *VAR_14 = VAR_11->pAggInfo;

  switch( VAR_9->op ){
    case 130:
    case 128: {
      FUNC_11( VAR_9->op==130 );
      FUNC_11( VAR_9->op==128 );


      if( FUNC_0(VAR_13!=0) ){
        struct SrcList_item *VAR_15 = VAR_13->a;
        for(VAR_10=0; VAR_10<VAR_13->nSrc; VAR_10++, VAR_15++){
          struct AggInfo_col *VAR_16;
          FUNC_7( !FUNC_2(VAR_9, VAR_3|VAR_2) );
          if( VAR_9->iTable==VAR_15->iCursor ){






            int VAR_17;
            VAR_16 = VAR_14->aCol;
            for(VAR_17=0; VAR_17<VAR_14->nColumn; VAR_17++, VAR_16++){
              if( VAR_16->iTable==VAR_9->iTable &&
                  VAR_16->iColumn==VAR_9->iColumn ){
                break;
              }
            }
            if( (VAR_17>=VAR_14->nColumn)
             && (VAR_17 = FUNC_5(VAR_12->db, VAR_14))>=0
            ){
              VAR_16 = &VAR_14->aCol[VAR_17];
              VAR_16->pTab = VAR_9->pTab;
              VAR_16->iTable = VAR_9->iTable;
              VAR_16->iColumn = VAR_9->iColumn;
              VAR_16->iMem = ++VAR_12->nMem;
              VAR_16->iSorterColumn = -1;
              VAR_16->pExpr = VAR_9;
              if( VAR_14->pGroupBy ){
                int VAR_18, VAR_19;
                ExprList *VAR_20 = VAR_14->pGroupBy;
                struct ExprList_item *VAR_21 = VAR_20->a;
                VAR_19 = VAR_20->nExpr;
                for(VAR_18=0; VAR_18<VAR_19; VAR_18++, VAR_21++){
                  Expr *VAR_22 = VAR_21->pExpr;
                  if( VAR_22->op==128 && VAR_22->iTable==VAR_9->iTable &&
                      VAR_22->iColumn==VAR_9->iColumn ){
                    VAR_16->iSorterColumn = VAR_18;
                    break;
                  }
                }
              }
              if( VAR_16->iSorterColumn<0 ){
                VAR_16->iSorterColumn = VAR_14->nSortingColumn++;
              }
            }





            FUNC_4(VAR_9);
            VAR_9->pAggInfo = VAR_14;
            VAR_9->op = 130;
            VAR_9->iAgg = (i16)VAR_17;
            break;
          }
        }
      }
      return VAR_7;
    }
    case 129: {
      if( (VAR_11->ncFlags & VAR_5)==0
       && VAR_8->walkerDepth==VAR_9->op2
      ){



        struct AggInfo_func *VAR_23 = VAR_14->aFunc;
        for(VAR_10=0; VAR_10<VAR_14->nFunc; VAR_10++, VAR_23++){
          if( FUNC_8(VAR_23->pExpr, VAR_9)==0 ){
            break;
          }
        }
        if( VAR_10>=VAR_14->nFunc ){


          u8 VAR_24 = FUNC_1(VAR_12->db);
          VAR_10 = FUNC_6(VAR_12->db, VAR_14);
          if( VAR_10>=0 ){
            FUNC_7( !FUNC_3(VAR_9, VAR_4) );
            VAR_23 = &VAR_14->aFunc[VAR_10];
            VAR_23->pExpr = VAR_9;
            VAR_23->iMem = ++VAR_12->nMem;
            FUNC_7( !FUNC_3(VAR_9, VAR_1) );
            VAR_23->pFunc = FUNC_9(VAR_12->db,
                   VAR_9->u.zToken, FUNC_10(VAR_9->u.zToken),
                   VAR_9->x.pList ? VAR_9->x.pList->nExpr : 0, VAR_24, 0);
            if( VAR_9->flags & VAR_0 ){
              VAR_23->iDistinct = VAR_12->nTab++;
            }else{
              VAR_23->iDistinct = -1;
            }
          }
        }


        FUNC_7( !FUNC_2(VAR_9, VAR_3|VAR_2) );
        FUNC_4(VAR_9);
        VAR_9->iAgg = (i16)VAR_10;
        VAR_9->pAggInfo = VAR_14;
        return VAR_7;
      }else{
        return VAR_6;
      }
    }
  }
  return VAR_6;
}
