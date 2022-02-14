
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tc_cookie {struct tc_cookie* data; } ;
struct tc_action_ops {int (* init ) (struct net*,struct nlattr*,struct nlattr*,struct tc_action**,int,int,int,struct tcf_proto*,struct netlink_ext_ack*) ;int owner; } ;
struct tc_action {int goto_chain; int tcfa_action; int act_cookie; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct tc_action* FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int VAR_10 ;
 int FUNC_3 (struct tc_cookie*) ;
 int FUNC_4 (int ) ;
 struct tc_cookie* FUNC_5 (struct nlattr**) ;
 int FUNC_6 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 int FUNC_7 (char*,struct nlattr*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (struct net*,struct nlattr*,struct nlattr*,struct tc_action**,int,int,int,struct tcf_proto*,struct netlink_ext_ack*) ;
 int FUNC_14 (struct net*,struct nlattr*,struct nlattr*,struct tc_action**,int,int,int,struct tcf_proto*,struct netlink_ext_ack*) ;
 struct tc_action_ops* FUNC_15 (char*) ;
 int FUNC_16 (struct tc_action*,int) ;
 int VAR_11 ;
 int FUNC_17 (int *,struct tc_cookie*) ;

struct tc_action *FUNC_18(struct net *VAR_12, struct tcf_proto *VAR_13,
        struct nlattr *VAR_14, struct nlattr *VAR_15,
        char *VAR_16, int VAR_17, int VAR_18,
        bool VAR_19,
        struct netlink_ext_ack *VAR_20)
{
 struct tc_action *VAR_21;
 struct tc_action_ops *VAR_22;
 struct tc_cookie *VAR_23 = ((void*)0);
 char VAR_24[VAR_5];
 struct nlattr *VAR_25[VAR_8 + 1];
 struct nlattr *VAR_26;
 int VAR_27;

 if (VAR_16 == ((void*)0)) {
  VAR_27 = FUNC_6(VAR_25, VAR_8, VAR_14,
        VAR_11, VAR_20);
  if (VAR_27 < 0)
   goto err_out;
  VAR_27 = -VAR_2;
  VAR_26 = VAR_25[VAR_7];
  if (!VAR_26) {
   FUNC_1(VAR_20, "TC action kind must be specified");
   goto err_out;
  }
  if (FUNC_7(VAR_24, VAR_26, VAR_5) >= VAR_5) {
   FUNC_1(VAR_20, "TC action name too long");
   goto err_out;
  }
  if (VAR_25[VAR_6]) {
   VAR_23 = FUNC_5(VAR_25);
   if (!VAR_23) {
    FUNC_1(VAR_20, "No memory to generate TC cookie");
    VAR_27 = -VAR_4;
    goto err_out;
   }
  }
 } else {
  if (FUNC_12(VAR_24, VAR_16, VAR_5) >= VAR_5) {
   FUNC_1(VAR_20, "TC action name too long");
   VAR_27 = -VAR_2;
   goto err_out;
  }
 }

 VAR_22 = FUNC_15(VAR_24);
 if (VAR_22 == ((void*)0)) {
  FUNC_1(VAR_20, "Failed to load TC action module");
  VAR_27 = -VAR_3;
  goto err_out;
 }


 if (VAR_16 == ((void*)0))
  VAR_27 = VAR_22->init(VAR_12, VAR_25[VAR_9], VAR_15, &VAR_21, VAR_17, VAR_18,
    VAR_19, VAR_13, VAR_20);
 else
  VAR_27 = VAR_22->init(VAR_12, VAR_14, VAR_15, &VAR_21, VAR_17, VAR_18, VAR_19,
    VAR_13, VAR_20);
 if (VAR_27 < 0)
  goto err_mod;

 if (!VAR_16 && VAR_25[VAR_6])
  FUNC_17(&VAR_21->act_cookie, VAR_23);





 if (VAR_27 != VAR_0)
  FUNC_4(VAR_22->owner);

 if (FUNC_2(VAR_21->tcfa_action, VAR_10) &&
     !FUNC_8(VAR_21->goto_chain)) {
  FUNC_16(VAR_21, VAR_18);
  FUNC_1(VAR_20, "can't use goto chain with NULL chain");
  return FUNC_0(-VAR_2);
 }

 return VAR_21;

err_mod:
 FUNC_4(VAR_22->owner);
err_out:
 if (VAR_23) {
  FUNC_3(VAR_23->data);
  FUNC_3(VAR_23);
 }
 return FUNC_0(VAR_27);
}
