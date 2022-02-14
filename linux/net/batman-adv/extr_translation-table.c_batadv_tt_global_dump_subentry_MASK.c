
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
struct batadv_tt_orig_list_entry {int flags; int ttvn; TYPE_2__* orig_node; } ;
struct batadv_tt_common_entry {int flags; int vid; int addr; } ;
struct TYPE_3__ {int crc; } ;
struct batadv_orig_node_vlan {TYPE_1__ tt; } ;
struct TYPE_4__ {int orig; int last_ttvn; } ;


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
 int FUNC_0 (int *) ;
 int VAR_14 ;
 struct batadv_orig_node_vlan* FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct batadv_orig_node_vlan*) ;
 int FUNC_3 (struct sk_buff*,void*) ;
 int FUNC_4 (struct sk_buff*,void*) ;
 void* FUNC_5 (struct sk_buff*,int,int,int *,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int ,int) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int
FUNC_11(struct sk_buff *VAR_15, u32 VAR_16, u32 VAR_17,
          struct batadv_tt_common_entry *VAR_18,
          struct batadv_tt_orig_list_entry *VAR_19,
          bool VAR_20)
{
 u16 VAR_21 = (VAR_18->flags & (~VAR_9)) | VAR_19->flags;
 void *VAR_22;
 struct batadv_orig_node_vlan *VAR_23;
 u8 VAR_24;
 u32 VAR_25;

 VAR_23 = FUNC_1(VAR_19->orig_node,
      VAR_18->vid);
 if (!VAR_23)
  return 0;

 VAR_25 = VAR_23->tt.crc;

 FUNC_2(VAR_23);

 VAR_22 = FUNC_5(VAR_15, VAR_16, VAR_17, &VAR_14,
     VAR_13,
     VAR_8);
 if (!VAR_22)
  return -VAR_11;

 VAR_24 = FUNC_0(&VAR_19->orig_node->last_ttvn);

 if (FUNC_6(VAR_15, VAR_2, VAR_12, VAR_18->addr) ||
     FUNC_6(VAR_15, VAR_1, VAR_12,
      VAR_19->orig_node->orig) ||
     FUNC_10(VAR_15, VAR_6, VAR_19->ttvn) ||
     FUNC_10(VAR_15, VAR_5, VAR_24) ||
     FUNC_9(VAR_15, VAR_3, VAR_25) ||
     FUNC_8(VAR_15, VAR_7, VAR_18->vid) ||
     FUNC_9(VAR_15, VAR_4, VAR_21))
  goto nla_put_failure;

 if (VAR_20 && FUNC_7(VAR_15, VAR_0))
  goto nla_put_failure;

 FUNC_4(VAR_15, VAR_22);
 return 0;

 nla_put_failure:
 FUNC_3(VAR_15, VAR_22);
 return -VAR_10;
}
