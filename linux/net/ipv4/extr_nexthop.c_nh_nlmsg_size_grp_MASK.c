
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nh_group {int num_nh; } ;
struct nexthop_grp {int dummy; } ;
struct nexthop {int nh_grp; } ;


 size_t FUNC_0 (int) ;
 struct nh_group* FUNC_1 (int ) ;

__attribute__((used)) static size_t FUNC_2(struct nexthop *VAR_0)
{
 struct nh_group *VAR_1 = FUNC_1(VAR_0->nh_grp);
 size_t VAR_2 = sizeof(struct nexthop_grp) * VAR_1->num_nh;

 return FUNC_0(VAR_2) +
        FUNC_0(2);
}
