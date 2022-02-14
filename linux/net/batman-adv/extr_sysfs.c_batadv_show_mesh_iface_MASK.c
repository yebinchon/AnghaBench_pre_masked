
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct kobject {int dummy; } ;
struct batadv_hard_iface {scalar_t__ if_status; TYPE_1__* soft_iface; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 scalar_t__ VAR_0 ;
 struct batadv_hard_iface* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct batadv_hard_iface*) ;
 struct net_device* FUNC_2 (struct kobject*) ;
 int FUNC_3 (struct attribute*) ;
 int FUNC_4 (char*,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_1,
          struct attribute *VAR_2, char *VAR_3)
{
 struct net_device *VAR_4 = FUNC_2(VAR_1);
 struct batadv_hard_iface *VAR_5;
 ssize_t VAR_6;
 const char *VAR_7;

 FUNC_3(VAR_2);

 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return 0;

 if (VAR_5->if_status == VAR_0)
  VAR_7 = "none";
 else
  VAR_7 = VAR_5->soft_iface->name;

 VAR_6 = FUNC_4(VAR_3, "%s\n", VAR_7);

 FUNC_1(VAR_5);

 return VAR_6;
}
