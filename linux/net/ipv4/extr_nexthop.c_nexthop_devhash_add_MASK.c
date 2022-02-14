
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct net_device* nhc_dev; } ;
struct nh_info {int dev_hash; TYPE_1__ fib_nhc; } ;
struct net_device {int ifindex; } ;
struct TYPE_4__ {struct hlist_head* devhash; } ;
struct net {TYPE_2__ nexthop; } ;
struct hlist_head {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct hlist_head*) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct net *VAR_0, struct nh_info *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->fib_nhc.nhc_dev;
 struct hlist_head *VAR_3;
 unsigned int VAR_4;

 FUNC_0(!VAR_2);

 VAR_4 = FUNC_2(VAR_2->ifindex);
 VAR_3 = &VAR_0->nexthop.devhash[VAR_4];
 FUNC_1(&VAR_1->dev_hash, VAR_3);
}
