
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtdtor_param {struct xt_cgroup_info_v2* matchinfo; } ;
struct xt_cgroup_info_v2 {scalar_t__ priv; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(const struct xt_mtdtor_param *VAR_0)
{
 struct xt_cgroup_info_v2 *VAR_1 = VAR_0->matchinfo;

 if (VAR_1->priv)
  FUNC_0(VAR_1->priv);
}
