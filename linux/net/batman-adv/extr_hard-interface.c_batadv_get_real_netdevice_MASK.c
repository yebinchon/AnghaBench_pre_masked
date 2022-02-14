
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int ifindex; } ;
struct net {int dummy; } ;
struct batadv_hard_iface {int soft_iface; } ;


 int FUNC_0 () ;
 struct net* FUNC_1 (struct net_device*,struct net*) ;
 struct batadv_hard_iface* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct batadv_hard_iface*) ;
 struct net_device* FUNC_4 (struct net*,int) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 struct net* FUNC_7 (int ) ;

__attribute__((used)) static struct net_device *FUNC_8(struct net_device *VAR_0)
{
 struct batadv_hard_iface *VAR_1 = ((void*)0);
 struct net_device *VAR_2 = ((void*)0);
 struct net *VAR_3;
 struct net *VAR_4;
 int VAR_5;

 FUNC_0();

 if (!VAR_0)
  return ((void*)0);

 if (VAR_0->ifindex == FUNC_5(VAR_0)) {
  FUNC_6(VAR_0);
  return VAR_0;
 }

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1 || !VAR_1->soft_iface)
  goto out;

 VAR_4 = FUNC_7(VAR_1->soft_iface);
 VAR_5 = FUNC_5(VAR_0);
 VAR_3 = FUNC_1(VAR_0, VAR_4);
 VAR_2 = FUNC_4(VAR_3, VAR_5);

out:
 if (VAR_1)
  FUNC_3(VAR_1);
 return VAR_2;
}
