
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct nh_grp_entry {int upper_bound; scalar_t__ weight; } ;
struct nh_group {int num_nh; struct nh_grp_entry* nh_entries; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct nh_group *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_nh; ++VAR_3)
  VAR_1 += VAR_0->nh_entries[VAR_3].weight;

 for (VAR_3 = 0; VAR_3 < VAR_0->num_nh; ++VAR_3) {
  struct nh_grp_entry *VAR_4 = &VAR_0->nh_entries[VAR_3];
  int VAR_5;

  VAR_2 += VAR_4->weight;
  VAR_5 = FUNC_0((u64)VAR_2 << 31, VAR_1) - 1;
  FUNC_1(&VAR_4->upper_bound, VAR_5);
 }
}
