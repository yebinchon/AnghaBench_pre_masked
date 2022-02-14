
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; void* arg; int callback; } ;
typedef TYPE_1__ ResourceReleaseCallbackItem ;
typedef int ResourceReleaseCallback ;


 scalar_t__ FUNC_0 (int ,int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void
FUNC_1(ResourceReleaseCallback VAR_2, void *VAR_3)
{
 ResourceReleaseCallbackItem *VAR_4;

 VAR_4 = (ResourceReleaseCallbackItem *)
  FUNC_0(VAR_1,
         sizeof(ResourceReleaseCallbackItem));
 VAR_4->callback = VAR_2;
 VAR_4->arg = VAR_3;
 VAR_4->next = VAR_0;
 VAR_0 = VAR_4;
}
