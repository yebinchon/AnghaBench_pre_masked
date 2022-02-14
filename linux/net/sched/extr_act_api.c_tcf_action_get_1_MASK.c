
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_action_ops {scalar_t__ (* lookup ) (struct net*,struct tc_action**,int) ;int owner; } ;
struct tc_action {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
typedef int index ;


 int VAR_0 ;
 int VAR_1 ;
 struct tc_action* FUNC_0 (int) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nlattr*) ;
 int FUNC_4 (struct nlattr*) ;
 int FUNC_5 (struct nlattr**,int ,struct nlattr*,int ,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_6 (struct net*,struct tc_action**,int) ;
 struct tc_action_ops* FUNC_7 (struct nlattr*) ;
 int VAR_5 ;

__attribute__((used)) static struct tc_action *FUNC_8(struct net *VAR_6, struct nlattr *VAR_7,
       struct nlmsghdr *VAR_8, u32 VAR_9,
       struct netlink_ext_ack *VAR_10)
{
 struct nlattr *VAR_11[VAR_4 + 1];
 const struct tc_action_ops *VAR_12;
 struct tc_action *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_15 = FUNC_5(VAR_11, VAR_4, VAR_7,
       VAR_5, VAR_10);
 if (VAR_15 < 0)
  goto err_out;

 VAR_15 = -VAR_0;
 if (VAR_11[VAR_2] == ((void*)0) ||
     FUNC_4(VAR_11[VAR_2]) < sizeof(VAR_14)) {
  FUNC_1(VAR_10, "Invalid TC action index value");
  goto err_out;
 }
 VAR_14 = FUNC_3(VAR_11[VAR_2]);

 VAR_15 = -VAR_0;
 VAR_12 = FUNC_7(VAR_11[VAR_3]);
 if (!VAR_12) {
  FUNC_1(VAR_10, "Specified TC action kind not found");
  goto err_out;
 }
 VAR_15 = -VAR_1;
 if (VAR_12->lookup(VAR_6, &VAR_13, VAR_14) == 0) {
  FUNC_1(VAR_10, "TC action with specified index not found");
  goto err_mod;
 }

 FUNC_2(VAR_12->owner);
 return VAR_13;

err_mod:
 FUNC_2(VAR_12->owner);
err_out:
 return FUNC_0(VAR_15);
}
