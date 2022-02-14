
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {int ogm_cnt_lock; } ;
struct batadv_orig_node {TYPE_3__ bat_iv; } ;
struct TYPE_5__ {int bcast_own; int bcast_own_sum; } ;
struct batadv_orig_ifinfo {TYPE_2__ bat_iv; } ;
struct batadv_ogm_packet {int flags; int seqno; int orig; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
typedef scalar_t__ s32 ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 struct batadv_orig_ifinfo* FUNC_1 (struct batadv_orig_node*,struct batadv_hard_iface*) ;
 int FUNC_2 (struct batadv_orig_ifinfo*) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct batadv_ogm_packet *VAR_2,
     struct batadv_hard_iface *VAR_3,
     struct batadv_orig_node *VAR_4,
     u32 VAR_5)
{
 struct batadv_orig_ifinfo *VAR_6;
 s32 VAR_7;
 u8 *VAR_8;




 if (!(VAR_2->flags & VAR_0))
  return;

 if (!FUNC_0(VAR_3->net_dev->dev_addr,
    VAR_2->orig))
  return;

 VAR_6 = FUNC_1(VAR_4, VAR_3);
 if (!VAR_6)
  return;


 FUNC_6(&VAR_4->bat_iv.ogm_cnt_lock);
 VAR_7 = VAR_5 - 2;
 VAR_7 -= FUNC_5(VAR_2->seqno);
 FUNC_3(VAR_6->bat_iv.bcast_own, VAR_7);
 VAR_8 = &VAR_6->bat_iv.bcast_own_sum;
 *VAR_8 = FUNC_4(VAR_6->bat_iv.bcast_own,
    VAR_1);
 FUNC_7(&VAR_4->bat_iv.ogm_cnt_lock);

 FUNC_2(VAR_6);
}
