
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sock {scalar_t__ sk_state; int (* sk_data_ready ) (struct sock*) ;int (* sk_write_space ) (struct sock*) ;struct sk_buff_head sk_receive_queue; int sk_drops; int (* sk_state_change ) (struct sock*) ;} ;
struct sk_buff {int * dev; } ;
struct pnpipehdr {int message_id; int state_after_reset; } ;
struct pep_sock {int init_enable; int rx_credits; int tx_credits; int tx_fc; int rx_fc; struct sk_buff_head ctrlreq_queue; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (struct sock*,struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sock*,struct sk_buff*,int ,int *,int ,int ) ;
 struct pep_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (struct sock*,struct sk_buff*) ;
 int FUNC_12 (int ) ;
 struct pnpipehdr* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff_head*) ;
 int FUNC_15 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*,struct sock*) ;
 int FUNC_17 (struct sock*,int ) ;
 int FUNC_18 (struct sock*,struct sk_buff*) ;
 int FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct sock*) ;

__attribute__((used)) static int FUNC_22(struct sock *VAR_12, struct sk_buff *VAR_13)
{
 struct pep_sock *VAR_14 = FUNC_8(VAR_12);
 struct pnpipehdr *VAR_15 = FUNC_13(VAR_13);
 struct sk_buff_head *VAR_16;
 int VAR_17 = 0;

 FUNC_0(VAR_12->sk_state == VAR_9);

 switch (VAR_15->message_id) {
 case 143:
  FUNC_6(VAR_12, VAR_13, VAR_6, VAR_2);
  break;

 case 140:
  FUNC_7(VAR_12, VAR_13, VAR_7, ((void*)0), 0, VAR_2);
  VAR_12->sk_state = VAR_9;
  if (!FUNC_17(VAR_12, VAR_8))
   VAR_12->sk_state_change(VAR_12);
  break;

 case 139:

  FUNC_7(VAR_12, VAR_13, VAR_7, ((void*)0), 0, VAR_2);
  break;

 case 138:
  switch (VAR_15->state_after_reset) {
  case 129:
   VAR_14->init_enable = 0;
   break;
  case 128:
   VAR_14->init_enable = 1;
   break;
  default:
   VAR_17 = -VAR_0;
   goto out;
  }

 case 141:
  FUNC_3(&VAR_14->tx_credits, 0);
  FUNC_7(VAR_12, VAR_13, VAR_7, ((void*)0), 0, VAR_2);
  break;

 case 142:
  if (FUNC_14(&VAR_14->ctrlreq_queue) >= VAR_5) {
   FUNC_2(&VAR_12->sk_drops);
   break;
  }
  FUNC_1(VAR_13, 4);
  VAR_16 = &VAR_14->ctrlreq_queue;
  goto queue;

 case 136:
  FUNC_1(VAR_13, 1);

 case 134:
  FUNC_1(VAR_13, 3);
  if (!FUNC_12(VAR_14->rx_fc)) {
   VAR_17 = FUNC_18(VAR_12, VAR_13);
   if (!VAR_17)
    return VAR_4;
   VAR_17 = -VAR_1;
   break;
  }

  if (VAR_14->rx_credits == 0) {
   FUNC_2(&VAR_12->sk_drops);
   VAR_17 = -VAR_1;
   break;
  }
  VAR_14->rx_credits--;
  VAR_16 = &VAR_12->sk_receive_queue;
  goto queue;

 case 137:
  FUNC_11(VAR_12, VAR_13);
  break;

 case 131:
  VAR_17 = FUNC_10(VAR_12, VAR_13);
  break;

 case 135:
  VAR_17 = FUNC_10(VAR_12, VAR_13);
  if (VAR_17)
   break;

 case 130:
  if (!VAR_14->init_enable)
   break;

 case 132:
  if (!FUNC_12(VAR_14->tx_fc)) {
   FUNC_3(&VAR_14->tx_credits, 1);
   VAR_12->sk_write_space(VAR_12);
  }
  if (VAR_12->sk_state == VAR_10)
   break;
  VAR_12->sk_state = VAR_10;
  FUNC_9(VAR_12, VAR_2);
  break;

 case 133:
  VAR_12->sk_state = VAR_11;
  VAR_14->rx_credits = 0;
  break;

 default:
  FUNC_5("Phonet unknown PEP message: %u\n",
        VAR_15->message_id);
  VAR_17 = -VAR_0;
 }
out:
 FUNC_4(VAR_13);
 return (VAR_17 == -VAR_1) ? VAR_3 : VAR_4;

queue:
 VAR_13->dev = ((void*)0);
 FUNC_16(VAR_13, VAR_12);
 FUNC_15(VAR_16, VAR_13);
 if (!FUNC_17(VAR_12, VAR_8))
  VAR_12->sk_data_ready(VAR_12);
 return VAR_4;
}
