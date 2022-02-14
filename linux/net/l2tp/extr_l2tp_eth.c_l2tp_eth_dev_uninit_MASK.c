
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct l2tp_eth_sess {int dev; } ;
struct l2tp_eth {int session; } ;


 int FUNC_0 (int ,int *) ;
 struct l2tp_eth_sess* FUNC_1 (int ) ;
 struct l2tp_eth* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct l2tp_eth *VAR_1 = FUNC_2(VAR_0);
 struct l2tp_eth_sess *VAR_2;

 VAR_2 = FUNC_1(VAR_1->session);
 FUNC_0(VAR_2->dev, ((void*)0));



}
