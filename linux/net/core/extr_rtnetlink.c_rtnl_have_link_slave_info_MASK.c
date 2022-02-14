
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ rtnl_link_ops; } ;


 struct net_device* FUNC_0 (struct net_device*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static bool FUNC_3(const struct net_device *VAR_0)
{
 struct net_device *VAR_1;
 bool VAR_2 = 0;

 FUNC_1();

 VAR_1 = FUNC_0((struct net_device *)VAR_0);
 if (VAR_1 && VAR_1->rtnl_link_ops)
  VAR_2 = 1;
 FUNC_2();
 return VAR_2;
}
