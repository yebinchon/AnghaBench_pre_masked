
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct switch_port* ports; } ;
struct switch_val {int len; int port_vlan; TYPE_2__ value; } ;
struct switch_port {int flags; int id; } ;
struct switch_dev {int dummy; } ;
struct rtl8366_smi {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* is_vlan_valid ) (struct rtl8366_smi*,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rtl8366_smi*,int ,int*) ;
 int FUNC_2 (struct rtl8366_smi*,int ,int ) ;
 int FUNC_3 (struct rtl8366_smi*,int ,int,int,int ) ;
 int FUNC_4 (struct rtl8366_smi*,int ) ;
 struct rtl8366_smi* FUNC_5 (struct switch_dev*) ;

int FUNC_6(struct switch_dev *VAR_2, struct switch_val *VAR_3)
{
 struct rtl8366_smi *VAR_4 = FUNC_5(VAR_2);
 struct switch_port *VAR_5;
 u32 VAR_6 = 0;
 u32 VAR_7 = 0;
 int VAR_8;
 int VAR_9;

 if (!VAR_4->ops->is_vlan_valid(VAR_4, VAR_3->port_vlan))
  return -VAR_0;

 VAR_5 = &VAR_3->value.ports[0];
 for (VAR_9 = 0; VAR_9 < VAR_3->len; VAR_9++, VAR_5++) {
  int VAR_10 = 0;
  VAR_6 |= FUNC_0(VAR_5->id);

  if (!(VAR_5->flags & FUNC_0(VAR_1)))
   VAR_7 |= FUNC_0(VAR_5->id);





  VAR_8 = FUNC_1(VAR_4, VAR_5->id, &VAR_10);
  if (VAR_8 < 0)
   return VAR_8;
  if (VAR_10 == 0) {
   VAR_8 = FUNC_2(VAR_4, VAR_5->id, VAR_3->port_vlan);
   if (VAR_8 < 0)
    return VAR_8;
  }
 }

 return FUNC_3(VAR_4, VAR_3->port_vlan, VAR_6, VAR_7, 0);
}
