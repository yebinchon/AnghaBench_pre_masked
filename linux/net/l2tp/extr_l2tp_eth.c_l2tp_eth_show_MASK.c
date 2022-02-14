
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct net_device {int name; } ;
struct l2tp_session {int dummy; } ;
struct l2tp_eth_sess {int dev; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 struct l2tp_eth_sess* FUNC_2 (struct l2tp_session*) ;
 struct net_device* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct seq_file*,char*,int ) ;

__attribute__((used)) static void FUNC_7(struct seq_file *VAR_0, void *VAR_1)
{
 struct l2tp_session *VAR_2 = VAR_1;
 struct l2tp_eth_sess *VAR_3 = FUNC_2(VAR_2);
 struct net_device *VAR_4;

 FUNC_4();
 VAR_4 = FUNC_3(VAR_3->dev);
 if (!VAR_4) {
  FUNC_5();
  return;
 }
 FUNC_0(VAR_4);
 FUNC_5();

 FUNC_6(VAR_0, "   interface %s\n", VAR_4->name);

 FUNC_1(VAR_4);
}
