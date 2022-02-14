
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tipc_subscr {int dummy; } ;
struct TYPE_3__ {struct tipc_subscr s; } ;
struct tipc_subscription {int net; TYPE_1__ evt; } ;
struct tipc_service {int lock; } ;
struct tipc_net {int nametbl_lock; } ;
struct name_table {int * services; } ;
struct TYPE_4__ {int upper; int lower; int type; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct name_table* FUNC_4 (int ) ;
 struct tipc_net* FUNC_5 (int ) ;
 struct tipc_service* FUNC_6 (int ,int *) ;
 struct tipc_service* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct tipc_service*,struct tipc_subscription*) ;
 int FUNC_9 (struct tipc_subscr*,int ) ;

bool FUNC_10(struct tipc_subscription *VAR_1)
{
 struct name_table *VAR_2 = FUNC_4(VAR_1->net);
 struct tipc_net *VAR_3 = FUNC_5(VAR_1->net);
 struct tipc_subscr *VAR_4 = &VAR_1->evt.s;
 u32 VAR_5 = FUNC_9(VAR_4, VAR_0.type);
 struct tipc_service *VAR_6;
 bool VAR_7 = 1;

 FUNC_2(&VAR_3->nametbl_lock);
 VAR_6 = FUNC_7(VAR_1->net, VAR_5);
 if (!VAR_6)
  VAR_6 = FUNC_6(VAR_5, &VAR_2->services[FUNC_0(VAR_5)]);
 if (VAR_6) {
  FUNC_2(&VAR_6->lock);
  FUNC_8(VAR_6, VAR_1);
  FUNC_3(&VAR_6->lock);
 } else {
  FUNC_1("Failed to subscribe for {%u,%u,%u}\n", VAR_5,
   FUNC_9(VAR_4, VAR_0.lower),
   FUNC_9(VAR_4, VAR_0.upper));
  VAR_7 = 0;
 }
 FUNC_3(&VAR_3->nametbl_lock);
 return VAR_7;
}
