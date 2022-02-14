
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ iLimit; int pArg; int (* xDestroy ) (int ) ;TYPE_1__** ppPrev; TYPE_1__* pNext; } ;
typedef TYPE_2__ quotaGroup ;
struct TYPE_7__ {struct TYPE_7__** ppPrev; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(quotaGroup *VAR_0){
  if( VAR_0->iLimit==0 && FUNC_0(VAR_0)==0 ){
    FUNC_1(VAR_0);
    *VAR_0->ppPrev = VAR_0->pNext;
    if( VAR_0->pNext ) VAR_0->pNext->ppPrev = VAR_0->ppPrev;
    if( VAR_0->xDestroy ) VAR_0->xDestroy(VAR_0->pArg);
    FUNC_2(VAR_0);
  }
}
