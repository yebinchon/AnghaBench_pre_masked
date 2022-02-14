
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_dev_priv {struct net_device* real_dev; } ;
struct sk_buff {int dummy; } ;
struct net_device {void* dev_addr; } ;


 int FUNC_0 (struct sk_buff*,struct net_device*,unsigned short,void const*,void const*,unsigned int) ;
 struct vlan_dev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct net_device *VAR_1,
         unsigned short VAR_2,
         const void *VAR_3, const void *VAR_4,
         unsigned int VAR_5)
{
 struct vlan_dev_priv *VAR_6 = FUNC_1(VAR_1);
 struct net_device *VAR_7 = VAR_6->real_dev;

 if (VAR_4 == ((void*)0))
  VAR_4 = VAR_1->dev_addr;

 return FUNC_0(VAR_0, VAR_7, VAR_2, VAR_3, VAR_4, VAR_5);
}
