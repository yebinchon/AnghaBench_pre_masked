
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct xt_cgroup_info_v0* matchinfo; } ;
struct xt_cgroup_info_v0 {int invert; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const struct xt_mtchk_param *VAR_1)
{
 struct xt_cgroup_info_v0 *VAR_2 = VAR_1->matchinfo;

 if (VAR_2->invert & ~1)
  return -VAR_0;

 return 0;
}
