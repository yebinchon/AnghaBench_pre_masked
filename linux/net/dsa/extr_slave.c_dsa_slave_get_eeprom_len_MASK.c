
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct dsa_switch {TYPE_2__* ops; TYPE_1__* cd; } ;
struct dsa_port {struct dsa_switch* ds; } ;
struct TYPE_4__ {int (* get_eeprom_len ) (struct dsa_switch*) ;} ;
struct TYPE_3__ {int eeprom_len; } ;


 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dsa_switch*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0)
{
 struct dsa_port *VAR_1 = FUNC_0(VAR_0);
 struct dsa_switch *VAR_2 = VAR_1->ds;

 if (VAR_2->cd && VAR_2->cd->eeprom_len)
  return VAR_2->cd->eeprom_len;

 if (VAR_2->ops->get_eeprom_len)
  return VAR_2->ops->get_eeprom_len(VAR_2);

 return 0;
}
