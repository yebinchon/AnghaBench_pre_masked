
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_21__ {TYPE_6__* pList; } ;
struct TYPE_18__ {int zToken; } ;
struct TYPE_17__ {TYPE_2__* pTab; } ;
struct TYPE_23__ {int op; int flags; int op2; int iColumn; TYPE_7__ x; struct TYPE_23__* pRight; struct TYPE_23__* pLeft; TYPE_4__ u; TYPE_3__ y; } ;
struct TYPE_22__ {int * db; } ;
struct TYPE_20__ {int nExpr; TYPE_5__* a; } ;
struct TYPE_19__ {TYPE_9__* pExpr; } ;
struct TYPE_16__ {TYPE_1__* aCol; } ;
struct TYPE_15__ {char* zColl; } ;
typedef TYPE_8__ Parse ;
typedef TYPE_9__ Expr ;
typedef int CollSeq ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (TYPE_9__*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int *) ;
 int * FUNC_5 (int *,int ,char const*,int ) ;
 int * FUNC_6 (TYPE_8__*,int ,int ,int ) ;

CollSeq *FUNC_7(Parse *VAR_10, Expr *VAR_11){
  sqlite3 *VAR_12 = VAR_10->db;
  CollSeq *VAR_13 = 0;
  Expr *VAR_14 = VAR_11;
  while( VAR_14 ){
    int VAR_15 = VAR_14->op;
    if( VAR_14->flags & VAR_1 ) break;
    if( VAR_15==VAR_7 ) VAR_15 = VAR_14->op2;
    if( (VAR_15==VAR_3 || VAR_15==VAR_6 || VAR_15==VAR_8)
     && VAR_14->y.pTab!=0
    ){


      int VAR_16 = VAR_14->iColumn;
      if( VAR_16>=0 ){
        const char *VAR_17 = VAR_14->y.pTab->aCol[VAR_16].zColl;
        VAR_13 = FUNC_5(VAR_12, FUNC_1(VAR_12), VAR_17, 0);
      }
      break;
    }
    if( VAR_15==VAR_4 || VAR_15==VAR_9 ){
      VAR_14 = VAR_14->pLeft;
      continue;
    }
    if( VAR_15==VAR_5 ){
      VAR_13 = FUNC_6(VAR_10, FUNC_1(VAR_12), 0, VAR_14->u.zToken);
      break;
    }
    if( VAR_14->flags & VAR_0 ){
      if( VAR_14->pLeft && (VAR_14->pLeft->flags & VAR_0)!=0 ){
        VAR_14 = VAR_14->pLeft;
      }else{
        Expr *VAR_18 = VAR_14->pRight;

        FUNC_3( VAR_14->x.pList==0 || VAR_14->pRight==0 );



        if( VAR_14->x.pList!=0 && FUNC_0(!FUNC_2(VAR_14, VAR_2)) ){
          int VAR_19;
          for(VAR_19=0; FUNC_0(VAR_19<VAR_14->x.pList->nExpr); VAR_19++){
            if( FUNC_2(VAR_14->x.pList->a[VAR_19].pExpr, VAR_0) ){
              VAR_18 = VAR_14->x.pList->a[VAR_19].pExpr;
              break;
            }
          }
        }
        VAR_14 = VAR_18;
      }
    }else{
      break;
    }
  }
  if( FUNC_4(VAR_10, VAR_13) ){
    VAR_13 = 0;
  }
  return VAR_13;
}
