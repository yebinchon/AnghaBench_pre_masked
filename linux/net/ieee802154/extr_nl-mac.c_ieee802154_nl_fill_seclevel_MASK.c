
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; int name; } ;
struct ieee802154_llsec_seclevel {scalar_t__ frame_type; scalar_t__ sec_levels; scalar_t__ device_override; scalar_t__ cmd_frame_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct sk_buff *VAR_11, u32 VAR_12, u32 VAR_13,
       const struct ieee802154_llsec_seclevel *VAR_14,
       const struct net_device *VAR_15)
{
 void *VAR_16;

 VAR_16 = FUNC_2(VAR_11, 0, VAR_13, &VAR_10, VAR_9,
     VAR_8);
 if (!VAR_16)
  goto out;

 if (FUNC_3(VAR_11, VAR_2, VAR_15->name) ||
     FUNC_4(VAR_11, VAR_1, VAR_15->ifindex) ||
     FUNC_5(VAR_11, VAR_5, VAR_14->frame_type) ||
     FUNC_5(VAR_11, VAR_6, VAR_14->sec_levels) ||
     FUNC_5(VAR_11, VAR_4,
         VAR_14->device_override))
  goto nla_put_failure;

 if (VAR_14->frame_type == VAR_7 &&
     FUNC_5(VAR_11, VAR_3,
         VAR_14->cmd_frame_id))
  goto nla_put_failure;

 FUNC_1(VAR_11, VAR_16);
 return 0;

nla_put_failure:
 FUNC_0(VAR_11, VAR_16);
out:
 return -VAR_0;
}
