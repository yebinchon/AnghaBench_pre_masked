
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int dummy; } ;
struct adm6996_priv {int vlan_enabled; scalar_t__ model; int reg_mutex; int enable_vlan; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct adm6996_priv*) ;
 int FUNC_1 (struct adm6996_priv*) ;
 int FUNC_2 (struct adm6996_priv*) ;
 int FUNC_3 (struct adm6996_priv*) ;
 int FUNC_4 (struct adm6996_priv*) ;
 int FUNC_5 (struct adm6996_priv*) ;
 int FUNC_6 (struct adm6996_priv*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 struct adm6996_priv* FUNC_10 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_11(struct switch_dev *VAR_1)
{
 struct adm6996_priv *VAR_2 = FUNC_10(VAR_1);

 FUNC_9("hw_apply\n");

 FUNC_7(&VAR_2->reg_mutex);

 if (!VAR_2->enable_vlan) {
  if (VAR_2->vlan_enabled) {
   if (VAR_2->model == VAR_0)
    FUNC_4(VAR_2);
   else
    FUNC_3(VAR_2);
   VAR_2->vlan_enabled = 0;
  }
  goto out;
 }

 if (!VAR_2->vlan_enabled) {
  if (VAR_2->model == VAR_0)
   FUNC_6(VAR_2);
  else
   FUNC_5(VAR_2);
  VAR_2->vlan_enabled = 1;
 }

 FUNC_0(VAR_2);
 if (VAR_2->model == VAR_0)
  FUNC_2(VAR_2);
 else
  FUNC_1(VAR_2);

out:
 FUNC_8(&VAR_2->reg_mutex);

 return 0;
}
