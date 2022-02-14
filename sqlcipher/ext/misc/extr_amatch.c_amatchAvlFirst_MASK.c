
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pBefore; } ;
typedef TYPE_1__ amatch_avl ;



__attribute__((used)) static amatch_avl *FUNC_0(amatch_avl *VAR_0){
  if( VAR_0 ) while( VAR_0->pBefore ) VAR_0 = VAR_0->pBefore;
  return VAR_0;
}
