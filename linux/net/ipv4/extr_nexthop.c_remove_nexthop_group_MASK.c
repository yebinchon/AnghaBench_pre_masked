
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_info {int dummy; } ;
struct nh_grp_entry {int * nh; int nh_list; } ;
struct nh_group {int num_nh; struct nh_grp_entry* nh_entries; } ;
struct nexthop {int nh_grp; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct nh_group* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct nexthop *VAR_0, struct nl_info *VAR_1)
{
 struct nh_group *VAR_2 = FUNC_3(VAR_0->nh_grp);
 int VAR_3, VAR_4 = VAR_2->num_nh;

 for (VAR_3 = 0; VAR_3 < VAR_4; ++VAR_3) {
  struct nh_grp_entry *VAR_5 = &VAR_2->nh_entries[VAR_3];

  if (FUNC_0(!VAR_5->nh))
   continue;

  FUNC_1(&VAR_5->nh_list);
  FUNC_2(VAR_5->nh);
  VAR_5->nh = ((void*)0);
  VAR_2->num_nh--;
 }
}
