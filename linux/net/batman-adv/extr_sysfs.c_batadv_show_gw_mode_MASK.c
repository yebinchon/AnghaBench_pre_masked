
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_6__ {int mode; } ;
struct batadv_priv {TYPE_3__ gw; TYPE_2__* algo_ops; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int is_eligible; int get_best_gw_node; } ;
struct TYPE_5__ {TYPE_1__ gw; } ;



 char* VAR_0 ;
 char* VAR_1 ;

 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 struct batadv_priv* FUNC_1 (struct kobject*) ;
 int FUNC_2 (struct attribute*) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_4(struct kobject *VAR_4, struct attribute *VAR_5,
       char *VAR_6)
{
 struct batadv_priv *VAR_7 = FUNC_1(VAR_4);
 int VAR_8;

 FUNC_2(VAR_5);




 if (!VAR_7->algo_ops->gw.get_best_gw_node ||
     !VAR_7->algo_ops->gw.is_eligible)
  return -VAR_3;

 switch (FUNC_0(&VAR_7->gw.mode)) {
 case 129:
  VAR_8 = FUNC_3(VAR_6, "%s\n",
     VAR_0);
  break;
 case 128:
  VAR_8 = FUNC_3(VAR_6, "%s\n",
     VAR_2);
  break;
 default:
  VAR_8 = FUNC_3(VAR_6, "%s\n",
     VAR_1);
  break;
 }

 return VAR_8;
}
