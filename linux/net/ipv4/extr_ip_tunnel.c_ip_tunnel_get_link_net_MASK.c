
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip_tunnel {struct net* net; } ;


 struct ip_tunnel* FUNC_0 (struct net_device const*) ;

struct net *FUNC_1(const struct net_device *VAR_0)
{
 struct ip_tunnel *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->net;
}
