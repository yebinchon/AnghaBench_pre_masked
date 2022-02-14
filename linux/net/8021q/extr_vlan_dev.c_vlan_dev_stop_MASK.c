
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_dev_priv {int flags; struct net_device* real_dev; } ;
struct net_device {int flags; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,struct net_device*) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct net_device*,struct net_device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 struct vlan_dev_priv* FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_3)
{
 struct vlan_dev_priv *VAR_4 = FUNC_7(VAR_3);
 struct net_device *VAR_5 = VAR_4->real_dev;

 FUNC_0(VAR_5, VAR_3);
 FUNC_4(VAR_5, VAR_3);
 if (VAR_3->flags & VAR_0)
  FUNC_1(VAR_5, -1);
 if (VAR_3->flags & VAR_1)
  FUNC_2(VAR_5, -1);

 if (!FUNC_5(VAR_3->dev_addr, VAR_5->dev_addr))
  FUNC_3(VAR_5, VAR_3->dev_addr);

 if (!(VAR_4->flags & VAR_2))
  FUNC_6(VAR_3);
 return 0;
}
