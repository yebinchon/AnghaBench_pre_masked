
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lock; } ;
struct xfrm_policy_queue {TYPE_1__ hold_queue; int hold_timer; int timeout; } ;
struct xfrm_policy {struct xfrm_policy_queue polq; } ;
struct sk_buff_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff_head*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct sk_buff_head*,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct sk_buff_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xfrm_policy*) ;
 int FUNC_9 (struct xfrm_policy*) ;

__attribute__((used)) static void FUNC_10(struct xfrm_policy *VAR_2,
    struct xfrm_policy *VAR_3)
{
 struct xfrm_policy_queue *VAR_4 = &VAR_2->polq;
 struct sk_buff_head VAR_5;

 if (FUNC_3(&VAR_4->hold_queue))
  return;

 FUNC_0(&VAR_5);

 FUNC_6(&VAR_4->hold_queue.lock);
 FUNC_5(&VAR_4->hold_queue, &VAR_5);
 if (FUNC_1(&VAR_4->hold_timer))
  FUNC_9(VAR_2);
 FUNC_7(&VAR_4->hold_queue.lock);

 VAR_4 = &VAR_3->polq;

 FUNC_6(&VAR_4->hold_queue.lock);
 FUNC_4(&VAR_5, &VAR_4->hold_queue);
 VAR_4->timeout = VAR_0;
 if (!FUNC_2(&VAR_4->hold_timer, VAR_1))
  FUNC_8(VAR_3);
 FUNC_7(&VAR_4->hold_queue.lock);
}
