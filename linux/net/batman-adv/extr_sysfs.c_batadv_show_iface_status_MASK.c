
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct kobject {int dummy; } ;
struct batadv_hard_iface {int if_status; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;







 struct batadv_hard_iface* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 struct net_device* FUNC_2 (struct kobject*) ;
 int FUNC_3 (struct attribute*) ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_0,
     struct attribute *VAR_1, char *VAR_2)
{
 struct net_device *VAR_3 = FUNC_2(VAR_0);
 struct batadv_hard_iface *VAR_4;
 ssize_t VAR_5;

 FUNC_3(VAR_1);

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return 0;

 switch (VAR_4->if_status) {
 case 128:
  VAR_5 = FUNC_4(VAR_2, "disabling\n");
  break;
 case 131:
  VAR_5 = FUNC_4(VAR_2, "inactive\n");
  break;
 case 132:
  VAR_5 = FUNC_4(VAR_2, "active\n");
  break;
 case 129:
  VAR_5 = FUNC_4(VAR_2, "enabling\n");
  break;
 case 130:
 default:
  VAR_5 = FUNC_4(VAR_2, "not in use\n");
  break;
 }

 FUNC_1(VAR_4);

 return VAR_5;
}
