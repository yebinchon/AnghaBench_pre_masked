
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int i; } ;
struct switch_val {int port_vlan; TYPE_3__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ip17xx_state {TYPE_2__* regs; TYPE_1__* vlans; } ;
struct TYPE_5__ {int (* update_state ) (struct ip17xx_state*) ;} ;
struct TYPE_4__ {int tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ip17xx_state* FUNC_0 (struct switch_dev*) ;
 int FUNC_1 (struct ip17xx_state*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_2, const struct switch_attr *VAR_3, struct switch_val *VAR_4)
{
 struct ip17xx_state *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = VAR_4->port_vlan;
 int VAR_7 = VAR_4->value.i;

 if (VAR_6 < 0 || VAR_6 >= VAR_1)
  return -VAR_0;

 if (VAR_7 < 0 || VAR_7 > 4095)
  return -VAR_0;

 VAR_5->vlans[VAR_6].tag = VAR_7;
 return VAR_5->regs->update_state(VAR_5);
}
