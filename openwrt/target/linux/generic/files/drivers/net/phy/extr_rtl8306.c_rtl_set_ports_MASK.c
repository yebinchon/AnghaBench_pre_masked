
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct switch_port* ports; } ;
struct switch_val {int len; int port_vlan; TYPE_1__ value; } ;
struct switch_port {int id; int flags; } ;
struct switch_dev {int cpu_port; int vlans; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_2 (struct switch_dev*,int ) ;
 int FUNC_3 (struct switch_dev*,int ,int) ;

__attribute__((used)) static int
FUNC_4(struct switch_dev *VAR_7, struct switch_val *VAR_8)
{
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;
 int VAR_11;

 for(VAR_11 = 0; VAR_11 < VAR_8->len; VAR_11++)
 {
  struct switch_port *VAR_12 = &VAR_8->value.ports[VAR_11];
  bool VAR_13 = 0;

  VAR_9 |= (1 << VAR_12->id);

  if (VAR_12->id == VAR_7->cpu_port)
   continue;

  if ((VAR_11 == VAR_7->cpu_port) ||
   (VAR_12->flags & (1 << VAR_4)))
   VAR_13 = 1;


  if (!VAR_13)
   FUNC_3(VAR_7, FUNC_0(VAR_12->id, VAR_2), VAR_8->port_vlan);

  FUNC_3(VAR_7, FUNC_0(VAR_12->id, VAR_0), (VAR_13 ? 0 : 1));
  FUNC_3(VAR_7, FUNC_0(VAR_12->id, VAR_6), (VAR_13 ? 0 : 1));
  FUNC_3(VAR_7, FUNC_0(VAR_12->id, VAR_5), (VAR_13 ? 2 : 1));
 }

 VAR_10 = FUNC_2(VAR_7, FUNC_1(VAR_8->port_vlan, VAR_1));
 FUNC_3(VAR_7, FUNC_1(VAR_8->port_vlan, VAR_1), VAR_9);


 VAR_10 &= ~VAR_9;
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  if (!(VAR_10 & (1 << VAR_11)))
   continue;

  if (VAR_11 == VAR_7->cpu_port)
   continue;

  if (FUNC_2(VAR_7, FUNC_0(VAR_11, VAR_2)) == VAR_8->port_vlan)
   FUNC_3(VAR_7, FUNC_0(VAR_11, VAR_2), VAR_7->vlans - 1);
 }

 return 0;
}
