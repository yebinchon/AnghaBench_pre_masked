
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ifState ;
struct TYPE_6__ {TYPE_1__* head; } ;
struct TYPE_5__ {int if_state; } ;
typedef TYPE_2__* ConditionalStack ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;

bool
FUNC_1(ConditionalStack VAR_0, ifState VAR_1)
{
 if (FUNC_0(VAR_0))
  return 0;
 VAR_0->head->if_state = VAR_1;
 return 1;
}
