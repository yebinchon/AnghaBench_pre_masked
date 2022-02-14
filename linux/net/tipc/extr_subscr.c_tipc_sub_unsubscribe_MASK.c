
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ timeout; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct tipc_subscription {int sub_list; int timer; TYPE_2__ evt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tipc_subscription*) ;
 int FUNC_3 (struct tipc_subscription*) ;

void FUNC_4(struct tipc_subscription *VAR_1)
{
 FUNC_2(VAR_1);
 if (VAR_1->evt.s.timeout != VAR_0)
  FUNC_0(&VAR_1->timer);
 FUNC_1(&VAR_1->sub_list);
 FUNC_3(VAR_1);
}
