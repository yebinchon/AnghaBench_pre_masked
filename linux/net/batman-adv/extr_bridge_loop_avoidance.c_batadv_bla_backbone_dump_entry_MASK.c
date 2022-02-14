
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {TYPE_2__* nlh; } ;
struct batadv_hard_iface {TYPE_1__* net_dev; } ;
struct batadv_bla_backbone_gw {int vid; int orig; scalar_t__ lasttime; int crc_lock; int crc; } ;
struct TYPE_4__ {int nlmsg_seq; } ;
struct TYPE_3__ {int * dev_addr; } ;


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
 scalar_t__ VAR_11 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(struct sk_buff *VAR_12, u32 VAR_13,
          struct netlink_callback *VAR_14,
          struct batadv_hard_iface *VAR_15,
          struct batadv_bla_backbone_gw *VAR_16)
{
 u8 *VAR_17 = VAR_15->net_dev->dev_addr;
 u16 VAR_18;
 bool VAR_19;
 int VAR_20;
 void *VAR_21;
 int VAR_22 = -VAR_6;

 VAR_21 = FUNC_4(VAR_12, VAR_13, VAR_14->nlh->nlmsg_seq,
     &VAR_10, VAR_9,
     VAR_5);
 if (!VAR_21) {
  VAR_22 = -VAR_7;
  goto out;
 }

 FUNC_1(VAR_14, VAR_21);

 VAR_19 = FUNC_0(VAR_16->orig, VAR_17);

 FUNC_10(&VAR_16->crc_lock);
 VAR_18 = VAR_16->crc;
 FUNC_11(&VAR_16->crc_lock);

 VAR_20 = FUNC_5(VAR_11 - VAR_16->lasttime);

 if (VAR_19)
  if (FUNC_7(VAR_12, VAR_2)) {
   FUNC_2(VAR_12, VAR_21);
   goto out;
  }

 if (FUNC_6(VAR_12, VAR_0, VAR_8,
      VAR_16->orig) ||
     FUNC_8(VAR_12, VAR_3, VAR_16->vid) ||
     FUNC_8(VAR_12, VAR_1,
   VAR_18) ||
     FUNC_9(VAR_12, VAR_4, VAR_20)) {
  FUNC_2(VAR_12, VAR_21);
  goto out;
 }

 FUNC_3(VAR_12, VAR_21);
 VAR_22 = 0;

out:
 return VAR_22;
}
