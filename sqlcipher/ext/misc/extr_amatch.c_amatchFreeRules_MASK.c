
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* pRule; } ;
typedef TYPE_1__ amatch_vtab ;
struct TYPE_6__ {struct TYPE_6__* pNext; } ;
typedef TYPE_2__ amatch_rule ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(amatch_vtab *VAR_0){
  while( VAR_0->pRule ){
    amatch_rule *VAR_1 = VAR_0->pRule;
    VAR_0->pRule = VAR_1->pNext;
    FUNC_0(VAR_1);
  }
  VAR_0->pRule = 0;
}
