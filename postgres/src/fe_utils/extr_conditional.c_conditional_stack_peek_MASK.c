
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


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;

ifState
FUNC_1(ConditionalStack VAR_1)
{
 if (FUNC_0(VAR_1))
  return VAR_0;
 return VAR_1->head->if_state;
}
