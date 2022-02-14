
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct l2tp_session {int dummy; } ;
struct l2tp_eth_sess {int dev; } ;


 int VAR_0 ;
 struct l2tp_eth_sess* FUNC_0 (struct l2tp_session*) ;
 int FUNC_1 (int ) ;
 struct net_device* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct l2tp_session *VAR_1)
{
 struct l2tp_eth_sess *VAR_2;
 struct net_device *VAR_3;

 if (VAR_1) {
  VAR_2 = FUNC_0(VAR_1);

  FUNC_3();
  VAR_3 = FUNC_2(VAR_2->dev);
  if (VAR_3) {
   FUNC_5(VAR_3);
   FUNC_4();
   FUNC_1(VAR_0);
  } else {
   FUNC_4();
  }
 }
}
