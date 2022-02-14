
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sit_net {struct net_device* fb_tunnel_dev; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct list_head {int dummy; } ;


 struct net* FUNC_0 (struct net_device*) ;
 struct sit_net* FUNC_1 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct net_device*,struct list_head*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1, struct list_head *VAR_2)
{
 struct net *VAR_3 = FUNC_0(VAR_1);
 struct sit_net *VAR_4 = FUNC_1(VAR_3, VAR_0);

 if (VAR_1 != VAR_4->fb_tunnel_dev)
  FUNC_2(VAR_1, VAR_2);
}
