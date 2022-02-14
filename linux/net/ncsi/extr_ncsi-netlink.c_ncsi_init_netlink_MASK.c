
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (struct net_device*,char*) ;

int FUNC_2(struct net_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0);
 if (VAR_2)
  FUNC_1(VAR_1, "ncsi: failed to register netlink family\n");

 return VAR_2;
}
