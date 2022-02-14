
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int * attrs; } ;
struct batadv_priv {scalar_t__ soft_iface; } ;
struct batadv_hard_iface {scalar_t__ soft_iface; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct batadv_hard_iface* FUNC_0 (int ) ;
 struct batadv_hard_iface* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct batadv_hard_iface*) ;
 struct net_device* FUNC_3 (struct net*,unsigned int) ;
 int FUNC_4 (struct net_device*) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static struct batadv_hard_iface *
FUNC_6(struct batadv_priv *VAR_3, struct net *VAR_4,
       struct genl_info *VAR_5)
{
 struct batadv_hard_iface *VAR_6;
 struct net_device *VAR_7;
 unsigned int VAR_8;

 if (!VAR_5->attrs[VAR_0])
  return FUNC_0(-VAR_1);

 VAR_8 = FUNC_5(VAR_5->attrs[VAR_0]);

 VAR_7 = FUNC_3(VAR_4, VAR_8);
 if (!VAR_7)
  return FUNC_0(-VAR_2);

 VAR_6 = FUNC_1(VAR_7);
 if (!VAR_6)
  goto err_put_harddev;

 if (VAR_6->soft_iface != VAR_3->soft_iface)
  goto err_put_hardif;


 FUNC_4(VAR_7);

 return VAR_6;

err_put_hardif:
 FUNC_2(VAR_6);
err_put_harddev:
 FUNC_4(VAR_7);

 return FUNC_0(-VAR_1);
}
