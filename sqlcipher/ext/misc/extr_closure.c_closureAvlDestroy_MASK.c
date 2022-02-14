
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* pAfter; struct TYPE_5__* pBefore; } ;
typedef TYPE_1__ closure_avl ;



__attribute__((used)) static void FUNC_0(closure_avl *VAR_0, void (*VAR_1)(closure_avl*)){
  if( VAR_0 ){
    FUNC_0(VAR_0->pBefore, VAR_1);
    FUNC_0(VAR_0->pAfter, VAR_1);
    VAR_1(VAR_0);
  }
}
