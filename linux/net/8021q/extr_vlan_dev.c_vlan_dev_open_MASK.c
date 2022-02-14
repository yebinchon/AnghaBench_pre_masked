
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_dev_priv {int flags; int real_dev_addr; struct net_device* real_dev; } ;
struct net_device {int flags; int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*,struct net_device*) ;
 struct vlan_dev_priv* FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_8)
{
 struct vlan_dev_priv *VAR_9 = FUNC_10(VAR_8);
 struct net_device *VAR_10 = VAR_9->real_dev;
 int VAR_11;

 if (!(VAR_10->flags & VAR_3) &&
     !(VAR_9->flags & VAR_6))
  return -VAR_0;

 if (!FUNC_5(VAR_8->dev_addr, VAR_10->dev_addr) &&
     !FUNC_9(VAR_8, VAR_10)) {
  VAR_11 = FUNC_2(VAR_10, VAR_8->dev_addr);
  if (VAR_11 < 0)
   goto out;
 }

 if (VAR_8->flags & VAR_1) {
  VAR_11 = FUNC_0(VAR_10, 1);
  if (VAR_11 < 0)
   goto del_unicast;
 }
 if (VAR_8->flags & VAR_2) {
  VAR_11 = FUNC_1(VAR_10, 1);
  if (VAR_11 < 0)
   goto clear_allmulti;
 }

 FUNC_4(VAR_9->real_dev_addr, VAR_10->dev_addr);

 if (VAR_9->flags & VAR_5)
  FUNC_11(VAR_8);

 if (VAR_9->flags & VAR_7)
  FUNC_12(VAR_8);

 if (FUNC_7(VAR_10) &&
     !(VAR_9->flags & VAR_4))
  FUNC_8(VAR_8);
 return 0;

clear_allmulti:
 if (VAR_8->flags & VAR_1)
  FUNC_0(VAR_10, -1);
del_unicast:
 if (!FUNC_5(VAR_8->dev_addr, VAR_10->dev_addr))
  FUNC_3(VAR_10, VAR_8->dev_addr);
out:
 FUNC_6(VAR_8);
 return VAR_11;
}
