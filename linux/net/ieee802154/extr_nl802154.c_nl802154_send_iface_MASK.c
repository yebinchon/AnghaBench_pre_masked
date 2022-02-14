
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wpan_dev {int iftype; int ackreq; int lbt; int min_be; int csma_retries; int max_be; int frame_retries; int pan_id; int short_addr; int extended_addr; struct net_device* netdev; } ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; int name; } ;
struct cfg802154_registered_device {int wpan_phy_idx; int devlist_generation; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct cfg802154_registered_device*,struct wpan_dev*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;
 int FUNC_11 (struct wpan_dev*) ;

__attribute__((used)) static int
FUNC_12(struct sk_buff *VAR_19, u32 VAR_20, u32 VAR_21, int VAR_22,
      struct cfg802154_registered_device *VAR_23,
      struct wpan_dev *VAR_24)
{
 struct net_device *VAR_25 = VAR_24->netdev;
 void *VAR_26;

 VAR_26 = FUNC_3(VAR_19, VAR_20, VAR_21, VAR_22,
         VAR_17);
 if (!VAR_26)
  return -1;

 if (VAR_25 &&
     (FUNC_8(VAR_19, VAR_4, VAR_25->ifindex) ||
      FUNC_7(VAR_19, VAR_5, VAR_25->name)))
  goto nla_put_failure;

 if (FUNC_8(VAR_19, VAR_16, VAR_23->wpan_phy_idx) ||
     FUNC_8(VAR_19, VAR_6, VAR_24->iftype) ||
     FUNC_9(VAR_19, VAR_15,
         FUNC_11(VAR_24), VAR_12) ||
     FUNC_8(VAR_19, VAR_3,
   VAR_23->devlist_generation ^
   (VAR_18 << 2)))
  goto nla_put_failure;


 if (FUNC_5(VAR_19, VAR_2,
    VAR_24->extended_addr,
    VAR_12) ||
     FUNC_4(VAR_19, VAR_14,
    VAR_24->short_addr) ||
     FUNC_4(VAR_19, VAR_13, VAR_24->pan_id))
  goto nla_put_failure;


 if (FUNC_6(VAR_19, VAR_10,
         VAR_24->frame_retries) ||
     FUNC_10(VAR_19, VAR_8, VAR_24->max_be) ||
     FUNC_10(VAR_19, VAR_9,
         VAR_24->csma_retries) ||
     FUNC_10(VAR_19, VAR_11, VAR_24->min_be))
  goto nla_put_failure;


 if (FUNC_10(VAR_19, VAR_7, VAR_24->lbt))
  goto nla_put_failure;


 if (FUNC_10(VAR_19, VAR_1, VAR_24->ackreq))
  goto nla_put_failure;






 FUNC_1(VAR_19, VAR_26);
 return 0;

nla_put_failure:
 FUNC_0(VAR_19, VAR_26);
 return -VAR_0;
}
