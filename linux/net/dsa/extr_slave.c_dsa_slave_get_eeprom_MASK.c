
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {int dummy; } ;
struct ethtool_eeprom {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {struct dsa_switch* ds; } ;
struct TYPE_2__ {int (* get_eeprom ) (struct dsa_switch*,struct ethtool_eeprom*,int *) ;} ;


 int VAR_0 ;
 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dsa_switch*,struct ethtool_eeprom*,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
    struct ethtool_eeprom *VAR_2, u8 *VAR_3)
{
 struct dsa_port *VAR_4 = FUNC_0(VAR_1);
 struct dsa_switch *VAR_5 = VAR_4->ds;

 if (VAR_5->ops->get_eeprom)
  return VAR_5->ops->get_eeprom(VAR_5, VAR_2, VAR_3);

 return -VAR_0;
}
