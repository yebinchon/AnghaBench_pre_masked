
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; int name; } ;
struct ieee802154_llsec_device_key {int key_id; int frame_counter; } ;
typedef int __le64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_7(struct sk_buff *VAR_9, u32 VAR_10, u32 VAR_11,
     __le64 VAR_12,
     const struct ieee802154_llsec_device_key *VAR_13,
     const struct net_device *VAR_14)
{
 void *VAR_15;

 VAR_15 = FUNC_2(VAR_9, 0, VAR_11, &VAR_8, VAR_7,
     VAR_6);
 if (!VAR_15)
  goto out;

 if (FUNC_5(VAR_9, VAR_2, VAR_14->name) ||
     FUNC_6(VAR_9, VAR_1, VAR_14->ifindex) ||
     FUNC_4(VAR_9, VAR_3, VAR_12,
      VAR_5) ||
     FUNC_6(VAR_9, VAR_4,
   VAR_13->frame_counter) ||
     FUNC_3(VAR_9, &VAR_13->key_id))
  goto nla_put_failure;

 FUNC_1(VAR_9, VAR_15);
 return 0;

nla_put_failure:
 FUNC_0(VAR_9, VAR_15);
out:
 return -VAR_0;
}
