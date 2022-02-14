
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct TYPE_5__ {scalar_t__ expires; } ;
struct per_cpu_dm_data {int lock; TYPE_2__ send_timer; struct sk_buff* skb; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int nla_len; } ;
struct net_dm_drop_point {int dummy; } ;
struct net_dm_alert_msg {int entries; TYPE_1__* points; } ;
struct TYPE_4__ {int count; int pc; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nlattr* FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (void**,int ,int) ;
 int FUNC_6 (int ,void**,int) ;
 struct net_dm_alert_msg* FUNC_7 (struct nlattr*) ;
 int FUNC_8 (struct nlmsghdr*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 struct per_cpu_dm_data* FUNC_11 (int *) ;
 int FUNC_12 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_13(struct sk_buff *VAR_5, void *VAR_6)
{
 struct net_dm_alert_msg *VAR_7;
 struct nlmsghdr *VAR_8;
 struct nlattr *VAR_9;
 int VAR_10;
 struct sk_buff *VAR_11;
 struct per_cpu_dm_data *VAR_12;
 unsigned long VAR_13;

 FUNC_4(VAR_13);
 VAR_12 = FUNC_11(&VAR_1);
 FUNC_9(&VAR_12->lock);
 VAR_11 = VAR_12->skb;

 if (!VAR_11)
  goto out;

 VAR_8 = (struct nlmsghdr *)VAR_11->data;
 VAR_9 = FUNC_3(FUNC_8(VAR_8));
 VAR_7 = FUNC_7(VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_7->entries; VAR_10++) {
  if (!FUNC_5(&VAR_6, VAR_7->points[VAR_10].pc, sizeof(void *))) {
   VAR_7->points[VAR_10].count++;
   goto out;
  }
 }
 if (VAR_7->entries == VAR_3)
  goto out;



 FUNC_1(VAR_11, sizeof(struct net_dm_drop_point));
 VAR_9->nla_len += FUNC_0(sizeof(struct net_dm_drop_point));
 FUNC_6(VAR_7->points[VAR_7->entries].pc, &VAR_6, sizeof(void *));
 VAR_7->points[VAR_7->entries].count = 1;
 VAR_7->entries++;

 if (!FUNC_12(&VAR_12->send_timer)) {
  VAR_12->send_timer.expires = VAR_4 + VAR_2 * VAR_0;
  FUNC_2(&VAR_12->send_timer);
 }

out:
 FUNC_10(&VAR_12->lock, VAR_13);
}
