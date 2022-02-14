
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct switch_port* ports; } ;
struct switch_val {size_t port_vlan; scalar_t__ len; TYPE_1__ value; } ;
struct switch_port {int id; int flags; } ;
struct switch_dev {int ports; } ;
struct ar8xxx_priv {int* vlan_table; int vlan_tagged; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ar8xxx_priv* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_3, struct switch_val *VAR_4)
{
 struct ar8xxx_priv *VAR_5 = FUNC_0(VAR_3);
 u8 VAR_6;
 int VAR_7;

 if (VAR_4->port_vlan >= VAR_0)
  return -VAR_1;

 VAR_6 = VAR_5->vlan_table[VAR_4->port_vlan];
 VAR_4->len = 0;
 for (VAR_7 = 0; VAR_7 < VAR_3->ports; VAR_7++) {
  struct switch_port *VAR_8;

  if (!(VAR_6 & (1 << VAR_7)))
   continue;

  VAR_8 = &VAR_4->value.ports[VAR_4->len++];
  VAR_8->id = VAR_7;
  if (VAR_5->vlan_tagged & (1 << VAR_7))
   VAR_8->flags = (1 << VAR_2);
  else
   VAR_8->flags = 0;
 }
 return 0;
}
