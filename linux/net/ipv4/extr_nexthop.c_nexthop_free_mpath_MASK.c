
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nh_group {int num_nh; TYPE_1__* nh_entries; } ;
struct nexthop {int nh_grp; } ;
struct TYPE_2__ {int nh; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nh_group*) ;
 struct nh_group* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct nexthop *VAR_0)
{
 struct nh_group *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_2(VAR_0->nh_grp);
 for (VAR_2 = 0; VAR_2 < VAR_1->num_nh; ++VAR_2)
  FUNC_0(VAR_1->nh_entries[VAR_2].nh);

 FUNC_1(VAR_1);
}
