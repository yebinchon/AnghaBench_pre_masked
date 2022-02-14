
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_dev_priv {int real_dev_addr; } ;
struct net_device {int dev_addr; } ;


 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (struct net_device*,struct net_device*) ;
 struct vlan_dev_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_0,
         struct net_device *VAR_1)
{
 struct vlan_dev_priv *VAR_2 = FUNC_5(VAR_1);


 if (FUNC_3(VAR_2->real_dev_addr, VAR_0->dev_addr))
  return;


 if (FUNC_4(VAR_1, VAR_0))
  goto out;



 if (!FUNC_3(VAR_1->dev_addr, VAR_2->real_dev_addr) &&
     FUNC_3(VAR_1->dev_addr, VAR_0->dev_addr))
  FUNC_1(VAR_0, VAR_1->dev_addr);



 if (FUNC_3(VAR_1->dev_addr, VAR_2->real_dev_addr) &&
     !FUNC_3(VAR_1->dev_addr, VAR_0->dev_addr))
  FUNC_0(VAR_0, VAR_1->dev_addr);

out:
 FUNC_2(VAR_2->real_dev_addr, VAR_0->dev_addr);
}
