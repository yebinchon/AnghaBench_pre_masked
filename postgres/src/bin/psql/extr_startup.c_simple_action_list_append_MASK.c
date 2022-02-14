
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef enum _actions { ____Placeholder__actions } _actions ;
struct TYPE_5__ {TYPE_1__* tail; TYPE_1__* head; } ;
struct TYPE_4__ {int action; struct TYPE_4__* next; int * val; } ;
typedef TYPE_1__ SimpleActionListCell ;
typedef TYPE_2__ SimpleActionList ;


 scalar_t__ FUNC_0 (int) ;
 int * FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(SimpleActionList *VAR_0,
        enum _actions VAR_1, const char *VAR_2)
{
 SimpleActionListCell *VAR_3;

 VAR_3 = (SimpleActionListCell *) FUNC_0(sizeof(SimpleActionListCell));

 VAR_3->next = ((void*)0);
 VAR_3->action = VAR_1;
 if (VAR_2)
  VAR_3->val = FUNC_1(VAR_2);
 else
  VAR_3->val = ((void*)0);

 if (VAR_0->tail)
  VAR_0->tail->next = VAR_3;
 else
  VAR_0->head = VAR_3;
 VAR_0->tail = VAR_3;
}
