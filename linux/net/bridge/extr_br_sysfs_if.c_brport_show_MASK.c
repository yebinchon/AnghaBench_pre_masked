
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int dummy; } ;
struct kobject {int dummy; } ;
struct brport_attribute {int (* show ) (struct net_bridge_port*,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct net_bridge_port* FUNC_0 (struct kobject*) ;
 int FUNC_1 (struct net_bridge_port*,char*) ;
 struct brport_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
      struct attribute *VAR_2, char *VAR_3)
{
 struct brport_attribute *VAR_4 = FUNC_2(VAR_2);
 struct net_bridge_port *VAR_5 = FUNC_0(VAR_1);

 if (!VAR_4->show)
  return -VAR_0;

 return VAR_4->show(VAR_5, VAR_3);
}
