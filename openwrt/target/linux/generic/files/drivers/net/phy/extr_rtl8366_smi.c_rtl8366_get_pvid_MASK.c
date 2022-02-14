
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtl8366_vlan_mc {int vid; } ;
struct rtl8366_smi {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_mc_index ) (struct rtl8366_smi*,int,int*) ;int (* get_vlan_mc ) (struct rtl8366_smi*,int,struct rtl8366_vlan_mc*) ;} ;


 int FUNC_0 (struct rtl8366_smi*,int,int*) ;
 int FUNC_1 (struct rtl8366_smi*,int,struct rtl8366_vlan_mc*) ;

__attribute__((used)) static int FUNC_2(struct rtl8366_smi *VAR_0, int VAR_1, int *VAR_2)
{
 struct rtl8366_vlan_mc VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_0->ops->get_mc_index(VAR_0, VAR_1, &VAR_5);
 if (VAR_4)
  return VAR_4;

 VAR_4 = VAR_0->ops->get_vlan_mc(VAR_0, VAR_5, &VAR_3);
 if (VAR_4)
  return VAR_4;

 *VAR_2 = VAR_3.vid;
 return 0;
}
