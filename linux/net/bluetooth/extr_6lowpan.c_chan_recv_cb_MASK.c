
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lowpan_peer {int dummy; } ;
struct lowpan_btle_dev {int netdev; } ;
struct l2cap_chan {int conn; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct lowpan_btle_dev* FUNC_1 (int ) ;
 struct lowpan_peer* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,struct lowpan_peer*) ;

__attribute__((used)) static int FUNC_4(struct l2cap_chan *VAR_2, struct sk_buff *VAR_3)
{
 struct lowpan_btle_dev *VAR_4;
 struct lowpan_peer *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_2->conn);
 if (!VAR_5)
  return -VAR_1;

 VAR_4 = FUNC_1(VAR_2->conn);
 if (!VAR_4 || !VAR_4->netdev)
  return -VAR_1;

 VAR_6 = FUNC_3(VAR_3, VAR_4->netdev, VAR_5);
 if (VAR_6) {
  FUNC_0("recv pkt %d", VAR_6);
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
