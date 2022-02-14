
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lowpan_btle_dev {int netdev; } ;
struct l2cap_chan {int conn; } ;


 int FUNC_0 (char*,struct l2cap_chan*,int ,struct lowpan_btle_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct l2cap_chan*,struct lowpan_btle_dev*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct l2cap_chan*,int ) ;
 struct lowpan_btle_dev* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct l2cap_chan*,struct lowpan_btle_dev**) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(struct l2cap_chan *VAR_2)
{
 struct lowpan_btle_dev *VAR_3;
 bool VAR_4 = 0;

 VAR_3 = FUNC_4(VAR_2->conn);

 FUNC_0("chan %p conn %p dev %p", VAR_2, VAR_2->conn, VAR_3);

 if (!VAR_3) {
  if (FUNC_5(VAR_2, &VAR_3) < 0) {
   FUNC_3(VAR_2, -VAR_0);
   return;
  }
  VAR_4 = 1;
 }

 if (!FUNC_6(VAR_1))
  return;

 FUNC_1(VAR_2, VAR_3, VAR_4);
 FUNC_2(VAR_3->netdev);
}
