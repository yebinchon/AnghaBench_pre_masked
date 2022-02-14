
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int i; } ;
struct switch_val {int port_vlan; TYPE_1__ value; } ;
struct switch_dev {int ports; } ;
struct switch_attr {int dummy; } ;
struct mii_bus {int dummy; } ;
struct ar7240sw {struct mii_bus* mii_bus; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct mii_bus*,int ) ;
 struct ar7240sw* FUNC_2 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_3(struct switch_dev *VAR_2, const struct switch_attr *VAR_3,
        struct switch_val *VAR_4)
{
 struct ar7240sw *VAR_5 = FUNC_2(VAR_2);
 struct mii_bus *VAR_6 = VAR_5->mii_bus;

 u32 VAR_7;

 int VAR_8 = VAR_4->port_vlan;

 if (VAR_8 >= VAR_2->ports)
  return -VAR_1;

 VAR_7 = FUNC_1(VAR_6, FUNC_0(VAR_8));

 if ((VAR_7 & VAR_0) == VAR_0)
  VAR_4->value.i = 1;
 else
  VAR_4->value.i = 0;

 return 0;
}
