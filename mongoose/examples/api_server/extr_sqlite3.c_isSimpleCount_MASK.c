
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_22__ {int pSelect; } ;
typedef TYPE_7__ Table ;
struct TYPE_24__ {scalar_t__ op; int flags; } ;
struct TYPE_23__ {TYPE_4__* pEList; TYPE_2__* pSrc; scalar_t__ pWhere; int pGroupBy; } ;
struct TYPE_21__ {TYPE_5__* pFunc; } ;
struct TYPE_20__ {int flags; } ;
struct TYPE_19__ {int nExpr; TYPE_3__* a; } ;
struct TYPE_18__ {TYPE_9__* pExpr; } ;
struct TYPE_17__ {int nSrc; TYPE_1__* a; } ;
struct TYPE_16__ {TYPE_7__* pTab; scalar_t__ pSelect; } ;
struct TYPE_15__ {scalar_t__ nFunc; TYPE_6__* aFunc; } ;
typedef TYPE_8__ Select ;
typedef TYPE_9__ Expr ;
typedef TYPE_10__ AggInfo ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_7__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int) ;

__attribute__((used)) static Table *FUNC_3(Select *VAR_3, AggInfo *VAR_4){
  Table *VAR_5;
  Expr *VAR_6;

  FUNC_2( !VAR_3->pGroupBy );

  if( VAR_3->pWhere || VAR_3->pEList->nExpr!=1
   || VAR_3->pSrc->nSrc!=1 || VAR_3->pSrc->a[0].pSelect
  ){
    return 0;
  }
  VAR_5 = VAR_3->pSrc->a[0].pTab;
  VAR_6 = VAR_3->pEList->a[0].pExpr;
  FUNC_2( VAR_5 && !VAR_5->pSelect && VAR_6 );

  if( FUNC_0(VAR_5) ) return 0;
  if( VAR_6->op!=VAR_2 ) return 0;
  if( FUNC_1(VAR_4->nFunc==0) ) return 0;
  if( (VAR_4->aFunc[0].pFunc->flags&VAR_1)==0 ) return 0;
  if( VAR_6->flags&VAR_0 ) return 0;

  return VAR_5;
}
