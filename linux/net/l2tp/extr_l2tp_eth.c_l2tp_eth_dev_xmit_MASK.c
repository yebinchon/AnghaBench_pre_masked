
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;
struct net_device {int dummy; } ;
struct l2tp_session {int hdr_len; } ;
struct l2tp_eth {int tx_dropped; int tx_packets; int tx_bytes; struct l2tp_session* session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct l2tp_session*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 struct l2tp_eth* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct l2tp_eth *VAR_4 = FUNC_4(VAR_3);
 struct l2tp_session *VAR_5 = VAR_4->session;
 unsigned int VAR_6 = VAR_2->len;
 int VAR_7 = FUNC_2(VAR_5, VAR_2, VAR_5->hdr_len);

 if (FUNC_3(VAR_7 == VAR_1)) {
  FUNC_0(VAR_6, &VAR_4->tx_bytes);
  FUNC_1(&VAR_4->tx_packets);
 } else {
  FUNC_1(&VAR_4->tx_dropped);
 }
 return VAR_0;
}
