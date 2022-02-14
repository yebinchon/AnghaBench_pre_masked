
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct netlink_callback {TYPE_1__* nlh; } ;
struct batadv_orig_node {int mcast_flags; int capabilities; int orig; } ;
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
 int FUNC_0 (struct netlink_callback*,void*) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 void* FUNC_3 (struct sk_buff*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static int
FUNC_7(struct sk_buff *VAR_9, u32 VAR_10,
         struct netlink_callback *VAR_11,
         struct batadv_orig_node *VAR_12)
{
 void *VAR_13;

 VAR_13 = FUNC_3(VAR_9, VAR_10, VAR_11->nlh->nlmsg_seq,
     &VAR_8, VAR_7,
     VAR_2);
 if (!VAR_13)
  return -VAR_5;

 FUNC_0(VAR_11, VAR_13);

 if (FUNC_4(VAR_9, VAR_1, VAR_6,
      VAR_12->orig)) {
  FUNC_1(VAR_9, VAR_13);
  return -VAR_4;
 }

 if (FUNC_6(VAR_3,
       &VAR_12->capabilities)) {
  if (FUNC_5(VAR_9, VAR_0,
    VAR_12->mcast_flags)) {
   FUNC_1(VAR_9, VAR_13);
   return -VAR_4;
  }
 }

 FUNC_2(VAR_9, VAR_13);
 return 0;
}
