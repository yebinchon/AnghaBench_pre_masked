
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_cgroup_ctrl {int dummy; } ;
struct swap_cgroup {int dummy; } ;
typedef int pgoff_t ;


 struct swap_cgroup* FUNC_0 (struct swap_cgroup_ctrl*,int ) ;
 struct swap_cgroup_ctrl* VAR_0 ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static struct swap_cgroup *FUNC_3(swp_entry_t VAR_1,
     struct swap_cgroup_ctrl **VAR_2)
{
 pgoff_t VAR_3 = FUNC_1(VAR_1);
 struct swap_cgroup_ctrl *VAR_4;

 VAR_4 = &VAR_0[FUNC_2(VAR_1)];
 if (VAR_2)
  *VAR_2 = VAR_4;
 return FUNC_0(VAR_4, VAR_3);
}
