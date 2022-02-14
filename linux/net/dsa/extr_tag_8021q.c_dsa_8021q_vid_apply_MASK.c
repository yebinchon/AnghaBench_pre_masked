
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dsa_switch {struct dsa_port* ports; } ;
struct dsa_port {struct dsa_port* cpu_dp; int slave; } ;
struct bridge_vlan_info {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct bridge_vlan_info*) ;
 int FUNC_1 (struct dsa_switch*,int) ;
 int FUNC_2 (struct dsa_port*,int ,int ) ;
 int FUNC_3 (struct dsa_port*,int ) ;

__attribute__((used)) static int FUNC_4(struct dsa_switch *VAR_1, int VAR_2, u16 VAR_3,
          u16 VAR_4, bool VAR_5)
{
 struct dsa_port *VAR_6 = &VAR_1->ports[VAR_2];
 struct bridge_vlan_info VAR_7;
 int VAR_8;

 if (VAR_5)
  return FUNC_2(VAR_6, VAR_3, VAR_4);

 VAR_8 = FUNC_3(VAR_6, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;






 if (!FUNC_1(VAR_1, VAR_2))
  return 0;

 VAR_8 = FUNC_0(VAR_6->slave, VAR_3, &VAR_7);



 if (VAR_8 < 0)
  return 0;


 VAR_8 = FUNC_2(VAR_6, VAR_3, VAR_7.flags);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_7.flags &= ~VAR_0;

 return FUNC_2(VAR_6->cpu_dp, VAR_3, VAR_7.flags);
}
