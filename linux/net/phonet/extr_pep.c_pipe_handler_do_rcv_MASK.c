
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {void* sk_state; int (* sk_state_change ) (struct sock*) ;int (* sk_data_ready ) (struct sock*) ;int sk_receive_queue; int sk_drops; } ;
struct sk_buff {int * dev; } ;
struct pnpipehdr {int message_id; } ;
struct pep_sock {int init_enable; int rx_credits; int rx_fc; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct pep_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*,struct sk_buff*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int ) ;
 struct pnpipehdr* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *,struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*,struct sock*) ;
 int FUNC_12 (struct sock*,int ) ;
 int FUNC_13 (struct sock*,struct sk_buff*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*) ;

__attribute__((used)) static int FUNC_16(struct sock *VAR_8, struct sk_buff *VAR_9)
{
 struct pep_sock *VAR_10 = FUNC_5(VAR_8);
 struct pnpipehdr *VAR_11 = FUNC_9(VAR_9);
 int VAR_12 = VAR_1;

 switch (VAR_11->message_id) {
 case 129:
  FUNC_0(VAR_9, 1);

 case 128:
  FUNC_0(VAR_9, 3);
  if (!FUNC_8(VAR_10->rx_fc)) {
   VAR_12 = FUNC_13(VAR_8, VAR_9);
   if (!VAR_12)
    return VAR_1;
   VAR_12 = VAR_0;
   break;
  }

  if (VAR_10->rx_credits == 0) {
   FUNC_1(&VAR_8->sk_drops);
   VAR_12 = VAR_0;
   break;
  }
  VAR_10->rx_credits--;
  VAR_9->dev = ((void*)0);
  FUNC_11(VAR_9, VAR_8);
  FUNC_10(&VAR_8->sk_receive_queue, VAR_9);
  if (!FUNC_12(VAR_8, VAR_3))
   VAR_8->sk_data_ready(VAR_8);
  return VAR_1;

 case 133:
  if (VAR_8->sk_state != VAR_7)
   break;
  if (!FUNC_12(VAR_8, VAR_3))
   VAR_8->sk_state_change(VAR_8);
  if (FUNC_3(VAR_8, VAR_9)) {
   VAR_8->sk_state = VAR_4;
   break;
  }
  if (VAR_10->init_enable == VAR_2)
   VAR_8->sk_state = VAR_6;
  else {
   VAR_8->sk_state = VAR_5;
   FUNC_7(VAR_8);
  }
  break;

 case 131:
  if (VAR_8->sk_state != VAR_7)
   break;

  if (FUNC_4(VAR_8, VAR_9)) {
   VAR_8->sk_state = VAR_4;
   break;
  }

  VAR_8->sk_state = VAR_5;
  FUNC_7(VAR_8);
  break;

 case 132:

  break;

 case 130:
  FUNC_6(VAR_8, VAR_9);
  break;
 }
 FUNC_2(VAR_9);
 return VAR_12;
}
