
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; void* arg; int callback; } ;
typedef TYPE_1__ XactCallbackItem ;
typedef int XactCallback ;


 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_1(XactCallback VAR_2, void *VAR_3)
{
 XactCallbackItem *VAR_4;

 VAR_4 = (XactCallbackItem *)
  FUNC_0(VAR_0, sizeof(XactCallbackItem));
 VAR_4->callback = VAR_2;
 VAR_4->arg = VAR_3;
 VAR_4->next = VAR_1;
 VAR_1 = VAR_4;
}
