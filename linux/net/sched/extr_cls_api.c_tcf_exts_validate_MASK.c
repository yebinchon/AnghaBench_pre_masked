
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tcf_exts {size_t police; int nr_actions; size_t action; struct tc_action** actions; int type; } ;
struct tc_action {int type; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct tc_action*) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int FUNC_2 (struct tc_action*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct net*,struct tcf_proto*,struct nlattr*,struct nlattr*,int *,int,int ,struct tc_action**,size_t*,int,struct netlink_ext_ack*) ;
 struct tc_action* FUNC_4 (struct net*,struct tcf_proto*,struct nlattr*,struct nlattr*,char*,int,int ,int,struct netlink_ext_ack*) ;

int FUNC_5(struct net *VAR_3, struct tcf_proto *VAR_4, struct nlattr **VAR_5,
        struct nlattr *VAR_6, struct tcf_exts *VAR_7, bool VAR_8,
        bool VAR_9, struct netlink_ext_ack *VAR_10)
{
 if ((VAR_7->action && VAR_5[VAR_7->action]) ||
     (VAR_7->police && VAR_5[VAR_7->police])) {
  FUNC_1(VAR_10, "Classifier actions are not supported per compile options (CONFIG_NET_CLS_ACT)");
  return -VAR_0;
 }


 return 0;
}
