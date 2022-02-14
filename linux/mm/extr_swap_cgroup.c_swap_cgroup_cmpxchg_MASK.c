
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_cgroup_ctrl {int lock; } ;
struct swap_cgroup {unsigned short id; } ;


 struct swap_cgroup* FUNC_0 (int ,struct swap_cgroup_ctrl**) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

unsigned short FUNC_3(swp_entry_t VAR_0,
     unsigned short VAR_1, unsigned short VAR_2)
{
 struct swap_cgroup_ctrl *VAR_3;
 struct swap_cgroup *VAR_4;
 unsigned long VAR_5;
 unsigned short VAR_6;

 VAR_4 = FUNC_0(VAR_0, &VAR_3);

 FUNC_1(&VAR_3->lock, VAR_5);
 VAR_6 = VAR_4->id;
 if (VAR_6 == VAR_1)
  VAR_4->id = VAR_2;
 else
  VAR_6 = 0;
 FUNC_2(&VAR_3->lock, VAR_5);
 return VAR_6;
}
