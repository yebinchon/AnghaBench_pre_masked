
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sk_buff {int dummy; } ;
struct rtmsg {int rtm_dst_len; scalar_t__ rtm_flags; int rtm_type; int rtm_scope; int rtm_protocol; int rtm_table; scalar_t__ rtm_tos; scalar_t__ rtm_src_len; int rtm_family; } ;
struct nlmsghdr {int dummy; } ;
struct net_device {int ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct nlmsghdr*) ;
 struct rtmsg* FUNC_3 (struct nlmsghdr*) ;
 int FUNC_4 (struct sk_buff*,struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_5 (struct sk_buff*,int ,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_8, struct net_device *VAR_9, u8 VAR_10,
   u32 VAR_11, u32 VAR_12, int VAR_13)
{
 struct rtmsg *VAR_14;
 struct nlmsghdr *VAR_15;

 VAR_15 = FUNC_5(VAR_8, VAR_11, VAR_12, VAR_13, sizeof(*VAR_14), 0);
 if (VAR_15 == ((void*)0))
  return -VAR_1;

 VAR_14 = FUNC_3(VAR_15);
 VAR_14->rtm_family = VAR_0;
 VAR_14->rtm_dst_len = 6;
 VAR_14->rtm_src_len = 0;
 VAR_14->rtm_tos = 0;
 VAR_14->rtm_table = VAR_7;
 VAR_14->rtm_protocol = VAR_5;
 VAR_14->rtm_scope = VAR_6;
 VAR_14->rtm_type = VAR_4;
 VAR_14->rtm_flags = 0;
 if (FUNC_1(VAR_8, VAR_2, VAR_10) ||
     FUNC_0(VAR_8, VAR_3, VAR_9->ifindex))
  goto nla_put_failure;
 FUNC_4(VAR_8, VAR_15);
 return 0;

nla_put_failure:
 FUNC_2(VAR_8, VAR_15);
 return -VAR_1;
}
