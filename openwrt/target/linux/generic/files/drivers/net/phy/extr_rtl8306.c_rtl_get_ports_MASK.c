
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct switch_port* ports; } ;
struct switch_val {size_t len; TYPE_1__ value; int port_vlan; } ;
struct switch_port {unsigned int id; int flags; } ;
struct switch_dev {unsigned int cpu_port; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct switch_dev*,int ) ;

__attribute__((used)) static int
FUNC_3(struct switch_dev *VAR_4, struct switch_val *VAR_5)
{
 unsigned int VAR_6, VAR_7;

 VAR_7 = FUNC_2(VAR_4, FUNC_1(VAR_5->port_vlan, VAR_0));
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct switch_port *VAR_8;

  if (!(VAR_7 & (1 << VAR_6)))
   continue;

  VAR_8 = &VAR_5->value.ports[VAR_5->len];
  VAR_8->id = VAR_6;
  if (FUNC_2(VAR_4, FUNC_0(VAR_6, VAR_3)) == 2 || VAR_6 == VAR_4->cpu_port)
   VAR_8->flags = (1 << VAR_2);
  VAR_5->len++;
 }

 return 0;
}
