
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct batadv_softif_vlan {int kobj; } ;
struct batadv_priv {TYPE_1__* soft_iface; } ;
typedef scalar_t__ __be16 ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct batadv_priv*,unsigned short) ;
 struct batadv_softif_vlan* FUNC_1 (struct batadv_priv*,unsigned short) ;
 int FUNC_2 (struct batadv_softif_vlan*) ;
 int FUNC_3 (TYPE_1__*,struct batadv_softif_vlan*) ;
 int FUNC_4 (TYPE_1__*,int ,unsigned short,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 struct batadv_priv* FUNC_6 (struct net_device*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_5, __be16 VAR_6,
        unsigned short VAR_7)
{
 struct batadv_priv *VAR_8 = FUNC_6(VAR_5);
 struct batadv_softif_vlan *VAR_9;
 int VAR_10;




 if (VAR_6 != FUNC_5(VAR_4))
  return -VAR_3;

 VAR_7 |= VAR_2;







 VAR_9 = FUNC_1(VAR_8, VAR_7);
 if (!VAR_9)
  return FUNC_0(VAR_8, VAR_7);




 if (!VAR_9->kobj) {
  VAR_10 = FUNC_3(VAR_8->soft_iface, VAR_9);
  if (VAR_10) {
   FUNC_2(VAR_9);
   return VAR_10;
  }
 }





 FUNC_4(VAR_8->soft_iface,
       VAR_8->soft_iface->dev_addr, VAR_7,
       VAR_1, VAR_0);

 return 0;
}
