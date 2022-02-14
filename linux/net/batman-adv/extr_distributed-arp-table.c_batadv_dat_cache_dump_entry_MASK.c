
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; } ;
struct batadv_dat_entry {int vid; int mac_addr; int ip; scalar_t__ last_update; } ;
struct TYPE_2__ {int nlmsg_seq; } ;


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
 int FUNC_0 (struct netlink_callback*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct sk_buff *VAR_11, u32 VAR_12,
       struct netlink_callback *VAR_13,
       struct batadv_dat_entry *VAR_14)
{
 int VAR_15;
 void *VAR_16;

 VAR_16 = FUNC_3(VAR_11, VAR_12, VAR_13->nlh->nlmsg_seq,
     &VAR_9, VAR_8,
     VAR_4);
 if (!VAR_16)
  return -VAR_6;

 FUNC_0(VAR_13, VAR_16);

 VAR_15 = FUNC_4(VAR_10 - VAR_14->last_update);

 if (FUNC_6(VAR_11, VAR_1,
       VAR_14->ip) ||
     FUNC_5(VAR_11, VAR_0, VAR_7,
      VAR_14->mac_addr) ||
     FUNC_7(VAR_11, VAR_2, VAR_14->vid) ||
     FUNC_8(VAR_11, VAR_3, VAR_15)) {
  FUNC_1(VAR_11, VAR_16);
  return -VAR_5;
 }

 FUNC_2(VAR_11, VAR_16);
 return 0;
}
