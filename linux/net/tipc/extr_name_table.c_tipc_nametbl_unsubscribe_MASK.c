
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tipc_subscr {int dummy; } ;
struct TYPE_3__ {struct tipc_subscr s; } ;
struct tipc_subscription {int service_list; int net; TYPE_1__ evt; } ;
struct tipc_service {int lock; int service_list; int subscriptions; int ranges; } ;
struct tipc_net {int nametbl_lock; } ;
struct TYPE_4__ {int type; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct tipc_service*,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct tipc_net* FUNC_7 (int ) ;
 struct tipc_service* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct tipc_subscription*) ;
 int FUNC_10 (struct tipc_subscr*,int ) ;

void FUNC_11(struct tipc_subscription *VAR_2)
{
 struct tipc_net *VAR_3 = FUNC_7(VAR_2->net);
 struct tipc_subscr *VAR_4 = &VAR_2->evt.s;
 u32 VAR_5 = FUNC_10(VAR_4, VAR_1.type);
 struct tipc_service *VAR_6;

 FUNC_5(&VAR_3->nametbl_lock);
 VAR_6 = FUNC_8(VAR_2->net, VAR_5);
 if (!VAR_6)
  goto exit;

 FUNC_5(&VAR_6->lock);
 FUNC_3(&VAR_2->service_list);
 FUNC_9(VAR_2);


 if (FUNC_0(&VAR_6->ranges) && FUNC_4(&VAR_6->subscriptions)) {
  FUNC_1(&VAR_6->service_list);
  FUNC_2(VAR_6, VAR_0);
 }
 FUNC_6(&VAR_6->lock);
exit:
 FUNC_6(&VAR_3->nametbl_lock);
}
