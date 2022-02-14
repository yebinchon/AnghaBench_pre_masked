
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_13__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int u8 ;
struct SrcList_item {int iCursor; } ;
struct ExprList_item {TYPE_12__* pExpr; } ;
struct AggInfo_func {int iDistinct; int pFunc; int iMem; TYPE_12__* pExpr; } ;
struct AggInfo_col {int iSorterColumn; TYPE_12__* pExpr; int iMem; int iColumn; int iTable; int pTab; } ;
typedef void* i16 ;
struct TYPE_26__ {TYPE_10__* pNC; } ;
struct TYPE_32__ {int walkerDepth; TYPE_1__ u; } ;
typedef TYPE_7__ Walker ;
struct TYPE_34__ {int nTab; int db; int nMem; } ;
struct TYPE_33__ {int nSrc; struct SrcList_item* a; } ;
struct TYPE_31__ {TYPE_5__* pList; } ;
struct TYPE_30__ {int nExpr; } ;
struct TYPE_29__ {int zToken; } ;
struct TYPE_28__ {int pTab; } ;
struct TYPE_27__ {TYPE_13__* pAggInfo; } ;
struct TYPE_25__ {int nColumn; int nFunc; struct AggInfo_func* aFunc; int nSortingColumn; TYPE_11__* pGroupBy; struct AggInfo_col* aCol; } ;
struct TYPE_24__ {int op; int flags; TYPE_13__* pAggInfo; void* iAgg; TYPE_6__ x; TYPE_4__ u; int op2; int iColumn; int iTable; TYPE_3__ y; } ;
struct TYPE_23__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_22__ {int ncFlags; TYPE_2__ uNC; TYPE_8__* pSrcList; TYPE_9__* pParse; } ;
typedef TYPE_8__ SrcList ;
typedef TYPE_9__ Parse ;
typedef TYPE_10__ NameContext ;
typedef TYPE_11__ ExprList ;
typedef TYPE_12__ Expr ;
typedef TYPE_13__ AggInfo ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_12__*,int) ;
 int FUNC_3 (TYPE_12__*,int ) ;
 int VAR_6 ;
 int VAR_7 ;



 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ,TYPE_13__*) ;
 int FUNC_5 (int ,TYPE_13__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,TYPE_12__*,TYPE_12__*,int) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(Walker *VAR_10, Expr *VAR_11){
  int VAR_12;
  NameContext *VAR_13 = VAR_10->u.pNC;
  Parse *VAR_14 = VAR_13->pParse;
  SrcList *VAR_15 = VAR_13->pSrcList;
  AggInfo *VAR_16 = VAR_13->uNC.pAggInfo;

  FUNC_6( VAR_13->ncFlags & VAR_7 );
  switch( VAR_11->op ){
    case 130:
    case 128: {
      FUNC_9( VAR_11->op==130 );
      FUNC_9( VAR_11->op==128 );


      if( FUNC_0(VAR_15!=0) ){
        struct SrcList_item *VAR_17 = VAR_15->a;
        for(VAR_12=0; VAR_12<VAR_15->nSrc; VAR_12++, VAR_17++){
          struct AggInfo_col *VAR_18;
          FUNC_6( !FUNC_2(VAR_11, VAR_4|VAR_3) );
          if( VAR_11->iTable==VAR_17->iCursor ){






            int VAR_19;
            VAR_18 = VAR_16->aCol;
            for(VAR_19=0; VAR_19<VAR_16->nColumn; VAR_19++, VAR_18++){
              if( VAR_18->iTable==VAR_11->iTable &&
                  VAR_18->iColumn==VAR_11->iColumn ){
                break;
              }
            }
            if( (VAR_19>=VAR_16->nColumn)
             && (VAR_19 = FUNC_4(VAR_14->db, VAR_16))>=0
            ){
              VAR_18 = &VAR_16->aCol[VAR_19];
              VAR_18->pTab = VAR_11->y.pTab;
              VAR_18->iTable = VAR_11->iTable;
              VAR_18->iColumn = VAR_11->iColumn;
              VAR_18->iMem = ++VAR_14->nMem;
              VAR_18->iSorterColumn = -1;
              VAR_18->pExpr = VAR_11;
              if( VAR_16->pGroupBy ){
                int VAR_20, VAR_21;
                ExprList *VAR_22 = VAR_16->pGroupBy;
                struct ExprList_item *VAR_23 = VAR_22->a;
                VAR_21 = VAR_22->nExpr;
                for(VAR_20=0; VAR_20<VAR_21; VAR_20++, VAR_23++){
                  Expr *VAR_24 = VAR_23->pExpr;
                  if( VAR_24->op==128 && VAR_24->iTable==VAR_11->iTable &&
                      VAR_24->iColumn==VAR_11->iColumn ){
                    VAR_18->iSorterColumn = VAR_20;
                    break;
                  }
                }
              }
              if( VAR_18->iSorterColumn<0 ){
                VAR_18->iSorterColumn = VAR_16->nSortingColumn++;
              }
            }





            FUNC_3(VAR_11, VAR_2);
            VAR_11->pAggInfo = VAR_16;
            VAR_11->op = 130;
            VAR_11->iAgg = (i16)VAR_19;
            break;
          }
        }
      }
      return VAR_9;
    }
    case 129: {
      if( (VAR_13->ncFlags & VAR_6)==0
       && VAR_10->walkerDepth==VAR_11->op2
      ){



        struct AggInfo_func *VAR_25 = VAR_16->aFunc;
        for(VAR_12=0; VAR_12<VAR_16->nFunc; VAR_12++, VAR_25++){
          if( FUNC_7(0, VAR_25->pExpr, VAR_11, -1)==0 ){
            break;
          }
        }
        if( VAR_12>=VAR_16->nFunc ){


          u8 VAR_26 = FUNC_1(VAR_14->db);
          VAR_12 = FUNC_5(VAR_14->db, VAR_16);
          if( VAR_12>=0 ){
            FUNC_6( !FUNC_2(VAR_11, VAR_5) );
            VAR_25 = &VAR_16->aFunc[VAR_12];
            VAR_25->pExpr = VAR_11;
            VAR_25->iMem = ++VAR_14->nMem;
            FUNC_6( !FUNC_2(VAR_11, VAR_1) );
            VAR_25->pFunc = FUNC_8(VAR_14->db,
                   VAR_11->u.zToken,
                   VAR_11->x.pList ? VAR_11->x.pList->nExpr : 0, VAR_26, 0);
            if( VAR_11->flags & VAR_0 ){
              VAR_25->iDistinct = VAR_14->nTab++;
            }else{
              VAR_25->iDistinct = -1;
            }
          }
        }


        FUNC_6( !FUNC_2(VAR_11, VAR_4|VAR_3) );
        FUNC_3(VAR_11, VAR_2);
        VAR_11->iAgg = (i16)VAR_12;
        VAR_11->pAggInfo = VAR_16;
        return VAR_9;
      }else{
        return VAR_8;
      }
    }
  }
  return VAR_8;
}
