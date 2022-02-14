
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct dsa_switch {TYPE_1__* ports; int dev; } ;
struct bridge_vlan_info {int flags; } ;
struct TYPE_2__ {struct net_device* slave; } ;


 int FUNC_0 (struct net_device*,int ,struct bridge_vlan_info*) ;
 int FUNC_1 (struct net_device*,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct dsa_switch*,int) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dsa_switch *VAR_0, int VAR_1)
{
 struct bridge_vlan_info VAR_2;
 struct net_device *VAR_3;
 u16 VAR_4;
 int VAR_5;

 if (!FUNC_3(VAR_0, VAR_1))
  return 0;

 VAR_3 = VAR_0->ports[VAR_1].slave;

 VAR_5 = FUNC_1(VAR_3, &VAR_4);
 if (VAR_5 < 0)



  return 0;

 VAR_5 = FUNC_0(VAR_3, VAR_4, &VAR_2);
 if (VAR_5 < 0) {
  FUNC_2(VAR_0->dev, "Couldn't determine PVID attributes\n");
  return VAR_5;
 }

 return FUNC_4(&VAR_0->ports[VAR_1], VAR_4, VAR_2.flags);
}
