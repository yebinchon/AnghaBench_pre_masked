
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nl_info {int dummy; } ;
struct nexthop {int rb_node; } ;
struct TYPE_2__ {int rb_root; } ;
struct net {TYPE_1__ nexthop; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,struct nexthop*,struct nl_info*) ;
 int FUNC_1 (int ,struct nexthop*,struct nl_info*) ;
 int FUNC_2 (struct nexthop*) ;
 int FUNC_3 (struct net*) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static void FUNC_5(struct net *VAR_1, struct nexthop *VAR_2,
      struct nl_info *VAR_3)
{

 FUNC_4(&VAR_2->rb_node, &VAR_1->nexthop.rb_root);

 if (VAR_3)
  FUNC_1(VAR_0, VAR_2, VAR_3);

 FUNC_0(VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_1);

 FUNC_2(VAR_2);
}
