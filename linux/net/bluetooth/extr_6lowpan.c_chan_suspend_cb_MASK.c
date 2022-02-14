
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lowpan_btle_dev {int netdev; } ;
struct l2cap_chan {int conn; } ;


 int FUNC_0 (char*,struct l2cap_chan*) ;
 struct lowpan_btle_dev* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct l2cap_chan *VAR_0)
{
 struct lowpan_btle_dev *VAR_1;

 FUNC_0("chan %p suspend", VAR_0);

 VAR_1 = FUNC_1(VAR_0->conn);
 if (!VAR_1 || !VAR_1->netdev)
  return;

 FUNC_2(VAR_1->netdev);
}
