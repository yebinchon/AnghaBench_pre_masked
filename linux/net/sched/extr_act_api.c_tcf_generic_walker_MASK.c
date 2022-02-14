
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_idrinfo {int dummy; } ;
struct tc_action_ops {int dummy; } ;
struct tc_action_net {struct tcf_idrinfo* idrinfo; } ;
struct sk_buff {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_callback {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (struct tcf_idrinfo*,struct sk_buff*,struct tc_action_ops const*) ;
 int FUNC_3 (struct tcf_idrinfo*,struct sk_buff*,struct netlink_callback*) ;

int FUNC_4(struct tc_action_net *VAR_3, struct sk_buff *VAR_4,
         struct netlink_callback *VAR_5, int VAR_6,
         const struct tc_action_ops *VAR_7,
         struct netlink_ext_ack *VAR_8)
{
 struct tcf_idrinfo *VAR_9 = VAR_3->idrinfo;

 if (VAR_6 == VAR_1) {
  return FUNC_2(VAR_9, VAR_4, VAR_7);
 } else if (VAR_6 == VAR_2) {
  return FUNC_3(VAR_9, VAR_4, VAR_5);
 } else {
  FUNC_1(1, "tcf_generic_walker: unknown command %d\n", VAR_6);
  FUNC_0(VAR_8, "tcf_generic_walker: unknown command");
  return -VAR_0;
 }
}
