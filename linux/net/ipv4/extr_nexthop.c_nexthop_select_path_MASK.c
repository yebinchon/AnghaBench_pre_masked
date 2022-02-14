
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nh_info {int family; int fib6_nh; int fib_nh; } ;
struct nh_grp_entry {struct nexthop* nh; int upper_bound; } ;
struct nh_group {int num_nh; struct nh_grp_entry* nh_entries; } ;
struct nexthop {int nh_info; int nh_grp; int is_group; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 void* FUNC_3 (int ) ;

struct nexthop *FUNC_4(struct nexthop *VAR_0, int VAR_1)
{
 struct nexthop *VAR_2 = ((void*)0);
 struct nh_group *VAR_3;
 int VAR_4;

 if (!VAR_0->is_group)
  return VAR_0;

 VAR_3 = FUNC_3(VAR_0->nh_grp);
 for (VAR_4 = 0; VAR_4 < VAR_3->num_nh; ++VAR_4) {
  struct nh_grp_entry *VAR_5 = &VAR_3->nh_entries[VAR_4];
  struct nh_info *VAR_6;

  if (VAR_1 > FUNC_0(&VAR_5->upper_bound))
   continue;




  VAR_6 = FUNC_3(VAR_5->nh->nh_info);
  switch (VAR_6->family) {
  case 129:
   if (FUNC_1(&VAR_6->fib_nh))
    return VAR_5->nh;
   break;
  case 128:
   if (FUNC_2(&VAR_6->fib6_nh))
    return VAR_5->nh;
   break;
  }

  if (!VAR_2)
   VAR_2 = VAR_5->nh;
 }

 return VAR_2;
}
