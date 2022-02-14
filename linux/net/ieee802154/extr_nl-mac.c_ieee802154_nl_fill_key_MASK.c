
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct net_device {int ifindex; int name; } ;
struct ieee802154_llsec_key_entry {TYPE_1__* key; int id; } ;
typedef int commands ;
struct TYPE_2__ {int frame_types; int * key; int cmd_frame_ids; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int *) ;
 int FUNC_5 (int *,int ,int) ;
 int VAR_10 ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int,int *) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int
FUNC_10(struct sk_buff *VAR_11, u32 VAR_12, u32 VAR_13,
         const struct ieee802154_llsec_key_entry *VAR_14,
         const struct net_device *VAR_15)
{
 void *VAR_16;
 u32 VAR_17[256 / 32];

 VAR_16 = FUNC_3(VAR_11, 0, VAR_13, &VAR_10, VAR_9,
     VAR_8);
 if (!VAR_16)
  goto out;

 if (FUNC_7(VAR_11, VAR_2, VAR_15->name) ||
     FUNC_8(VAR_11, VAR_1, VAR_15->ifindex) ||
     FUNC_4(VAR_11, &VAR_14->id) ||
     FUNC_9(VAR_11, VAR_5,
         VAR_14->key->frame_types))
  goto nla_put_failure;

 if (VAR_14->key->frame_types & FUNC_0(VAR_6)) {
  FUNC_5(VAR_17, 0, sizeof(VAR_17));
  VAR_17[7] = VAR_14->key->cmd_frame_ids;
  if (FUNC_6(VAR_11, VAR_4,
       sizeof(VAR_17), VAR_17))
   goto nla_put_failure;
 }

 if (FUNC_6(VAR_11, VAR_3,
      VAR_7, VAR_14->key->key))
  goto nla_put_failure;

 FUNC_2(VAR_11, VAR_16);
 return 0;

nla_put_failure:
 FUNC_1(VAR_11, VAR_16);
out:
 return -VAR_0;
}
