
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_topsrv {int net; } ;
struct tipc_subscription {int sub_list; } ;
struct tipc_subscr {int filter; } ;
struct tipc_net {int subscription_count; } ;
struct tipc_conn {int sub_lock; int sub_list; int conid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (char*,scalar_t__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tipc_conn*,struct tipc_subscr*) ;
 struct tipc_net* FUNC_8 (int ) ;
 int FUNC_9 (struct tipc_subscr*,int ) ;
 struct tipc_subscription* FUNC_10 (int ,struct tipc_subscr*,int ) ;

__attribute__((used)) static int FUNC_11(struct tipc_topsrv *VAR_3,
        struct tipc_conn *VAR_4,
        struct tipc_subscr *VAR_5)
{
 struct tipc_net *VAR_6 = FUNC_8(VAR_3->net);
 struct tipc_subscription *VAR_7;

 if (FUNC_9(VAR_5, VAR_2) & VAR_1) {
  VAR_5->filter &= FUNC_0(~VAR_1);
  FUNC_7(VAR_4, VAR_5);
  return 0;
 }
 if (FUNC_2(&VAR_6->subscription_count) >= VAR_0) {
  FUNC_4("Subscription rejected, max (%u)\n", VAR_0);
  return -1;
 }
 VAR_7 = FUNC_10(VAR_3->net, VAR_5, VAR_4->conid);
 if (!VAR_7)
  return -1;
 FUNC_1(&VAR_6->subscription_count);
 FUNC_5(&VAR_4->sub_lock);
 FUNC_3(&VAR_7->sub_list, &VAR_4->sub_list);
 FUNC_6(&VAR_4->sub_lock);
 return 0;
}
