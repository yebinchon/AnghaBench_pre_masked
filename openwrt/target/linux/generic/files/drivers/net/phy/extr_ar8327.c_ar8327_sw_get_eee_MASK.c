
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {int port_vlan; TYPE_1__ value; } ;
struct switch_dev {int ports; } ;
struct switch_attr {int dummy; } ;
struct ar8xxx_priv {struct ar8327_data* chip_data; } ;
struct ar8327_data {int * eee; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ar8xxx_priv* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_2,
    const struct switch_attr *VAR_3,
    struct switch_val *VAR_4)
{
 struct ar8xxx_priv *VAR_5 = FUNC_0(VAR_2);
 const struct ar8327_data *VAR_6 = VAR_5->chip_data;
 int VAR_7 = VAR_4->port_vlan;
 int VAR_8;

 if (VAR_7 >= VAR_2->ports)
  return -VAR_0;
 if (VAR_7 == 0 || VAR_7 == 6)
  return -VAR_1;

 VAR_8 = VAR_7 - 1;

 VAR_4->value.i = VAR_6->eee[VAR_8];

 return 0;
}
