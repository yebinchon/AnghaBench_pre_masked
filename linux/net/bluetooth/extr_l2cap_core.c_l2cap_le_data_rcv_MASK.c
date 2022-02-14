
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct l2cap_chan {scalar_t__ imtu; scalar_t__ sdu_len; scalar_t__ mps; struct sk_buff* sdu_last_frag; struct sk_buff* sdu; scalar_t__ rx_credits; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct sk_buff*,struct sk_buff*,struct sk_buff**) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct l2cap_chan*) ;
 int FUNC_6 (struct l2cap_chan*,struct sk_buff*) ;
 int FUNC_7 (struct l2cap_chan*,int ) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct l2cap_chan *VAR_5, struct sk_buff *VAR_6)
{
 int VAR_7;

 if (!VAR_5->rx_credits) {
  FUNC_1("No credits to receive LE L2CAP data");
  FUNC_7(VAR_5, VAR_0);
  return -VAR_3;
 }

 if (VAR_5->imtu < VAR_6->len) {
  FUNC_1("Too big LE L2CAP PDU");
  return -VAR_3;
 }

 VAR_5->rx_credits--;
 FUNC_0("rx_credits %u -> %u", VAR_5->rx_credits + 1, VAR_5->rx_credits);




 if (!VAR_5->rx_credits)
  FUNC_5(VAR_5);

 VAR_7 = 0;

 if (!VAR_5->sdu) {
  u16 VAR_8;

  VAR_8 = FUNC_3(VAR_6->data);
  FUNC_8(VAR_6, VAR_4);

  FUNC_0("Start of new SDU. sdu_len %u skb->len %u imtu %u",
         VAR_8, VAR_6->len, VAR_5->imtu);

  if (VAR_8 > VAR_5->imtu) {
   FUNC_1("Too big LE L2CAP SDU length received");
   VAR_7 = -VAR_2;
   goto failed;
  }

  if (VAR_6->len > VAR_8) {
   FUNC_1("Too much LE L2CAP data received");
   VAR_7 = -VAR_1;
   goto failed;
  }

  if (VAR_6->len == VAR_8)
   return FUNC_6(VAR_5, VAR_6);

  VAR_5->sdu = VAR_6;
  VAR_5->sdu_len = VAR_8;
  VAR_5->sdu_last_frag = VAR_6;


  if (VAR_6->len + VAR_4 < VAR_5->mps) {
   u16 VAR_9 = VAR_6->len + VAR_4;


   FUNC_0("chan->mps %u -> %u", VAR_5->mps, VAR_9);
   VAR_5->mps = VAR_9;
   FUNC_5(VAR_5);
  }

  return 0;
 }

 FUNC_0("SDU fragment. chan->sdu->len %u skb->len %u chan->sdu_len %u",
        VAR_5->sdu->len, VAR_6->len, VAR_5->sdu_len);

 if (VAR_5->sdu->len + VAR_6->len > VAR_5->sdu_len) {
  FUNC_1("Too much LE L2CAP data received");
  VAR_7 = -VAR_1;
  goto failed;
 }

 FUNC_2(VAR_5->sdu, VAR_6, &VAR_5->sdu_last_frag);
 VAR_6 = ((void*)0);

 if (VAR_5->sdu->len == VAR_5->sdu_len) {
  VAR_7 = FUNC_6(VAR_5, VAR_5->sdu);
  if (!VAR_7) {
   VAR_5->sdu = ((void*)0);
   VAR_5->sdu_last_frag = ((void*)0);
   VAR_5->sdu_len = 0;
  }
 }

failed:
 if (VAR_7) {
  FUNC_4(VAR_6);
  FUNC_4(VAR_5->sdu);
  VAR_5->sdu = ((void*)0);
  VAR_5->sdu_last_frag = ((void*)0);
  VAR_5->sdu_len = 0;
 }





 return 0;
}
