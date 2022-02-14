
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct dsa_port {scalar_t__ bridge_dev; } ;
struct bridge_vlan_info {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,struct bridge_vlan_info*) ;
 int FUNC_2 (struct dsa_port*,int ) ;
 struct dsa_port* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, __be16 VAR_2,
          u16 VAR_3)
{
 struct dsa_port *VAR_4 = FUNC_3(VAR_1);
 struct bridge_vlan_info VAR_5;
 int VAR_6;




 if (VAR_4->bridge_dev) {
  if (!FUNC_0(VAR_4->bridge_dev))
   return 0;





  VAR_6 = FUNC_1(VAR_4->bridge_dev, VAR_3, &VAR_5);
  if (VAR_6 == 0)
   return -VAR_0;
 }




 return FUNC_2(VAR_4, VAR_3);
}
