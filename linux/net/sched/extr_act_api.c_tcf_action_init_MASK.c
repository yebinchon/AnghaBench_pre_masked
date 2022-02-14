
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tc_action {int order; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (struct tc_action*) ;
 int FUNC_1 (struct tc_action*) ;
 int VAR_0 ;
 int FUNC_2 (struct nlattr**,int,struct nlattr*,int *,struct netlink_ext_ack*) ;
 int FUNC_3 (struct tc_action**,int) ;
 scalar_t__ FUNC_4 (struct tc_action*) ;
 size_t FUNC_5 (size_t) ;
 struct tc_action* FUNC_6 (struct net*,struct tcf_proto*,struct nlattr*,struct nlattr*,char*,int,int,int,struct netlink_ext_ack*) ;

int FUNC_7(struct net *VAR_1, struct tcf_proto *VAR_2, struct nlattr *VAR_3,
      struct nlattr *VAR_4, char *VAR_5, int VAR_6, int VAR_7,
      struct tc_action *VAR_8[], size_t *VAR_9,
      bool VAR_10, struct netlink_ext_ack *VAR_11)
{
 struct nlattr *VAR_12[VAR_0 + 1];
 struct tc_action *VAR_13;
 size_t VAR_14 = 0;
 int VAR_15;
 int VAR_16;

 VAR_15 = FUNC_2(VAR_12, VAR_0, VAR_3, ((void*)0),
       VAR_11);
 if (VAR_15 < 0)
  return VAR_15;

 for (VAR_16 = 1; VAR_16 <= VAR_0 && VAR_12[VAR_16]; VAR_16++) {
  VAR_13 = FUNC_6(VAR_1, VAR_2, VAR_12[VAR_16], VAR_4, VAR_5, VAR_6, VAR_7,
     VAR_10, VAR_11);
  if (FUNC_0(VAR_13)) {
   VAR_15 = FUNC_1(VAR_13);
   goto err;
  }
  VAR_13->order = VAR_16;
  VAR_14 += FUNC_4(VAR_13);

  VAR_8[VAR_16 - 1] = VAR_13;
 }

 *VAR_9 = FUNC_5(VAR_14);
 return VAR_16 - 1;

err:
 FUNC_3(VAR_8, VAR_7);
 return VAR_15;
}
