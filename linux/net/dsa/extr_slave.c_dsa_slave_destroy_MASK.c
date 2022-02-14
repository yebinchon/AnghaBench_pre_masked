
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct dsa_slave_priv {int stats64; } ;
struct dsa_port {int pl; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 struct dsa_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 struct dsa_slave_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct net_device*) ;

void FUNC_11(struct net_device *VAR_1)
{
 struct dsa_port *VAR_2 = FUNC_1(VAR_1);
 struct dsa_slave_priv *VAR_3 = FUNC_4(VAR_1);

 FUNC_5(VAR_1);
 FUNC_8();
 FUNC_7(VAR_2->pl);
 FUNC_9();

 FUNC_0(VAR_1, VAR_0);
 FUNC_10(VAR_1);
 FUNC_6(VAR_2->pl);
 FUNC_3(VAR_3->stats64);
 FUNC_2(VAR_1);
}
