
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ qlen; int lock; } ;
struct TYPE_4__ {unsigned long expires; } ;
struct xfrm_policy_queue {unsigned long timeout; TYPE_3__ hold_queue; TYPE_1__ hold_timer; } ;
struct xfrm_policy {struct xfrm_policy_queue polq; } ;
struct xfrm_dst {struct xfrm_policy** pols; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (TYPE_3__*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 unsigned long VAR_3 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (TYPE_1__*,unsigned long) ;
 struct dst_entry* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct xfrm_policy*) ;
 int FUNC_12 (struct xfrm_policy*) ;

__attribute__((used)) static int FUNC_13(struct net *VAR_4, struct sock *VAR_5, struct sk_buff *VAR_6)
{
 unsigned long VAR_7;
 struct dst_entry *VAR_8 = FUNC_4(VAR_6);
 struct xfrm_dst *VAR_9 = (struct xfrm_dst *) VAR_8;
 struct xfrm_policy *VAR_10 = VAR_9->pols[0];
 struct xfrm_policy_queue *VAR_11 = &VAR_10->polq;

 if (FUNC_10(FUNC_6(VAR_5, VAR_6))) {
  FUNC_2(VAR_6);
  return 0;
 }

 if (VAR_11->hold_queue.qlen > VAR_1) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }

 FUNC_5(VAR_6);

 FUNC_7(&VAR_11->hold_queue.lock);

 if (!VAR_11->timeout)
  VAR_11->timeout = VAR_2;

 VAR_7 = VAR_3 + VAR_11->timeout;

 if (FUNC_1(&VAR_11->hold_timer)) {
  if (FUNC_9(VAR_11->hold_timer.expires, VAR_7))
   VAR_7 = VAR_11->hold_timer.expires;
  FUNC_12(VAR_10);
 }

 FUNC_0(&VAR_11->hold_queue, VAR_6);
 if (!FUNC_3(&VAR_11->hold_timer, VAR_7))
  FUNC_11(VAR_10);

 FUNC_8(&VAR_11->hold_queue.lock);

 return 0;
}
