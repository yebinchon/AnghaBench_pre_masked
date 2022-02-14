
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dsa_port {int pl; } ;


 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(struct net_device *VAR_0)
{
 struct dsa_port *VAR_1 = FUNC_0(VAR_0);

 if (!FUNC_2(VAR_0))
  return 0;

 FUNC_1(VAR_0);

 FUNC_4();
 FUNC_3(VAR_1->pl);
 FUNC_5();

 return 0;
}
