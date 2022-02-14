
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct kobject {int dummy; } ;
struct TYPE_6__ {int mode; } ;
struct batadv_priv {TYPE_3__ gw; TYPE_2__* algo_ops; } ;
struct attribute {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_4__ {int is_eligible; int get_best_gw_node; } ;
struct TYPE_5__ {TYPE_1__ gw; } ;



 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;

 char* VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (struct batadv_priv*) ;
 int FUNC_3 (struct batadv_priv*) ;
 int FUNC_4 (struct batadv_priv*) ;
 int FUNC_5 (struct net_device*,char*,char*,...) ;
 struct net_device* FUNC_6 (struct kobject*) ;
 int FUNC_7 (struct batadv_priv*) ;
 int FUNC_8 (struct attribute*) ;
 struct batadv_priv* FUNC_9 (struct net_device*) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_12(struct kobject *VAR_5,
        struct attribute *VAR_6, char *VAR_7,
        size_t VAR_8)
{
 struct net_device *VAR_9 = FUNC_6(VAR_5);
 struct batadv_priv *VAR_10 = FUNC_9(VAR_9);
 char *VAR_11;
 int VAR_12 = -1;

 FUNC_8(VAR_6);




 if (!VAR_10->algo_ops->gw.get_best_gw_node ||
     !VAR_10->algo_ops->gw.is_eligible)
  return -VAR_4;

 if (VAR_7[VAR_8 - 1] == '\n')
  VAR_7[VAR_8 - 1] = '\0';

 if (FUNC_11(VAR_7, VAR_2,
      FUNC_10(VAR_2)) == 0)
  VAR_12 = VAR_1;

 if (FUNC_11(VAR_7, VAR_0,
      FUNC_10(VAR_0)) == 0)
  VAR_12 = 129;

 if (FUNC_11(VAR_7, VAR_3,
      FUNC_10(VAR_3)) == 0)
  VAR_12 = 128;

 if (VAR_12 < 0) {
  FUNC_5(VAR_9,
       "Invalid parameter for 'gw mode' setting received: %s\n",
       VAR_7);
  return -VAR_4;
 }

 if (FUNC_0(&VAR_10->gw.mode) == VAR_12)
  return VAR_8;

 switch (FUNC_0(&VAR_10->gw.mode)) {
 case 129:
  VAR_11 = VAR_0;
  break;
 case 128:
  VAR_11 = VAR_3;
  break;
 default:
  VAR_11 = VAR_2;
  break;
 }

 FUNC_5(VAR_9, "Changing gw mode from: %s to: %s\n",
      VAR_11, VAR_7);
 FUNC_3(VAR_10);



 FUNC_2(VAR_10);
 FUNC_1(&VAR_10->gw.mode, (unsigned int)VAR_12);
 FUNC_4(VAR_10);

 FUNC_7(VAR_10);

 return VAR_8;
}
