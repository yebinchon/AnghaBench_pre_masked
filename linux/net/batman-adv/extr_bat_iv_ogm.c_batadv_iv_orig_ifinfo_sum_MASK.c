
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int ogm_cnt_lock; } ;
struct batadv_orig_node {TYPE_2__ bat_iv; } ;
struct TYPE_3__ {int bcast_own_sum; } ;
struct batadv_orig_ifinfo {TYPE_1__ bat_iv; } ;
struct batadv_hard_iface {int dummy; } ;


 struct batadv_orig_ifinfo* FUNC_0 (struct batadv_orig_node*,struct batadv_hard_iface*) ;
 int FUNC_1 (struct batadv_orig_ifinfo*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static u8 FUNC_4(struct batadv_orig_node *VAR_0,
        struct batadv_hard_iface *VAR_1)
{
 struct batadv_orig_ifinfo *VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_2)
  return 0;

 FUNC_2(&VAR_0->bat_iv.ogm_cnt_lock);
 VAR_3 = VAR_2->bat_iv.bcast_own_sum;
 FUNC_3(&VAR_0->bat_iv.ogm_cnt_lock);

 FUNC_1(VAR_2);

 return VAR_3;
}
