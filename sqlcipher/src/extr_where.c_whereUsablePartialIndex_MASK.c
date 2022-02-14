
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {TYPE_6__* pExpr; } ;
typedef TYPE_3__ WhereTerm ;
struct TYPE_16__ {int nTerm; TYPE_3__* a; TYPE_1__* pWInfo; } ;
typedef TYPE_4__ WhereClause ;
struct TYPE_18__ {scalar_t__ op; int iRightJoinTable; struct TYPE_18__* pRight; struct TYPE_18__* pLeft; } ;
struct TYPE_17__ {TYPE_2__* db; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_13__ {TYPE_5__* pParse; } ;
typedef TYPE_5__ Parse ;
typedef TYPE_6__ Expr ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_5__*,TYPE_6__*,TYPE_6__*,int) ;

__attribute__((used)) static int FUNC_2(int VAR_3, WhereClause *VAR_4, Expr *VAR_5){
  int VAR_6;
  WhereTerm *VAR_7;
  Parse *VAR_8 = VAR_4->pWInfo->pParse;
  while( VAR_5->op==VAR_2 ){
    if( !FUNC_2(VAR_3,VAR_4,VAR_5->pLeft) ) return 0;
    VAR_5 = VAR_5->pRight;
  }
  if( VAR_8->db->flags & VAR_1 ) VAR_8 = 0;
  for(VAR_6=0, VAR_7=VAR_4->a; VAR_6<VAR_4->nTerm; VAR_6++, VAR_7++){
    Expr *VAR_9 = VAR_7->pExpr;
    if( (!FUNC_0(VAR_9, VAR_0) || VAR_9->iRightJoinTable==VAR_3)
     && FUNC_1(VAR_8, VAR_9, VAR_5, VAR_3)
    ){
      return 1;
    }
  }
  return 0;
}
