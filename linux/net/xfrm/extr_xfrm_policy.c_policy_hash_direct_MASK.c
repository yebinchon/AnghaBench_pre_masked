
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u8 ;
struct TYPE_4__ {int xfrm_policy_lock; TYPE_1__* policy_bydst; } ;
struct net {TYPE_2__ xfrm; } ;
struct hlist_head {int dummy; } ;
struct TYPE_3__ {unsigned int hmask; int table; } ;


 unsigned int FUNC_0 (int const*,int const*,unsigned short,unsigned int,int ,int ) ;
 int FUNC_1 (struct net*,unsigned short,int,int *,int *) ;
 int FUNC_2 (int *) ;
 struct hlist_head* FUNC_3 (int ,int ) ;

__attribute__((used)) static struct hlist_head *FUNC_4(struct net *VAR_0,
          const xfrm_address_t *VAR_1,
          const xfrm_address_t *VAR_2,
          unsigned short VAR_3, int VAR_4)
{
 unsigned int VAR_5 = VAR_0->xfrm.policy_bydst[VAR_4].hmask;
 unsigned int VAR_6;
 u8 VAR_7;
 u8 VAR_8;

 FUNC_1(VAR_0, VAR_3, VAR_4, &VAR_7, &VAR_8);
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_5, VAR_7, VAR_8);

 return FUNC_3(VAR_0->xfrm.policy_bydst[VAR_4].table,
       FUNC_2(&VAR_0->xfrm.xfrm_policy_lock)) + VAR_6;
}
