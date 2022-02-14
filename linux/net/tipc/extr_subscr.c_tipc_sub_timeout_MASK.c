
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int upper; int lower; } ;
struct tipc_subscr {TYPE_2__ seq; } ;
struct TYPE_3__ {struct tipc_subscr s; } ;
struct tipc_subscription {int inactive; int lock; TYPE_1__ evt; } ;
struct timer_list {int dummy; } ;


 int VAR_0 ;
 struct tipc_subscription* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct tipc_subscription* VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct tipc_subscription*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct tipc_subscription *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 struct tipc_subscr *VAR_5 = &VAR_4->evt.s;

 FUNC_1(&VAR_4->lock);
 FUNC_3(VAR_4, VAR_5->seq.lower, VAR_5->seq.upper,
       VAR_0, 0, 0);
 VAR_4->inactive = 1;
 FUNC_2(&VAR_4->lock);
}
