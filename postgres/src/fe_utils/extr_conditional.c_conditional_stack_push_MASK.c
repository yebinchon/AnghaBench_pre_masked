
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ifState ;
struct TYPE_5__ {TYPE_1__* head; } ;
struct TYPE_4__ {int query_len; int paren_depth; struct TYPE_4__* next; int if_state; } ;
typedef TYPE_1__ IfStackElem ;
typedef TYPE_2__* ConditionalStack ;


 scalar_t__ FUNC_0 (int) ;

void
FUNC_1(ConditionalStack VAR_0, ifState VAR_1)
{
 IfStackElem *VAR_2 = (IfStackElem *) FUNC_0(sizeof(IfStackElem));

 VAR_2->if_state = VAR_1;
 VAR_2->query_len = -1;
 VAR_2->paren_depth = -1;
 VAR_2->next = VAR_0->head;
 VAR_0->head = VAR_2;
}
