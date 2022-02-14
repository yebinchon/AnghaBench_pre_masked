
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_4__ {struct kobject kobj; } ;
struct net_device {int name; TYPE_1__ dev; } ;
struct batadv_priv {int * mesh_obj; } ;
struct TYPE_5__ {int name; } ;
struct batadv_attribute {TYPE_2__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,char*,int ,int ,...) ;
 struct batadv_attribute** VAR_3 ;
 int * FUNC_1 (int ,struct kobject*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 struct batadv_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *,TYPE_2__*) ;
 int FUNC_7 (int *,TYPE_2__*) ;

int FUNC_8(struct net_device *VAR_4)
{
 struct kobject *VAR_5 = &VAR_4->dev.kobj;
 struct batadv_priv *VAR_6 = FUNC_5(VAR_4);
 struct batadv_attribute **VAR_7;
 int VAR_8;

 VAR_6->mesh_obj = FUNC_1(VAR_0,
          VAR_5);
 if (!VAR_6->mesh_obj) {
  FUNC_0(VAR_4, "Can't add sysfs directory: %s/%s\n", VAR_4->name,
      VAR_0);
  goto out;
 }

 for (VAR_7 = VAR_3; *VAR_7; ++VAR_7) {
  VAR_8 = FUNC_6(VAR_6->mesh_obj,
     &((*VAR_7)->attr));
  if (VAR_8) {
   FUNC_0(VAR_4, "Can't add sysfs file: %s/%s/%s\n",
       VAR_4->name, VAR_0,
       ((*VAR_7)->attr).name);
   goto rem_attr;
  }
 }

 return 0;

rem_attr:
 for (VAR_7 = VAR_3; *VAR_7; ++VAR_7)
  FUNC_7(VAR_6->mesh_obj, &((*VAR_7)->attr));

 FUNC_4(VAR_6->mesh_obj, VAR_2);
 FUNC_2(VAR_6->mesh_obj);
 FUNC_3(VAR_6->mesh_obj);
 VAR_6->mesh_obj = ((void*)0);
out:
 return -VAR_1;
}
