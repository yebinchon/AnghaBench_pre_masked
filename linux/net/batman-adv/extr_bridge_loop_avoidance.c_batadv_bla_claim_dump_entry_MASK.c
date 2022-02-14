
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {TYPE_2__* nlh; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct batadv_bla_claim {TYPE_3__* backbone_gw; int vid; int addr; } ;
struct TYPE_6__ {int orig; int crc_lock; int crc; } ;
struct TYPE_5__ {int nlmsg_seq; } ;
struct TYPE_4__ {int * dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int *) ;
 int VAR_10 ;
 int FUNC_1 (struct netlink_callback*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int
FUNC_10(struct sk_buff *VAR_11, u32 VAR_12,
       struct netlink_callback *VAR_13,
       struct batadv_hard_iface *VAR_14,
       struct batadv_bla_claim *VAR_15)
{
 u8 *VAR_16 = VAR_14->net_dev->dev_addr;
 u16 VAR_17;
 bool VAR_18;
 void *VAR_19;
 int VAR_20 = -VAR_6;

 VAR_19 = FUNC_4(VAR_11, VAR_12, VAR_13->nlh->nlmsg_seq,
     &VAR_10, VAR_9,
     VAR_5);
 if (!VAR_19) {
  VAR_20 = -VAR_7;
  goto out;
 }

 FUNC_1(VAR_13, VAR_19);

 VAR_18 = FUNC_0(VAR_15->backbone_gw->orig,
        VAR_16);

 FUNC_8(&VAR_15->backbone_gw->crc_lock);
 VAR_17 = VAR_15->backbone_gw->crc;
 FUNC_9(&VAR_15->backbone_gw->crc_lock);

 if (VAR_18)
  if (FUNC_6(VAR_11, VAR_3)) {
   FUNC_2(VAR_11, VAR_19);
   goto out;
  }

 if (FUNC_5(VAR_11, VAR_0, VAR_8, VAR_15->addr) ||
     FUNC_7(VAR_11, VAR_4, VAR_15->vid) ||
     FUNC_5(VAR_11, VAR_1, VAR_8,
      VAR_15->backbone_gw->orig) ||
     FUNC_7(VAR_11, VAR_2,
   VAR_17)) {
  FUNC_2(VAR_11, VAR_19);
  goto out;
 }

 FUNC_3(VAR_11, VAR_19);
 VAR_20 = 0;

out:
 return VAR_20;
}
