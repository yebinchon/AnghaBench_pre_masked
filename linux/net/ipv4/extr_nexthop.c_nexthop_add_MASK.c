
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nh_config {int nlflags; int nh_protocol; scalar_t__ nh_id; scalar_t__ nh_grp; } ;
struct nexthop {struct net* net; int protocol; scalar_t__ id; int refcnt; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 struct nexthop* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct nexthop*) ;
 int VAR_1 ;
 int FUNC_2 (struct netlink_ext_ack*,char*) ;
 int FUNC_3 (struct net*,struct nexthop*,int *) ;
 int FUNC_4 (struct net*,struct nexthop*,struct nh_config*,struct netlink_ext_ack*) ;
 struct nexthop* FUNC_5 (struct net*,struct nh_config*,struct netlink_ext_ack*) ;
 struct nexthop* FUNC_6 (struct net*,struct nh_config*) ;
 int FUNC_7 (struct nexthop*) ;
 scalar_t__ FUNC_8 (struct net*) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static struct nexthop *FUNC_10(struct net *VAR_2, struct nh_config *VAR_3,
       struct netlink_ext_ack *VAR_4)
{
 struct nexthop *VAR_5;
 int VAR_6;

 if (VAR_3->nlflags & VAR_1 && !VAR_3->nh_id) {
  FUNC_2(VAR_4, "Replace requires nexthop id");
  return FUNC_0(-VAR_0);
 }

 if (!VAR_3->nh_id) {
  VAR_3->nh_id = FUNC_8(VAR_2);
  if (!VAR_3->nh_id) {
   FUNC_2(VAR_4, "No unused id");
   return FUNC_0(-VAR_0);
  }
 }

 if (VAR_3->nh_grp)
  VAR_5 = FUNC_6(VAR_2, VAR_3);
 else
  VAR_5 = FUNC_5(VAR_2, VAR_3, VAR_4);

 if (FUNC_1(VAR_5))
  return VAR_5;

 FUNC_9(&VAR_5->refcnt, 1);
 VAR_5->id = VAR_3->nh_id;
 VAR_5->protocol = VAR_3->nh_protocol;
 VAR_5->net = VAR_2;

 VAR_6 = FUNC_4(VAR_2, VAR_5, VAR_3, VAR_4);
 if (VAR_6) {
  FUNC_3(VAR_2, VAR_5, ((void*)0));
  FUNC_7(VAR_5);
  VAR_5 = FUNC_0(VAR_6);
 }

 return VAR_5;
}
