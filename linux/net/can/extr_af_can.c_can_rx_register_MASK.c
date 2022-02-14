
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct receiver {void (* func ) (struct sk_buff*,void*) ;char* ident; int list; struct sock* sk; void* data; scalar_t__ matches; void* mask; void* can_id; } ;
struct net_device {scalar_t__ type; } ;
struct TYPE_2__ {int rcvlists_lock; struct can_rcv_lists_stats* rcv_lists_stats; } ;
struct net {TYPE_1__ can; } ;
struct hlist_head {int dummy; } ;
struct can_rcv_lists_stats {int rcv_entries; int rcv_entries_max; } ;
struct can_dev_rcv_lists {int entries; } ;
typedef void* canid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct can_dev_rcv_lists* FUNC_0 (struct net*,struct net_device*) ;
 struct hlist_head* FUNC_1 (void**,void**,struct can_dev_rcv_lists*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *,struct hlist_head*) ;
 struct receiver* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net*,int ) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

int FUNC_9(struct net *VAR_5, struct net_device *VAR_6, canid_t VAR_7,
      canid_t VAR_8, void (*VAR_9)(struct sk_buff *, void *),
      void *VAR_10, char *VAR_11, struct sock *VAR_12)
{
 struct receiver *VAR_13;
 struct hlist_head *VAR_14;
 struct can_dev_rcv_lists *VAR_15;
 struct can_rcv_lists_stats *VAR_16 = VAR_5->can.rcv_lists_stats;
 int VAR_17 = 0;



 if (VAR_6 && VAR_6->type != VAR_0)
  return -VAR_1;

 if (VAR_6 && !FUNC_6(VAR_5, FUNC_2(VAR_6)))
  return -VAR_1;

 VAR_13 = FUNC_4(VAR_4, VAR_3);
 if (!VAR_13)
  return -VAR_2;

 FUNC_7(&VAR_5->can.rcvlists_lock);

 VAR_15 = FUNC_0(VAR_5, VAR_6);
 VAR_14 = FUNC_1(&VAR_7, &VAR_8, VAR_15);

 VAR_13->can_id = VAR_7;
 VAR_13->mask = VAR_8;
 VAR_13->matches = 0;
 VAR_13->func = VAR_9;
 VAR_13->data = VAR_10;
 VAR_13->ident = VAR_11;
 VAR_13->sk = VAR_12;

 FUNC_3(&VAR_13->list, VAR_14);
 VAR_15->entries++;

 VAR_16->rcv_entries++;
 VAR_16->rcv_entries_max = FUNC_5(VAR_16->rcv_entries_max,
            VAR_16->rcv_entries);
 FUNC_8(&VAR_5->can.rcvlists_lock);

 return VAR_17;
}
