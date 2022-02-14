
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ i; } ;
struct switch_val {int port_vlan; TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int id; int ofs; scalar_t__ max; } ;
struct rtl_phyregs {int dummy; } ;
struct TYPE_5__ {int reg; scalar_t__ page; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (struct switch_dev*,int,struct rtl_phyregs*) ;
 int FUNC_2 (struct switch_dev*,int,struct rtl_phyregs*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_3 (struct switch_dev*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_4(struct switch_dev *VAR_2, const struct switch_attr *VAR_3, struct switch_val *VAR_4)
{
 int VAR_5 = VAR_3->id + (VAR_4->port_vlan * VAR_3->ofs);
 struct rtl_phyregs VAR_6;

 if (VAR_3->id >= FUNC_0(VAR_1))
  return -VAR_0;

 if ((VAR_3->max > 0) && (VAR_4->value.i > VAR_3->max))
  return -VAR_0;



 if ((VAR_4->port_vlan > 3) &&
  (VAR_1[VAR_5].reg == 22) &&
  (VAR_1[VAR_5].page == 0)) {

  FUNC_2(VAR_2, VAR_4->port_vlan, &VAR_6);
  FUNC_3(VAR_2, VAR_5, VAR_4->value.i);
  FUNC_1(VAR_2, VAR_4->port_vlan, &VAR_6);
 } else {
  FUNC_3(VAR_2, VAR_5, VAR_4->value.i);
 }

 return 0;
}
