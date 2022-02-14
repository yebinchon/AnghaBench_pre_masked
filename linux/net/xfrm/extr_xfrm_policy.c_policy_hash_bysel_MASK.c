
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct xfrm_selector {int dummy; } ;
struct TYPE_4__ {int xfrm_policy_lock; TYPE_1__* policy_bydst; } ;
struct net {TYPE_2__ xfrm; } ;
struct hlist_head {int dummy; } ;
struct TYPE_3__ {unsigned int hmask; int table; } ;


 int FUNC_0 (struct net*,unsigned short,int,int *,int *) ;
 unsigned int FUNC_1 (struct xfrm_selector const*,unsigned short,unsigned int,int ,int ) ;
 int FUNC_2 (int *) ;
 struct hlist_head* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_4(struct net *VAR_0,
         const struct xfrm_selector *VAR_1,
         unsigned short VAR_2, int VAR_3)
{
 unsigned int VAR_4 = VAR_0->xfrm.policy_bydst[VAR_3].hmask;
 unsigned int VAR_5;
 u8 VAR_6;
 u8 VAR_7;

 FUNC_0(VAR_0, VAR_2, VAR_3, &VAR_6, &VAR_7);
 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4, VAR_6, VAR_7);

 if (VAR_5 == VAR_4 + 1)
  return ((void*)0);

 return FUNC_3(VAR_0->xfrm.policy_bydst[VAR_3].table,
       FUNC_2(&VAR_0->xfrm.xfrm_policy_lock)) + VAR_5;
}
