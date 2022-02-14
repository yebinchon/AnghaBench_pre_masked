
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* node; } ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ RegisNode ;
typedef TYPE_2__ Regis ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(Regis *VAR_0)
{
 RegisNode *VAR_1 = VAR_0->node,
      *VAR_2;

 while (VAR_1)
 {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }

 VAR_0->node = ((void*)0);
}
