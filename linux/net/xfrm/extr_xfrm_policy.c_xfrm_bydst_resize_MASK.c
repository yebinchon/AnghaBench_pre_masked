
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int xfrm_policy_lock; TYPE_1__* policy_bydst; } ;
struct net {TYPE_2__ xfrm; } ;
struct hlist_head {int dummy; } ;
struct TYPE_3__ {unsigned int hmask; int table; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct hlist_head*) ;
 struct hlist_head* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct net*,struct hlist_head*,struct hlist_head*,unsigned int,int) ;
 struct hlist_head* FUNC_9 (unsigned int) ;
 int FUNC_10 (struct hlist_head*,unsigned int) ;
 unsigned int FUNC_11 (unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_12(struct net *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_1->xfrm.policy_bydst[VAR_2].hmask;
 unsigned int VAR_4 = FUNC_11(VAR_3);
 unsigned int VAR_5 = (VAR_4 + 1) * sizeof(struct hlist_head);
 struct hlist_head *VAR_6 = FUNC_9(VAR_5);
 struct hlist_head *VAR_7;
 int VAR_8;

 if (!VAR_6)
  return;

 FUNC_3(&VAR_1->xfrm.xfrm_policy_lock);
 FUNC_6(&VAR_0);

 VAR_7 = FUNC_2(VAR_1->xfrm.policy_bydst[VAR_2].table,
    FUNC_0(&VAR_1->xfrm.xfrm_policy_lock));

 for (VAR_8 = VAR_3; VAR_8 >= 0; VAR_8--)
  FUNC_8(VAR_1, VAR_7 + VAR_8, VAR_6, VAR_4, VAR_2);

 FUNC_1(VAR_1->xfrm.policy_bydst[VAR_2].table, VAR_6);
 VAR_1->xfrm.policy_bydst[VAR_2].hmask = VAR_4;

 FUNC_7(&VAR_0);
 FUNC_4(&VAR_1->xfrm.xfrm_policy_lock);

 FUNC_5();

 FUNC_10(VAR_7, (VAR_3 + 1) * sizeof(struct hlist_head));
}
