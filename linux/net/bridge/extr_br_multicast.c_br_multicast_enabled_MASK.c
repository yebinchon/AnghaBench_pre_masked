
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*,int ) ;
 struct net_bridge* FUNC_1 (struct net_device const*) ;

bool FUNC_2(const struct net_device *VAR_1)
{
 struct net_bridge *VAR_2 = FUNC_1(VAR_1);

 return !!FUNC_0(VAR_2, VAR_0);
}
