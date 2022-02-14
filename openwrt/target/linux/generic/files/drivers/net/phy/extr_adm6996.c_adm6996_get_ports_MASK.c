
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct switch_port* ports; } ;
struct switch_val {size_t port_vlan; scalar_t__ len; TYPE_1__ value; } ;
struct switch_port {int id; int flags; } ;
struct switch_dev {int dummy; } ;
struct adm6996_priv {int* vlan_table; int* vlan_tagged; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t) ;
 struct adm6996_priv* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_2(struct switch_dev *VAR_2, struct switch_val *VAR_3)
{
 struct adm6996_priv *VAR_4 = FUNC_1(VAR_2);
 u8 VAR_5 = VAR_4->vlan_table[VAR_3->port_vlan];
 u8 VAR_6 = VAR_4->vlan_tagged[VAR_3->port_vlan];
 int VAR_7;

 FUNC_0("get_ports port_vlan %d\n", VAR_3->port_vlan);

 VAR_3->len = 0;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct switch_port *VAR_8;

  if (!(VAR_5 & (1 << VAR_7)))
   continue;

  VAR_8 = &VAR_3->value.ports[VAR_3->len++];
  VAR_8->id = VAR_7;
  if (VAR_6 & (1 << VAR_7))
   VAR_8->flags = (1 << VAR_1);
  else
   VAR_8->flags = 0;
 }

 return 0;
}
