
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; int name; } ;
struct ieee802154_llsec_device {int key_mode; int seclevel_exempt; int frame_counter; int hwaddr; int short_addr; int pan_id; } ;


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
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_8(struct sk_buff *VAR_13, u32 VAR_14, u32 VAR_15,
         const struct ieee802154_llsec_device *VAR_16,
         const struct net_device *VAR_17)
{
 void *VAR_18;

 VAR_18 = FUNC_2(VAR_13, 0, VAR_15, &VAR_12, VAR_11,
     VAR_10);
 if (!VAR_18)
  goto out;

 if (FUNC_5(VAR_13, VAR_2, VAR_17->name) ||
     FUNC_6(VAR_13, VAR_1, VAR_17->ifindex) ||
     FUNC_4(VAR_13, VAR_8, VAR_16->pan_id) ||
     FUNC_4(VAR_13, VAR_9,
         VAR_16->short_addr) ||
     FUNC_3(VAR_13, VAR_3, VAR_16->hwaddr,
      VAR_7) ||
     FUNC_6(VAR_13, VAR_6,
   VAR_16->frame_counter) ||
     FUNC_7(VAR_13, VAR_5,
         VAR_16->seclevel_exempt) ||
     FUNC_7(VAR_13, VAR_4, VAR_16->key_mode))
  goto nla_put_failure;

 FUNC_1(VAR_13, VAR_18);
 return 0;

nla_put_failure:
 FUNC_0(VAR_13, VAR_18);
out:
 return -VAR_0;
}
