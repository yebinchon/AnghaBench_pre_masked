
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


struct WindowRewrite {int pTab; TYPE_5__* pWin; TYPE_9__* pSub; TYPE_3__* pSrc; scalar_t__ pSubSelect; } ;
struct TYPE_26__ {scalar_t__ iEphCsr; TYPE_8__* pOwner; struct TYPE_26__* pNextWin; } ;
typedef TYPE_5__ Window ;
struct TYPE_22__ {struct WindowRewrite* pRewrite; } ;
struct TYPE_27__ {TYPE_7__* pParse; TYPE_1__ u; } ;
typedef TYPE_6__ Walker ;
struct TYPE_30__ {int nExpr; } ;
struct TYPE_25__ {int pTab; TYPE_5__* pWin; } ;
struct TYPE_29__ {int op; scalar_t__ iTable; TYPE_4__ y; int iColumn; } ;
struct TYPE_28__ {int db; } ;
struct TYPE_24__ {int nSrc; TYPE_2__* a; } ;
struct TYPE_23__ {scalar_t__ iCursor; } ;
typedef TYPE_7__ Parse ;
typedef TYPE_8__ Expr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_8__*,int ) ;
 int FUNC_1 (TYPE_8__*,int ) ;
 int FUNC_2 (TYPE_8__*,int ) ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_8__*,int ,int) ;
 int FUNC_5 (int ,TYPE_8__*) ;
 TYPE_8__* FUNC_6 (int ,TYPE_8__*,int ) ;
 TYPE_9__* FUNC_7 (TYPE_7__*,TYPE_9__*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_8(Walker *VAR_4, Expr *VAR_5){
  struct WindowRewrite *VAR_6 = VAR_4->u.pRewrite;
  Parse *VAR_7 = VAR_4->pParse;






  if( VAR_6->pSubSelect ){
    if( VAR_5->op!=129 ){
      return VAR_2;
    }else{
      int VAR_8 = VAR_6->pSrc->nSrc;
      int VAR_9;
      for(VAR_9=0; VAR_9<VAR_8; VAR_9++){
        if( VAR_5->iTable==VAR_6->pSrc->a[VAR_9].iCursor ) break;
      }
      if( VAR_9==VAR_8 ) return VAR_2;
    }
  }

  switch( VAR_5->op ){

    case 128:
      if( !FUNC_1(VAR_5, VAR_1) ){
        break;
      }else{
        Window *VAR_10;
        for(VAR_10=VAR_6->pWin; VAR_10; VAR_10=VAR_10->pNextWin){
          if( VAR_5->y.pWin==VAR_10 ){
            FUNC_3( VAR_10->pOwner==VAR_5 );
            return VAR_3;
          }
        }
      }


    case 130:
    case 129: {
      Expr *VAR_11 = FUNC_6(VAR_7->db, VAR_5, 0);
      VAR_6->pSub = FUNC_7(VAR_7, VAR_6->pSub, VAR_11);
      if( VAR_6->pSub ){
        FUNC_3( FUNC_1(VAR_5, VAR_0)==0 );
        FUNC_2(VAR_5, VAR_0);
        FUNC_5(VAR_7->db, VAR_5);
        FUNC_0(VAR_5, VAR_0);
        FUNC_4(VAR_5, 0, sizeof(Expr));

        VAR_5->op = 129;
        VAR_5->iColumn = VAR_6->pSub->nExpr-1;
        VAR_5->iTable = VAR_6->pWin->iEphCsr;
        VAR_5->y.pTab = VAR_6->pTab;
      }

      break;
    }

    default:
      break;
  }

  return VAR_2;
}
