
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dsa_port {int pl; int xmit_queue; int xmit_work; } ;


 int FUNC_0 (int *) ;
 struct dsa_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

int FUNC_8(struct net_device *VAR_0)
{
 struct dsa_port *VAR_1 = FUNC_1(VAR_0);

 if (!FUNC_3(VAR_0))
  return 0;

 FUNC_0(&VAR_1->xmit_work);
 FUNC_7(&VAR_1->xmit_queue);

 FUNC_2(VAR_0);

 FUNC_5();
 FUNC_4(VAR_1->pl);
 FUNC_6();

 return 0;
}
