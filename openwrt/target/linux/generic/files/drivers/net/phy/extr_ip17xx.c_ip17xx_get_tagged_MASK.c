
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {int port_vlan; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ip17xx_state {int add_tag; int remove_tag; } ;


 struct ip17xx_state* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_1(struct switch_dev *VAR_0, const struct switch_attr *VAR_1, struct switch_val *VAR_2)
{
 struct ip17xx_state *VAR_3 = FUNC_0(VAR_0);

 if (VAR_3->add_tag & (1<<VAR_2->port_vlan)) {
  if (VAR_3->remove_tag & (1<<VAR_2->port_vlan))
   VAR_2->value.i = 3;
  else
   VAR_2->value.i = 1;
 } else {
  if (VAR_3->remove_tag & (1<<VAR_2->port_vlan))
   VAR_2->value.i = 0;
  else
   VAR_2->value.i = 2;
 }
 return 0;
}
