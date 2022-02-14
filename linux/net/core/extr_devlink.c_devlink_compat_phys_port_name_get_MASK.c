
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct devlink_port {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct devlink_port*,char*,size_t) ;
 struct devlink_port* FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_1,
          char *VAR_2, size_t VAR_3)
{
 struct devlink_port *VAR_4;





 FUNC_0();

 VAR_4 = FUNC_2(VAR_1);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_2, VAR_3);
}
