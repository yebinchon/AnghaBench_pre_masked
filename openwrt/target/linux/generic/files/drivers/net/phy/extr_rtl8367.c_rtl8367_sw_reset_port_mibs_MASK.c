
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_val {int port_vlan; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct rtl8366_smi {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct rtl8366_smi*,int ,int ,int ) ;
 struct rtl8366_smi* FUNC_3 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_4(struct switch_dev *VAR_2,
           const struct switch_attr *VAR_3,
           struct switch_val *VAR_4)
{
 struct rtl8366_smi *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 VAR_6 = VAR_4->port_vlan;
 if (VAR_6 >= VAR_1)
  return -VAR_0;

 return FUNC_2(VAR_5, FUNC_1(VAR_6 / 8), 0,
    FUNC_0(VAR_6 % 8));
}
