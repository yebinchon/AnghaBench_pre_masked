
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct per_cpu_dm_data {int lock; int skb; int send_timer; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_dm_drop_point {int dummy; } ;
struct net_dm_alert_msg {int dummy; } ;
struct genlmsghdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct genlmsghdr*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 struct sk_buff* FUNC_2 (size_t,int ) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct net_dm_alert_msg*,int ,size_t) ;
 int FUNC_5 (int *,scalar_t__) ;
 int VAR_6 ;
 struct net_dm_alert_msg* FUNC_6 (struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int ,struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_13(struct per_cpu_dm_data *VAR_7)
{
 size_t VAR_8;
 struct net_dm_alert_msg *VAR_9;
 struct nlattr *VAR_10;
 struct sk_buff *VAR_11;
 unsigned long VAR_12;
 void *VAR_13;

 VAR_8 = sizeof(struct net_dm_alert_msg);
 VAR_8 += VAR_4 * sizeof(struct net_dm_drop_point);
 VAR_8 += sizeof(struct nlattr);

 VAR_11 = FUNC_2(VAR_8, VAR_0);

 if (!VAR_11)
  goto err;

 VAR_13 = FUNC_3(VAR_11, 0, 0, &VAR_6,
     0, VAR_2);
 if (!VAR_13) {
  FUNC_9(VAR_11);
  VAR_11 = ((void*)0);
  goto err;
 }
 VAR_10 = FUNC_7(VAR_11, VAR_3,
     sizeof(struct net_dm_alert_msg));
 if (!VAR_10) {
  FUNC_9(VAR_11);
  VAR_11 = ((void*)0);
  goto err;
 }
 VAR_9 = FUNC_6(VAR_10);
 FUNC_4(VAR_9, 0, VAR_8);
 goto out;

err:
 FUNC_5(&VAR_7->send_timer, VAR_5 + VAR_1 / 10);
out:
 FUNC_10(&VAR_7->lock, VAR_12);
 FUNC_12(VAR_7->skb, VAR_11);
 FUNC_11(&VAR_7->lock, VAR_12);

 if (VAR_11) {
  struct nlmsghdr *VAR_14 = (struct nlmsghdr *)VAR_11->data;
  struct genlmsghdr *VAR_15 = (struct genlmsghdr *)FUNC_8(VAR_14);

  FUNC_1(VAR_11, FUNC_0(VAR_15));
 }

 return VAR_11;
}
