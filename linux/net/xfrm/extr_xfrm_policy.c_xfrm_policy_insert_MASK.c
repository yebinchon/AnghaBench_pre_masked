
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ use_time; int add_time; } ;
struct xfrm_policy {int timer; TYPE_1__ curlft; int index; int byidx; int family; int selector; } ;
struct TYPE_4__ {int policy_hash_work; int xfrm_policy_lock; scalar_t__ policy_byidx; } ;
struct net {TYPE_2__ xfrm; } ;
struct hlist_head {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct xfrm_policy*) ;
 int FUNC_1 (struct xfrm_policy*) ;
 int FUNC_2 (struct xfrm_policy*,int) ;
 int FUNC_3 (struct xfrm_policy*,int) ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (struct net*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (int *,scalar_t__) ;
 struct hlist_head* FUNC_8 (struct net*,int *,int ,int) ;
 int FUNC_9 (struct net*) ;
 int FUNC_10 (struct net*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (struct net*,int,int *) ;
 int FUNC_15 (struct net*,int,int ) ;
 int FUNC_16 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_17 (struct xfrm_policy*,int,int) ;
 struct xfrm_policy* FUNC_18 (struct hlist_head*,struct xfrm_policy*,int) ;
 int FUNC_19 (struct xfrm_policy*) ;
 int FUNC_20 (struct xfrm_policy*,struct xfrm_policy*) ;
 struct net* FUNC_21 (struct xfrm_policy*) ;

int FUNC_22(int VAR_3, struct xfrm_policy *VAR_4, int VAR_5)
{
 struct net *VAR_6 = FUNC_21(VAR_4);
 struct xfrm_policy *VAR_7;
 struct hlist_head *VAR_8;

 FUNC_12(&VAR_6->xfrm.xfrm_policy_lock);
 VAR_8 = FUNC_8(VAR_6, &VAR_4->selector, VAR_4->family, VAR_3);
 if (VAR_8)
  VAR_7 = FUNC_18(VAR_8, VAR_4, VAR_5);
 else
  VAR_7 = FUNC_17(VAR_4, VAR_3, VAR_5);

 if (FUNC_0(VAR_7)) {
  FUNC_13(&VAR_6->xfrm.xfrm_policy_lock);
  return FUNC_1(VAR_7);
 }

 FUNC_2(VAR_4, VAR_3);


 if (VAR_4->family == VAR_0)
  FUNC_9(VAR_6);
 else
  FUNC_10(VAR_6);

 if (VAR_7) {
  FUNC_20(VAR_7, VAR_4);
  FUNC_3(VAR_7, VAR_3);
 }
 VAR_4->index = VAR_7 ? VAR_7->index : FUNC_15(VAR_6, VAR_3, VAR_4->index);
 FUNC_4(&VAR_4->byidx, VAR_6->xfrm.policy_byidx+FUNC_5(VAR_6, VAR_4->index));
 VAR_4->curlft.add_time = FUNC_6();
 VAR_4->curlft.use_time = 0;
 if (!FUNC_7(&VAR_4->timer, VAR_2 + VAR_1))
  FUNC_16(VAR_4);
 FUNC_13(&VAR_6->xfrm.xfrm_policy_lock);

 if (VAR_7)
  FUNC_19(VAR_7);
 else if (FUNC_14(VAR_6, VAR_3, ((void*)0)))
  FUNC_11(&VAR_6->xfrm.policy_hash_work);

 return 0;
}
