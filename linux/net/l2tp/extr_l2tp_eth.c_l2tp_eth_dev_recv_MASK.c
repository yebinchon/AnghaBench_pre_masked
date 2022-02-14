
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; int data; int len; } ;
struct net_device {int dummy; } ;
struct l2tp_session {int debug; int name; } ;
struct l2tp_eth_sess {int dev; } ;
struct l2tp_eth {int rx_errors; int rx_bytes; int rx_packets; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct net_device*,struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 struct l2tp_eth_sess* FUNC_4 (struct l2tp_session*) ;
 unsigned int FUNC_5 (unsigned int,int ) ;
 struct l2tp_eth* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ,int ,unsigned int) ;
 int FUNC_10 (struct sk_buff*,unsigned int) ;
 struct net_device* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_16(struct l2tp_session *VAR_5, struct sk_buff *VAR_6, int VAR_7)
{
 struct l2tp_eth_sess *VAR_8 = FUNC_4(VAR_5);
 struct net_device *VAR_9;
 struct l2tp_eth *VAR_10;

 if (VAR_5->debug & VAR_3) {
  unsigned int VAR_11;

  VAR_11 = FUNC_5(32u, VAR_6->len);
  if (!FUNC_10(VAR_6, VAR_11))
   goto error;

  FUNC_8("%s: eth recv\n", VAR_5->name);
  FUNC_9("", VAR_1, VAR_6->data, VAR_11);
 }

 if (!FUNC_10(VAR_6, VAR_2))
  goto error;

 FUNC_14(VAR_6);


 VAR_6->ip_summed = VAR_0;

 FUNC_15(VAR_6);
 FUNC_7(VAR_6);

 FUNC_12();
 VAR_9 = FUNC_11(VAR_8->dev);
 if (!VAR_9)
  goto error_rcu;

 VAR_10 = FUNC_6(VAR_9);
 if (FUNC_2(VAR_9, VAR_6) == VAR_4) {
  FUNC_1(&VAR_10->rx_packets);
  FUNC_0(VAR_7, &VAR_10->rx_bytes);
 } else {
  FUNC_1(&VAR_10->rx_errors);
 }
 FUNC_13();

 return;

error_rcu:
 FUNC_13();
error:
 FUNC_3(VAR_6);
}
