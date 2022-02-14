
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; int dev_addr; int phydev; } ;
struct dsa_port {int pl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (struct dsa_port*,int ) ;
 struct net_device* FUNC_5 (struct net_device*) ;
 struct dsa_port* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4)
{
 struct net_device *VAR_5 = FUNC_5(VAR_4);
 struct dsa_port *VAR_6 = FUNC_6(VAR_4);
 int VAR_7;

 if (!(VAR_5->flags & VAR_3))
  return -VAR_0;

 if (!FUNC_7(VAR_4->dev_addr, VAR_5->dev_addr)) {
  VAR_7 = FUNC_2(VAR_5, VAR_4->dev_addr);
  if (VAR_7 < 0)
   goto out;
 }

 if (VAR_4->flags & VAR_1) {
  VAR_7 = FUNC_0(VAR_5, 1);
  if (VAR_7 < 0)
   goto del_unicast;
 }
 if (VAR_4->flags & VAR_2) {
  VAR_7 = FUNC_1(VAR_5, 1);
  if (VAR_7 < 0)
   goto clear_allmulti;
 }

 VAR_7 = FUNC_4(VAR_6, VAR_4->phydev);
 if (VAR_7)
  goto clear_promisc;

 FUNC_8(VAR_6->pl);

 return 0;

clear_promisc:
 if (VAR_4->flags & VAR_2)
  FUNC_1(VAR_5, -1);
clear_allmulti:
 if (VAR_4->flags & VAR_1)
  FUNC_0(VAR_5, -1);
del_unicast:
 if (!FUNC_7(VAR_4->dev_addr, VAR_5->dev_addr))
  FUNC_3(VAR_5, VAR_4->dev_addr);
out:
 return VAR_7;
}
