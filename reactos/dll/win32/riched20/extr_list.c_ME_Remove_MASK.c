
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ ME_DisplayItem ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(ME_DisplayItem *VAR_0)
{
  ME_DisplayItem *VAR_1 = VAR_0->next;
  ME_DisplayItem *VAR_2 = VAR_0->prev;
  FUNC_0(VAR_1);
  FUNC_0(VAR_2);
  VAR_2->next = VAR_1;
  VAR_1->prev = VAR_2;
}
