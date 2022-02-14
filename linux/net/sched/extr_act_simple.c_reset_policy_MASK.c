
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tcf_defact {int tcf_lock; int tcfd_defdata; } ;
struct tcf_chain {int dummy; } ;
struct tc_defact {int action; } ;
struct tc_action {int dummy; } ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,struct nlattr const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct tcf_proto*,struct tcf_chain**,struct netlink_ext_ack*) ;
 struct tcf_chain* FUNC_5 (struct tc_action*,int ,struct tcf_chain*) ;
 int FUNC_6 (struct tcf_chain*) ;
 struct tcf_defact* FUNC_7 (struct tc_action*) ;

__attribute__((used)) static int FUNC_8(struct tc_action *VAR_1, const struct nlattr *VAR_2,
   struct tc_defact *VAR_3, struct tcf_proto *VAR_4,
   struct netlink_ext_ack *VAR_5)
{
 struct tcf_chain *VAR_6 = ((void*)0);
 struct tcf_defact *VAR_7;
 int VAR_8;

 VAR_8 = FUNC_4(VAR_3->action, VAR_4, &VAR_6, VAR_5);
 if (VAR_8 < 0)
  return VAR_8;
 VAR_7 = FUNC_7(VAR_1);
 FUNC_2(&VAR_7->tcf_lock);
 VAR_6 = FUNC_5(VAR_1, VAR_3->action, VAR_6);
 FUNC_0(VAR_7->tcfd_defdata, 0, VAR_0);
 FUNC_1(VAR_7->tcfd_defdata, VAR_2, VAR_0);
 FUNC_3(&VAR_7->tcf_lock);
 if (VAR_6)
  FUNC_6(VAR_6);
 return 0;
}
