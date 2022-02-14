
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_4__ {int sel_class; } ;
struct batadv_priv {TYPE_1__ gw; TYPE_3__* algo_ops; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_5__ {int (* show_sel_class ) (struct batadv_priv*,char*) ;int is_eligible; int get_best_gw_node; } ;
struct TYPE_6__ {TYPE_2__ gw; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct batadv_priv* FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct attribute*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (struct batadv_priv*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_1,
     struct attribute *VAR_2, char *VAR_3)
{
 struct batadv_priv *VAR_4 = FUNC_1(VAR_1);

 FUNC_2(VAR_2);




 if (!VAR_4->algo_ops->gw.get_best_gw_node ||
     !VAR_4->algo_ops->gw.is_eligible)
  return -VAR_0;

 if (VAR_4->algo_ops->gw.show_sel_class)
  return VAR_4->algo_ops->gw.show_sel_class(VAR_4, VAR_3);

 return FUNC_3(VAR_3, "%i\n", FUNC_0(&VAR_4->gw.sel_class));
}
