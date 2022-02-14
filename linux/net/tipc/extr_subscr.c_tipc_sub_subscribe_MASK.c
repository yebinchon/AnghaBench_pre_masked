
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_subscr {int dummy; } ;
struct TYPE_3__ {struct tipc_subscr s; } ;
struct tipc_subscription {int conid; int inactive; int timer; TYPE_1__ evt; int kref; int lock; struct net* net; int sub_list; int service_list; } ;
struct net {int dummy; } ;
struct TYPE_4__ {scalar_t__ lower; scalar_t__ upper; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct tipc_subscription*) ;
 struct tipc_subscription* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct tipc_subscr*,struct tipc_subscr*,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (struct tipc_subscription*) ;
 scalar_t__ FUNC_11 (struct tipc_subscr*,scalar_t__) ;
 int VAR_7 ;

struct tipc_subscription *FUNC_12(struct net *VAR_8,
          struct tipc_subscr *VAR_9,
          int VAR_10)
{
 u32 VAR_11 = FUNC_11(VAR_9, VAR_11);
 struct tipc_subscription *VAR_12;
 u32 VAR_13;

 if ((VAR_11 & VAR_1 && VAR_11 & VAR_2) ||
     (FUNC_11(VAR_9, VAR_6.lower) > FUNC_11(VAR_9, VAR_6.upper))) {
  FUNC_7("Subscription rejected, illegal request\n");
  return ((void*)0);
 }
 VAR_12 = FUNC_2(sizeof(*VAR_12), VAR_0);
 if (!VAR_12) {
  FUNC_7("Subscription rejected, no memory\n");
  return ((void*)0);
 }
 FUNC_0(&VAR_12->service_list);
 FUNC_0(&VAR_12->sub_list);
 VAR_12->net = VAR_8;
 VAR_12->conid = VAR_10;
 VAR_12->inactive = 0;
 FUNC_4(&VAR_12->evt.s, VAR_9, sizeof(*VAR_9));
 FUNC_8(&VAR_12->lock);
 FUNC_3(&VAR_12->kref);
 if (!FUNC_10(VAR_12)) {
  FUNC_1(VAR_12);
  return ((void*)0);
 }
 FUNC_9(&VAR_12->timer, VAR_7, 0);
 VAR_13 = FUNC_11(&VAR_12->evt.s, VAR_13);
 if (VAR_13 != VAR_3)
  FUNC_5(&VAR_12->timer, VAR_5 + FUNC_6(VAR_13));
 return VAR_12;
}
