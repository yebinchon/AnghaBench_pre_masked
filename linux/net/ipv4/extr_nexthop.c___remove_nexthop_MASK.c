
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nl_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ nhc_dev; } ;
struct nh_info {int dev_hash; TYPE_1__ fib_nhc; } ;
struct nexthop {int nh_info; scalar_t__ is_group; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,struct nexthop*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net*,struct nexthop*,struct nl_info*) ;
 int FUNC_3 (struct nexthop*,struct nl_info*) ;
 struct nh_info* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct net *VAR_0, struct nexthop *VAR_1,
        struct nl_info *VAR_2)
{
 FUNC_0(VAR_0, VAR_1);

 if (VAR_1->is_group) {
  FUNC_3(VAR_1, VAR_2);
 } else {
  struct nh_info *VAR_3;

  VAR_3 = FUNC_4(VAR_1->nh_info);
  if (VAR_3->fib_nhc.nhc_dev)
   FUNC_1(&VAR_3->dev_hash);

  FUNC_2(VAR_0, VAR_1, VAR_2);
 }
}
