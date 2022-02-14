
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct llc_shdlc {int dnr; int t2_active; int t2_timer; int ack_pending_q; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 struct sk_buff* FUNC_5 (int *) ;
 struct sk_buff* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct llc_shdlc *VAR_1, int VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4 = VAR_1->dnr;

 FUNC_4("release ack pending up to frame %d excluded\n", VAR_2);

 while (VAR_4 != VAR_2) {
  FUNC_4("release ack pending frame %d\n", VAR_4);

  VAR_3 = FUNC_5(&VAR_1->ack_pending_q);
  FUNC_1(VAR_3);

  VAR_4 = (VAR_4 + 1) % 8;
 }

 if (FUNC_7(&VAR_1->ack_pending_q)) {
  if (VAR_1->t2_active) {
   FUNC_0(&VAR_1->t2_timer);
   VAR_1->t2_active = 0;

   FUNC_4
       ("All sent frames acked. Stopped T2(retransmit)\n");
  }
 } else {
  VAR_3 = FUNC_6(&VAR_1->ack_pending_q);

  FUNC_2(&VAR_1->t2_timer, *(unsigned long *)VAR_3->cb +
     FUNC_3(VAR_0));
  VAR_1->t2_active = 1;

  FUNC_4
      ("Start T2(retransmit) for remaining unacked sent frames\n");
 }
}
