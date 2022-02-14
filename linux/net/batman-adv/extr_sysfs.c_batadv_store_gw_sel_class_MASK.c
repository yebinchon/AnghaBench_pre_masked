
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_6__ {int sel_class; } ;
struct batadv_priv {int soft_iface; TYPE_3__ gw; TYPE_2__* algo_ops; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int (* store_sel_class ) (struct batadv_priv*,char*,size_t) ;int is_eligible; int get_best_gw_node; } ;
struct TYPE_5__ {TYPE_1__ gw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,size_t,int,int ,int ,struct attribute*,int *,int ,int *) ;
 struct batadv_priv* FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct batadv_priv*) ;
 int VAR_2 ;
 int FUNC_3 (struct attribute*) ;
 int FUNC_4 (struct batadv_priv*,char*,size_t) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_3,
      struct attribute *VAR_4, char *VAR_5,
      size_t VAR_6)
{
 struct batadv_priv *VAR_7 = FUNC_1(VAR_3);
 ssize_t VAR_8;

 FUNC_3(VAR_4);




 if (!VAR_7->algo_ops->gw.get_best_gw_node ||
     !VAR_7->algo_ops->gw.is_eligible)
  return -VAR_1;

 if (VAR_5[VAR_6 - 1] == '\n')
  VAR_5[VAR_6 - 1] = '\0';

 if (VAR_7->algo_ops->gw.store_sel_class)
  return VAR_7->algo_ops->gw.store_sel_class(VAR_7, VAR_5,
             VAR_6);

 VAR_8 = FUNC_0(VAR_5, VAR_6, 1, VAR_0,
       VAR_2, VAR_4,
       &VAR_7->gw.sel_class,
       VAR_7->soft_iface, ((void*)0));

 FUNC_2(VAR_7);

 return VAR_8;
}
