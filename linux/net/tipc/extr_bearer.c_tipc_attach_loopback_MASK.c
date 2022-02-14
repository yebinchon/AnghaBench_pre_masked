
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func; int type; struct net_device* dev; } ;
struct tipc_net {TYPE_1__ loopback_pt; } ;
struct net_device {int dummy; } ;
struct net {struct net_device* loopback_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 struct tipc_net* FUNC_3 (struct net*) ;

int FUNC_4(struct net *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->loopback_dev;
 struct tipc_net *VAR_5 = FUNC_3(VAR_3);

 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_4);
 VAR_5->loopback_pt.dev = VAR_4;
 VAR_5->loopback_pt.type = FUNC_2(VAR_1);
 VAR_5->loopback_pt.func = VAR_2;
 FUNC_0(&VAR_5->loopback_pt);
 return 0;
}
