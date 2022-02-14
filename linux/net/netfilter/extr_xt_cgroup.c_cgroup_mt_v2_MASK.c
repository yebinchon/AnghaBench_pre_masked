
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_cgroup_info_v2 {int invert_path; scalar_t__ classid; int invert_classid; struct cgroup* priv; } ;
struct xt_action_param {struct xt_cgroup_info_v2* matchinfo; } ;
struct sock_cgroup_data {int dummy; } ;
struct sock {struct sock_cgroup_data sk_cgrp_data; } ;
struct sk_buff {struct sock* sk; } ;
struct cgroup {int dummy; } ;


 int FUNC_0 (int ,struct cgroup*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock_cgroup_data*) ;
 int FUNC_4 (struct sock_cgroup_data*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct xt_action_param*) ;

__attribute__((used)) static bool FUNC_7(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct xt_cgroup_info_v2 *VAR_2 = VAR_1->matchinfo;
 struct sock_cgroup_data *VAR_3 = &VAR_0->sk->sk_cgrp_data;
 struct cgroup *VAR_4 = VAR_2->priv;
 struct sock *VAR_5 = VAR_0->sk;

 if (!VAR_5 || !FUNC_2(VAR_5) || !FUNC_1(FUNC_6(VAR_1), FUNC_5(VAR_5)))
  return 0;

 if (VAR_4)
  return FUNC_0(FUNC_4(VAR_3), VAR_4) ^
   VAR_2->invert_path;
 else
  return (VAR_2->classid == FUNC_3(VAR_3)) ^
   VAR_2->invert_classid;
}
