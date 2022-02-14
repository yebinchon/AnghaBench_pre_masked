
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int u8 ;
struct SrcList_item {int iCursor; } ;
struct ExprList_item {TYPE_10__* pExpr; } ;
struct AggInfo_func {int iDistinct; int pFunc; int iMem; TYPE_10__* pExpr; } ;
struct AggInfo_col {int iSorterColumn; TYPE_10__* pExpr; int iMem; int iColumn; int iTable; int pTab; } ;
typedef void* i16 ;
struct TYPE_22__ {TYPE_8__* pNC; } ;
struct TYPE_26__ {int walkerDepth; TYPE_1__ u; } ;
typedef TYPE_5__ Walker ;
struct TYPE_30__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_29__ {int ncFlags; TYPE_11__* pAggInfo; TYPE_6__* pSrcList; TYPE_7__* pParse; } ;
struct TYPE_28__ {int nTab; int db; int nMem; } ;
struct TYPE_27__ {int nSrc; struct SrcList_item* a; } ;
struct TYPE_25__ {TYPE_3__* pList; } ;
struct TYPE_24__ {int nExpr; } ;
struct TYPE_23__ {int zToken; } ;
struct TYPE_21__ {int nColumn; int nFunc; struct AggInfo_func* aFunc; int nSortingColumn; TYPE_9__* pGroupBy; struct AggInfo_col* aCol; } ;
struct TYPE_20__ {int op; int flags; TYPE_11__* pAggInfo; void* iAgg; TYPE_4__ x; TYPE_2__ u; int op2; int iColumn; int iTable; int pTab; } ;
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
 int VAR_5 ;
 int FUNC_2 (TYPE_10__*,int) ;
 int FUNC_3 (TYPE_10__*,int ) ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int ,TYPE_11__*) ;
 int FUNC_5 (int ,TYPE_11__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_10__*,TYPE_10__*,int) ;
 int FUNC_8 (int ,int ,int ,int ,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(Walker *VAR_9, Expr *VAR_10){
  int VAR_11;
  NameContext *VAR_12 = VAR_9->u.pNC;
  Parse *VAR_13 = VAR_12->pParse;
  SrcList *VAR_14 = VAR_12->pSrcList;
  AggInfo *VAR_15 = VAR_12->pAggInfo;

  switch( VAR_10->op ){
    case 130:
    case 128: {
      FUNC_9( VAR_10->op==130 );
      FUNC_9( VAR_10->op==128 );


      if( FUNC_0(VAR_14!=0) ){
        struct SrcList_item *VAR_16 = VAR_14->a;
        for(VAR_11=0; VAR_11<VAR_14->nSrc; VAR_11++, VAR_16++){
          struct AggInfo_col *VAR_17;
          FUNC_6( !FUNC_2(VAR_10, VAR_4|VAR_3) );
          if( VAR_10->iTable==VAR_16->iCursor ){






            int VAR_18;
            VAR_17 = VAR_15->aCol;
            for(VAR_18=0; VAR_18<VAR_15->nColumn; VAR_18++, VAR_17++){
              if( VAR_17->iTable==VAR_10->iTable &&
                  VAR_17->iColumn==VAR_10->iColumn ){
                break;
              }
            }
            if( (VAR_18>=VAR_15->nColumn)
             && (VAR_18 = FUNC_4(VAR_13->db, VAR_15))>=0
            ){
              VAR_17 = &VAR_15->aCol[VAR_18];
              VAR_17->pTab = VAR_10->pTab;
              VAR_17->iTable = VAR_10->iTable;
              VAR_17->iColumn = VAR_10->iColumn;
              VAR_17->iMem = ++VAR_13->nMem;
              VAR_17->iSorterColumn = -1;
              VAR_17->pExpr = VAR_10;
              if( VAR_15->pGroupBy ){
                int VAR_19, VAR_20;
                ExprList *VAR_21 = VAR_15->pGroupBy;
                struct ExprList_item *VAR_22 = VAR_21->a;
                VAR_20 = VAR_21->nExpr;
                for(VAR_19=0; VAR_19<VAR_20; VAR_19++, VAR_22++){
                  Expr *VAR_23 = VAR_22->pExpr;
                  if( VAR_23->op==128 && VAR_23->iTable==VAR_10->iTable &&
                      VAR_23->iColumn==VAR_10->iColumn ){
                    VAR_17->iSorterColumn = VAR_19;
                    break;
                  }
                }
              }
              if( VAR_17->iSorterColumn<0 ){
                VAR_17->iSorterColumn = VAR_15->nSortingColumn++;
              }
            }





            FUNC_3(VAR_10, VAR_2);
            VAR_10->pAggInfo = VAR_15;
            VAR_10->op = 130;
            VAR_10->iAgg = (i16)VAR_18;
            break;
          }
        }
      }
      return VAR_8;
    }
    case 129: {
      if( (VAR_12->ncFlags & VAR_6)==0
       && VAR_9->walkerDepth==VAR_10->op2
      ){



        struct AggInfo_func *VAR_24 = VAR_15->aFunc;
        for(VAR_11=0; VAR_11<VAR_15->nFunc; VAR_11++, VAR_24++){
          if( FUNC_7(VAR_24->pExpr, VAR_10, -1)==0 ){
            break;
          }
        }
        if( VAR_11>=VAR_15->nFunc ){


          u8 VAR_25 = FUNC_1(VAR_13->db);
          VAR_11 = FUNC_5(VAR_13->db, VAR_15);
          if( VAR_11>=0 ){
            FUNC_6( !FUNC_2(VAR_10, VAR_5) );
            VAR_24 = &VAR_15->aFunc[VAR_11];
            VAR_24->pExpr = VAR_10;
            VAR_24->iMem = ++VAR_13->nMem;
            FUNC_6( !FUNC_2(VAR_10, VAR_1) );
            VAR_24->pFunc = FUNC_8(VAR_13->db,
                   VAR_10->u.zToken,
                   VAR_10->x.pList ? VAR_10->x.pList->nExpr : 0, VAR_25, 0);
            if( VAR_10->flags & VAR_0 ){
              VAR_24->iDistinct = VAR_13->nTab++;
            }else{
              VAR_24->iDistinct = -1;
            }
          }
        }


        FUNC_6( !FUNC_2(VAR_10, VAR_4|VAR_3) );
        FUNC_3(VAR_10, VAR_2);
        VAR_10->iAgg = (i16)VAR_11;
        VAR_10->pAggInfo = VAR_15;
        return VAR_8;
      }else{
        return VAR_7;
      }
    }
  }
  return VAR_7;
}
