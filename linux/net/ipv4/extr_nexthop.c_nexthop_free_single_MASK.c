
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nh_info {int family; int fib6_nh; int fib_nh; } ;
struct nexthop {int net; int nh_info; } ;
struct TYPE_2__ {int (* fib6_nh_release ) (int *) ;} ;




 int FUNC_0 (int ,int *) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct nh_info*) ;
 struct nh_info* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nexthop *VAR_1)
{
 struct nh_info *VAR_2;

 VAR_2 = FUNC_2(VAR_1->nh_info);
 switch (VAR_2->family) {
 case 129:
  FUNC_0(VAR_1->net, &VAR_2->fib_nh);
  break;
 case 128:
  VAR_0->fib6_nh_release(&VAR_2->fib6_nh);
  break;
 }
 FUNC_1(VAR_2);
}
