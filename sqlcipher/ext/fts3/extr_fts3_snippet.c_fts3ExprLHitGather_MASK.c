
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ bEof; scalar_t__ iDocid; struct TYPE_10__* pRight; struct TYPE_10__* pLeft; } ;
struct TYPE_9__ {TYPE_1__* pCursor; } ;
struct TYPE_8__ {scalar_t__ iPrevId; } ;
typedef TYPE_2__ MatchInfo ;
typedef TYPE_3__ Fts3Expr ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(
  Fts3Expr *VAR_1,
  MatchInfo *VAR_2
){
  int VAR_3 = VAR_0;
  FUNC_0( (VAR_1->pLeft==0)==(VAR_1->pRight==0) );
  if( VAR_1->bEof==0 && VAR_1->iDocid==VAR_2->pCursor->iPrevId ){
    if( VAR_1->pLeft ){
      VAR_3 = FUNC_2(VAR_1->pLeft, VAR_2);
      if( VAR_3==VAR_0 ) VAR_3 = FUNC_2(VAR_1->pRight, VAR_2);
    }else{
      VAR_3 = FUNC_1(VAR_1, VAR_2);
    }
  }
  return VAR_3;
}
