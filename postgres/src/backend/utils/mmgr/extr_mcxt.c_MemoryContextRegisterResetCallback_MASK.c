
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int isReset; TYPE_1__* reset_cbs; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ MemoryContextCallback ;
typedef TYPE_2__* MemoryContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(MemoryContext VAR_0,
           MemoryContextCallback *VAR_1)
{
 FUNC_0(FUNC_1(VAR_0));


 VAR_1->next = VAR_0->reset_cbs;
 VAR_0->reset_cbs = VAR_1;

 VAR_0->isReset = 0;
}
