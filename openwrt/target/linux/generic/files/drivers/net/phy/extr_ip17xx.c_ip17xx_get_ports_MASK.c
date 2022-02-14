
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ports; } ;
struct switch_val {size_t port_vlan; int len; TYPE_3__ value; } ;
struct switch_dev {size_t vlans; } ;
struct ip17xx_state {int add_tag; TYPE_1__* vlans; } ;
struct TYPE_5__ {int id; int flags; } ;
struct TYPE_4__ {unsigned int ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ip17xx_state* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_1(struct switch_dev *VAR_3, struct switch_val *VAR_4)
{
 struct ip17xx_state *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;
 int VAR_7;
 unsigned int VAR_8;

 if (VAR_4->port_vlan >= VAR_3->vlans || VAR_4->port_vlan < 0)
  return -VAR_0;

 VAR_8 = VAR_5->vlans[VAR_4->port_vlan].ports;
 VAR_6 = 0;
 VAR_7 = 0;
 while (VAR_6 < VAR_1) {
  if (VAR_8&1) {
   int VAR_9 = ((VAR_5->add_tag >> VAR_6) & 1);
   VAR_4->value.ports[VAR_7].id = VAR_6;
   VAR_4->value.ports[VAR_7].flags = (VAR_9 << VAR_2);
   VAR_7++;
  }
  VAR_6++;
  VAR_8 >>= 1;
 }
 VAR_4->len = VAR_7;

 return 0;
}
