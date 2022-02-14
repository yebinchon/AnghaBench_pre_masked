
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct l2cap_chan {scalar_t__ unacked_frames; int expected_ack_seq; int tx_q; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int FUNC_1 (struct l2cap_chan*) ;
 int FUNC_2 (struct l2cap_chan*,int ) ;
 int FUNC_3 (struct sk_buff*) ;
 struct sk_buff* FUNC_4 (int *,int ) ;
 int FUNC_5 (struct sk_buff*,int *) ;

__attribute__((used)) static void FUNC_6(struct l2cap_chan *VAR_0, u16 VAR_1)
{
 struct sk_buff *VAR_2;
 u16 VAR_3;

 FUNC_0("chan %p, reqseq %u", VAR_0, VAR_1);

 if (VAR_0->unacked_frames == 0 || VAR_1 == VAR_0->expected_ack_seq)
  return;

 FUNC_0("expected_ack_seq %u, unacked_frames %u",
        VAR_0->expected_ack_seq, VAR_0->unacked_frames);

 for (VAR_3 = VAR_0->expected_ack_seq; VAR_3 != VAR_1;
      VAR_3 = FUNC_2(VAR_0, VAR_3)) {

  VAR_2 = FUNC_4(&VAR_0->tx_q, VAR_3);
  if (VAR_2) {
   FUNC_5(VAR_2, &VAR_0->tx_q);
   FUNC_3(VAR_2);
   VAR_0->unacked_frames--;
  }
 }

 VAR_0->expected_ack_seq = VAR_1;

 if (VAR_0->unacked_frames == 0)
  FUNC_1(VAR_0);

 FUNC_0("unacked_frames %u", VAR_0->unacked_frames);
}
