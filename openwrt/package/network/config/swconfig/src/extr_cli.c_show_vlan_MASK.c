
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_val {int port_vlan; int len; } ;
struct switch_dev {int vlan_ops; } ;
struct switch_attr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct switch_dev*,int ,struct switch_val*) ;
 scalar_t__ FUNC_2 (struct switch_dev*,struct switch_attr*,struct switch_val*) ;
 struct switch_attr* FUNC_3 (struct switch_dev*,int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct switch_dev *VAR_1, int VAR_2, bool VAR_3)
{
 struct switch_val VAR_4;
 struct switch_attr *VAR_5;

 VAR_4.port_vlan = VAR_2;

 if (VAR_3) {
  VAR_5 = FUNC_3(VAR_1, VAR_0, "ports");
  if (FUNC_2(VAR_1, VAR_5, &VAR_4) < 0)
   return;

  if (!VAR_4.len)
   return;
 }

 FUNC_0("VLAN %d:\n", VAR_2);
 FUNC_1(VAR_1, VAR_1->vlan_ops, &VAR_4);
}
