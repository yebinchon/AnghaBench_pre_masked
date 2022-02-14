
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nh_group {int num_nh; TYPE_1__* nh_entries; } ;
struct nexthop {int nh_grp; int is_group; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {struct nexthop* nh_parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ,struct nh_group*) ;
 struct nh_group* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_1, struct nexthop *VAR_2,
          struct nexthop *VAR_3,
          struct netlink_ext_ack *VAR_4)
{
 struct nh_group *VAR_5, *VAR_6;
 int VAR_7;

 if (!VAR_3->is_group) {
  FUNC_0(VAR_4, "Can not replace a nexthop group with a nexthop.");
  return -VAR_0;
 }

 VAR_5 = FUNC_2(VAR_2->nh_grp);
 VAR_6 = FUNC_2(VAR_3->nh_grp);


 for (VAR_7 = 0; VAR_7 < VAR_6->num_nh; VAR_7++)
  VAR_6->nh_entries[VAR_7].nh_parent = VAR_2;

 FUNC_1(VAR_2->nh_grp, VAR_6);

 for (VAR_7 = 0; VAR_7 < VAR_5->num_nh; VAR_7++)
  VAR_5->nh_entries[VAR_7].nh_parent = VAR_3;

 FUNC_1(VAR_3->nh_grp, VAR_5);

 return 0;
}
