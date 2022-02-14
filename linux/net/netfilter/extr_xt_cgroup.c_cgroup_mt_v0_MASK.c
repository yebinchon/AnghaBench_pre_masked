
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_cgroup_info_v0 {scalar_t__ id; int invert; } ;
struct xt_action_param {struct xt_cgroup_info_v0* matchinfo; } ;
struct sock {int sk_cgrp_data; } ;
struct sk_buff {struct sock* sk; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_5(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 const struct xt_cgroup_info_v0 *VAR_2 = VAR_1->matchinfo;
 struct sock *VAR_3 = VAR_0->sk;

 if (!VAR_3 || !FUNC_1(VAR_3) || !FUNC_0(FUNC_4(VAR_1), FUNC_3(VAR_3)))
  return 0;

 return (VAR_2->id == FUNC_2(&VAR_0->sk->sk_cgrp_data)) ^
  VAR_2->invert;
}
