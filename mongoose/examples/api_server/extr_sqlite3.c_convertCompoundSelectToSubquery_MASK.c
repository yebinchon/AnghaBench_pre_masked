
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct ExprList_item {TYPE_1__* pExpr; } ;
typedef int sqlite3 ;
typedef int dummy ;
struct TYPE_14__ {TYPE_5__* pParse; } ;
typedef TYPE_3__ Walker ;
typedef int Token ;
struct TYPE_16__ {int * db; } ;
struct TYPE_15__ {scalar_t__ pPrior; scalar_t__ op; scalar_t__ pOffset; scalar_t__ pLimit; TYPE_2__* pOrderBy; scalar_t__ pHaving; scalar_t__ pGroupBy; scalar_t__ pWhere; int pEList; int * pSrc; } ;
struct TYPE_13__ {int nExpr; struct ExprList_item* a; } ;
struct TYPE_12__ {int flags; } ;
typedef int SrcList ;
typedef TYPE_4__ Select ;
typedef TYPE_5__ Parse ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,int) ;
 TYPE_4__* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,scalar_t__,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int ) ;
 int * FUNC_4 (TYPE_5__*,int ,int ,int ,int *,TYPE_4__*,int ,int ) ;

__attribute__((used)) static int FUNC_5(Walker *VAR_5, Select *VAR_6){
  int VAR_7;
  Select *VAR_8;
  Select *VAR_9;
  sqlite3 *VAR_10;
  struct ExprList_item *VAR_11;
  SrcList *VAR_12;
  Parse *VAR_13;
  Token VAR_14;

  if( VAR_6->pPrior==0 ) return VAR_4;
  if( VAR_6->pOrderBy==0 ) return VAR_4;
  for(VAR_9=VAR_6; VAR_9 && (VAR_9->op==VAR_1 || VAR_9->op==VAR_2); VAR_9=VAR_9->pPrior){}
  if( VAR_9==0 ) return VAR_4;
  VAR_11 = VAR_6->pOrderBy->a;
  for(VAR_7=VAR_6->pOrderBy->nExpr-1; VAR_7>=0; VAR_7--){
    if( VAR_11[VAR_7].pExpr->flags & VAR_0 ) break;
  }
  if( VAR_7<0 ) return VAR_4;



  VAR_13 = VAR_5->pParse;
  VAR_10 = VAR_13->db;
  VAR_8 = FUNC_1(VAR_10, sizeof(*VAR_8) );
  if( VAR_8==0 ) return VAR_3;
  FUNC_0(&VAR_14, 0, sizeof(VAR_14));
  VAR_12 = FUNC_4(VAR_13,0,0,0,&VAR_14,VAR_8,0,0);
  if( VAR_12==0 ) return VAR_3;
  *VAR_8 = *VAR_6;
  VAR_6->pSrc = VAR_12;
  VAR_6->pEList = FUNC_3(VAR_13, 0, FUNC_2(VAR_10, VAR_1, 0));
  VAR_6->op = VAR_2;
  VAR_6->pWhere = 0;
  VAR_8->pGroupBy = 0;
  VAR_8->pHaving = 0;
  VAR_8->pOrderBy = 0;
  VAR_6->pPrior = 0;
  VAR_8->pLimit = 0;
  VAR_8->pOffset = 0;
  return VAR_4;
}
