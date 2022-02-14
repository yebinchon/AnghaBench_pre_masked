
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_4__ {struct kobject kobj; } ;
struct net_device {int name; TYPE_1__ dev; } ;
struct TYPE_5__ {int name; } ;
struct batadv_attribute {TYPE_2__ attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct batadv_attribute** VAR_2 ;
 int FUNC_0 (struct net_device*,char*,int ,int ,...) ;
 struct kobject* FUNC_1 (int ,struct kobject*) ;
 int FUNC_2 (struct kobject*,TYPE_2__*) ;
 int FUNC_3 (struct kobject*,TYPE_2__*) ;

int FUNC_4(struct kobject **VAR_3, struct net_device *VAR_4)
{
 struct kobject *VAR_5 = &VAR_4->dev.kobj;
 struct batadv_attribute **VAR_6;
 int VAR_7;

 *VAR_3 = FUNC_1(VAR_0,
          VAR_5);

 if (!*VAR_3) {
  FUNC_0(VAR_4, "Can't add sysfs directory: %s/%s\n", VAR_4->name,
      VAR_0);
  goto out;
 }

 for (VAR_6 = VAR_2; *VAR_6; ++VAR_6) {
  VAR_7 = FUNC_2(*VAR_3, &((*VAR_6)->attr));
  if (VAR_7) {
   FUNC_0(VAR_4, "Can't add sysfs file: %s/%s/%s\n",
       VAR_4->name, VAR_0,
       ((*VAR_6)->attr).name);
   goto rem_attr;
  }
 }

 return 0;

rem_attr:
 for (VAR_6 = VAR_2; *VAR_6; ++VAR_6)
  FUNC_3(*VAR_3, &((*VAR_6)->attr));
out:
 return -VAR_1;
}
