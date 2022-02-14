
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_info {int dummy; } ;
struct nh_grp_entry {int nh_parent; struct nexthop* nh; int nh_list; int weight; } ;
struct nh_group {int num_nh; struct nh_grp_entry* nh_entries; } ;
struct nexthop {int grp_list; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,struct nl_info*) ;
 int FUNC_4 (struct nexthop*) ;
 int FUNC_5 (struct nh_group*) ;

__attribute__((used)) static void FUNC_6(struct nh_grp_entry *VAR_1,
    struct nh_group *VAR_2,
    struct nl_info *VAR_3)
{
 struct nexthop *VAR_4 = VAR_1->nh;
 struct nh_grp_entry *VAR_5;
 bool VAR_6 = 0;
 int VAR_7;

 FUNC_0(!VAR_4);

 VAR_5 = VAR_2->nh_entries;
 for (VAR_7 = 0; VAR_7 < VAR_2->num_nh; ++VAR_7) {
  if (VAR_6) {
   VAR_5[VAR_7-1].nh = VAR_5[VAR_7].nh;
   VAR_5[VAR_7-1].weight = VAR_5[VAR_7].weight;
   FUNC_2(&VAR_5[VAR_7].nh_list);
   FUNC_1(&VAR_5[VAR_7-1].nh_list, &VAR_5[VAR_7-1].nh->grp_list);
  } else if (VAR_2->nh_entries[VAR_7].nh == VAR_4) {
   VAR_6 = 1;
  }
 }

 if (FUNC_0(!VAR_6))
  return;

 VAR_2->num_nh--;
 VAR_2->nh_entries[VAR_2->num_nh].nh = ((void*)0);

 FUNC_5(VAR_2);

 FUNC_4(VAR_4);

 if (VAR_3)
  FUNC_3(VAR_0, VAR_1->nh_parent, VAR_3);
}
