
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int policy_idx_hmask; int xfrm_policy_lock; struct hlist_head* policy_byidx; } ;
struct net {TYPE_1__ xfrm; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct hlist_head* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct hlist_head*,unsigned int) ;
 int FUNC_4 (struct hlist_head*,struct hlist_head*,unsigned int) ;
 unsigned int FUNC_5 (unsigned int) ;

__attribute__((used)) static void FUNC_6(struct net *VAR_0, int VAR_1)
{
 unsigned int VAR_2 = VAR_0->xfrm.policy_idx_hmask;
 unsigned int VAR_3 = FUNC_5(VAR_2);
 unsigned int VAR_4 = (VAR_3 + 1) * sizeof(struct hlist_head);
 struct hlist_head *VAR_5 = VAR_0->xfrm.policy_byidx;
 struct hlist_head *VAR_6 = FUNC_2(VAR_4);
 int VAR_7;

 if (!VAR_6)
  return;

 FUNC_0(&VAR_0->xfrm.xfrm_policy_lock);

 for (VAR_7 = VAR_2; VAR_7 >= 0; VAR_7--)
  FUNC_4(VAR_5 + VAR_7, VAR_6, VAR_3);

 VAR_0->xfrm.policy_byidx = VAR_6;
 VAR_0->xfrm.policy_idx_hmask = VAR_3;

 FUNC_1(&VAR_0->xfrm.xfrm_policy_lock);

 FUNC_3(VAR_5, (VAR_2 + 1) * sizeof(struct hlist_head));
}
