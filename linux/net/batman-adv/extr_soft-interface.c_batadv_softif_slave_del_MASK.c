
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct batadv_hard_iface {struct net_device* soft_iface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct batadv_hard_iface*,int ) ;
 struct batadv_hard_iface* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct batadv_hard_iface*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2,
       struct net_device *VAR_3)
{
 struct batadv_hard_iface *VAR_4;
 int VAR_5 = -VAR_1;

 VAR_4 = FUNC_1(VAR_3);

 if (!VAR_4 || VAR_4->soft_iface != VAR_2)
  goto out;

 FUNC_0(VAR_4, VAR_0);
 VAR_5 = 0;

out:
 if (VAR_4)
  FUNC_2(VAR_4);
 return VAR_5;
}
