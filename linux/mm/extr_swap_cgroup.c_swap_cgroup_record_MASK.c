
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int swp_entry_t ;
struct swap_cgroup_ctrl {int lock; } ;
struct swap_cgroup {unsigned short id; } ;
typedef unsigned int pgoff_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 struct swap_cgroup* FUNC_1 (struct swap_cgroup_ctrl*,unsigned int) ;
 struct swap_cgroup* FUNC_2 (int ,struct swap_cgroup_ctrl**) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 unsigned int FUNC_5 (int ) ;

unsigned short FUNC_6(swp_entry_t VAR_1, unsigned short VAR_2,
      unsigned int VAR_3)
{
 struct swap_cgroup_ctrl *VAR_4;
 struct swap_cgroup *VAR_5;
 unsigned short VAR_6;
 unsigned long VAR_7;
 pgoff_t VAR_8 = FUNC_5(VAR_1);
 pgoff_t VAR_9 = VAR_8 + VAR_3;

 VAR_5 = FUNC_2(VAR_1, &VAR_4);

 FUNC_3(&VAR_4->lock, VAR_7);
 VAR_6 = VAR_5->id;
 for (;;) {
  FUNC_0(VAR_5->id != VAR_6);
  VAR_5->id = VAR_2;
  VAR_8++;
  if (VAR_8 == VAR_9)
   break;
  if (VAR_8 % VAR_0)
   VAR_5++;
  else
   VAR_5 = FUNC_1(VAR_4, VAR_8);
 }
 FUNC_4(&VAR_4->lock, VAR_7);

 return VAR_6;
}
