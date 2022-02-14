
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_18__ {int nFunc; TYPE_1__* aFunc; } ;
struct TYPE_15__ {char* zToken; } ;
struct TYPE_12__ {TYPE_6__* pList; } ;
struct TYPE_17__ {scalar_t__ op; TYPE_5__ u; TYPE_2__ x; } ;
struct TYPE_16__ {int nExpr; TYPE_4__* a; } ;
struct TYPE_14__ {TYPE_3__* pExpr; } ;
struct TYPE_13__ {scalar_t__ op; } ;
struct TYPE_11__ {TYPE_7__* pExpr; } ;
typedef TYPE_6__ ExprList ;
typedef TYPE_7__ Expr ;
typedef TYPE_8__ AggInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static u8 FUNC_2(AggInfo *VAR_5, ExprList **VAR_6){
  int VAR_7 = VAR_4;

  *VAR_6 = 0;
  if( VAR_5->nFunc==1 ){
    Expr *VAR_8 = VAR_5->aFunc[0].pExpr;
    ExprList *VAR_9 = VAR_8->x.pList;

    FUNC_0( VAR_8->op==VAR_1 );
    if( VAR_9 && VAR_9->nExpr==1 && VAR_9->a[0].pExpr->op==VAR_0 ){
      const char *VAR_10 = VAR_8->u.zToken;
      if( FUNC_1(VAR_10, "min")==0 ){
        VAR_7 = VAR_3;
        *VAR_6 = VAR_9;
      }else if( FUNC_1(VAR_10, "max")==0 ){
        VAR_7 = VAR_2;
        *VAR_6 = VAR_9;
      }
    }
  }

  FUNC_0( *VAR_6==0 || (*VAR_6)->nExpr==1 );
  return VAR_7;
}
