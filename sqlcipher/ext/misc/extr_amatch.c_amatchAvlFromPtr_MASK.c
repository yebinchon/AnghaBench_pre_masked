
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pBefore; struct TYPE_5__* pAfter; struct TYPE_5__* pUp; } ;
typedef TYPE_1__ amatch_avl ;



__attribute__((used)) static amatch_avl **FUNC_0(amatch_avl *VAR_0, amatch_avl **VAR_1){
  amatch_avl *VAR_2 = VAR_0->pUp;
  if( VAR_2==0 ) return VAR_1;
  if( VAR_2->pAfter==VAR_0 ) return &VAR_2->pAfter;
  return &VAR_2->pBefore;
}
