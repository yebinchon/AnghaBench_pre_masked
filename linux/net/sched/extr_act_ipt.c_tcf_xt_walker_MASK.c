
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_action_ops {int dummy; } ;
struct tc_action_net {int dummy; } ;
struct sk_buff {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct netlink_callback {int dummy; } ;
struct net {int dummy; } ;


 struct tc_action_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct tc_action_net*,struct sk_buff*,struct netlink_callback*,int,struct tc_action_ops const*,struct netlink_ext_ack*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct net *VAR_1, struct sk_buff *VAR_2,
    struct netlink_callback *VAR_3, int VAR_4,
    const struct tc_action_ops *VAR_5,
    struct netlink_ext_ack *VAR_6)
{
 struct tc_action_net *VAR_7 = FUNC_0(VAR_1, VAR_0);

 return FUNC_1(VAR_7, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
