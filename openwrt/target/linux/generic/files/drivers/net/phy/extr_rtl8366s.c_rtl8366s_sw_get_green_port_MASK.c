
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; int port_vlan; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl8366_smi*,int ,int ,int ,int*) ;
 struct rtl8366_smi* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_4,
          const struct switch_attr *VAR_5,
          struct switch_val *VAR_6)
{
 struct rtl8366_smi *VAR_7 = FUNC_1(VAR_4);
 int VAR_8;
 u32 VAR_9;

 if (VAR_6->port_vlan >= VAR_1)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7, VAR_6->port_vlan, 0, VAR_2, &VAR_9);
 if (VAR_8)
  return VAR_8;

 VAR_6->value.i = ((VAR_9 & VAR_3) != 0) ? 1 : 0;

 return 0;
}
