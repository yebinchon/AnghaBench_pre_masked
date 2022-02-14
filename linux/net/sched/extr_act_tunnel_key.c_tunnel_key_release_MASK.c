
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_tunnel_key_params {int dummy; } ;
struct tcf_tunnel_key {int params; } ;
struct tc_action {int dummy; } ;


 struct tcf_tunnel_key_params* FUNC_0 (int ,int) ;
 struct tcf_tunnel_key* FUNC_1 (struct tc_action*) ;
 int FUNC_2 (struct tcf_tunnel_key_params*) ;

__attribute__((used)) static void FUNC_3(struct tc_action *VAR_0)
{
 struct tcf_tunnel_key *VAR_1 = FUNC_1(VAR_0);
 struct tcf_tunnel_key_params *VAR_2;

 VAR_2 = FUNC_0(VAR_1->params, 1);
 FUNC_2(VAR_2);
}
