
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int lock; } ;
struct xfrm_policy_queue {int timeout; TYPE_2__ hold_queue; int hold_timer; } ;
struct xfrm_policy {struct xfrm_policy_queue polq; } ;
struct timer_list {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {struct sock* sk; } ;
struct net {int dummy; } ;
struct flowi {int dummy; } ;
struct dst_entry {int flags; TYPE_1__* ops; } ;
struct TYPE_8__ {int hold_timer; } ;
struct TYPE_6__ {int family; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dst_entry*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net*,struct sock*,struct sk_buff*) ;
 int FUNC_5 (struct dst_entry*) ;
 struct xfrm_policy* FUNC_6 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,scalar_t__) ;
 int FUNC_9 (struct sk_buff*) ;
 struct xfrm_policy* VAR_4 ;
 TYPE_5__ VAR_5 ;
 struct dst_entry* FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*,struct dst_entry*) ;
 struct sk_buff* FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct sk_buff_head*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,struct sk_buff_head*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct sk_buff*,struct flowi*,int ) ;
 int FUNC_20 (struct dst_entry*) ;
 struct dst_entry* FUNC_21 (struct net*,int ,struct flowi*,struct sock*,int ) ;
 int FUNC_22 (struct xfrm_policy*) ;
 int FUNC_23 (struct xfrm_policy*) ;
 struct net* FUNC_24 (struct xfrm_policy*) ;

__attribute__((used)) static void FUNC_25(struct timer_list *VAR_6)
{
 struct sk_buff *VAR_7;
 struct sock *VAR_8;
 struct dst_entry *VAR_9;
 struct xfrm_policy *VAR_10 = FUNC_6(VAR_10, VAR_6, VAR_5.hold_timer);
 struct net *VAR_11 = FUNC_24(VAR_10);
 struct xfrm_policy_queue *VAR_12 = &VAR_10->polq;
 struct flowi VAR_13;
 struct sk_buff_head VAR_14;

 FUNC_17(&VAR_12->hold_queue.lock);
 VAR_7 = FUNC_13(&VAR_12->hold_queue);
 if (!VAR_7) {
  FUNC_18(&VAR_12->hold_queue.lock);
  goto out;
 }
 VAR_9 = FUNC_10(VAR_7);
 VAR_8 = VAR_7->sk;
 FUNC_19(VAR_7, &VAR_13, VAR_9->ops->family);
 FUNC_18(&VAR_12->hold_queue.lock);

 FUNC_3(FUNC_20(VAR_9));
 VAR_9 = FUNC_21(VAR_11, FUNC_20(VAR_9), &VAR_13, VAR_8, VAR_1);
 if (FUNC_0(VAR_9))
  goto purge_queue;

 if (VAR_9->flags & VAR_0) {
  FUNC_5(VAR_9);

  if (VAR_12->timeout >= VAR_2)
   goto purge_queue;

  VAR_12->timeout = VAR_12->timeout << 1;
  if (!FUNC_8(&VAR_12->hold_timer, VAR_3 + VAR_12->timeout))
   FUNC_22(VAR_10);
  goto out;
 }

 FUNC_5(VAR_9);

 FUNC_2(&VAR_14);

 FUNC_17(&VAR_12->hold_queue.lock);
 VAR_12->timeout = 0;
 FUNC_16(&VAR_12->hold_queue, &VAR_14);
 FUNC_18(&VAR_12->hold_queue.lock);

 while (!FUNC_14(&VAR_14)) {
  VAR_7 = FUNC_1(&VAR_14);

  FUNC_19(VAR_7, &VAR_13, FUNC_10(VAR_7)->ops->family);
  FUNC_3(FUNC_20(FUNC_10(VAR_7)));
  VAR_9 = FUNC_21(VAR_11, FUNC_20(FUNC_10(VAR_7)), &VAR_13, VAR_7->sk, 0);
  if (FUNC_0(VAR_9)) {
   FUNC_7(VAR_7);
   continue;
  }

  FUNC_9(VAR_7);
  FUNC_11(VAR_7);
  FUNC_12(VAR_7, VAR_9);

  FUNC_4(VAR_11, VAR_7->sk, VAR_7);
 }

out:
 FUNC_23(VAR_10);
 return;

purge_queue:
 VAR_12->timeout = 0;
 FUNC_15(&VAR_12->hold_queue);
 FUNC_23(VAR_10);
}
