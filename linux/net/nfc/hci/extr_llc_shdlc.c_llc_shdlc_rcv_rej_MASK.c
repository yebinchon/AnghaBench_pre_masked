
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct llc_shdlc {int dnr; int t2_active; int ack_pending_q; int t2_timer; int ns; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct llc_shdlc*) ;
 scalar_t__ FUNC_3 (int,int,int ) ;
 int FUNC_4 (char*,...) ;
 struct sk_buff* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct llc_shdlc *VAR_0, int VAR_1)
{
 struct sk_buff *VAR_2;

 FUNC_4("remote asks retransmission from frame %d\n", VAR_1);

 if (FUNC_3(VAR_0->dnr, VAR_1, VAR_0->ns)) {
  if (VAR_0->t2_active) {
   FUNC_0(&VAR_0->t2_timer);
   VAR_0->t2_active = 0;
   FUNC_4("Stopped T2(retransmit)\n");
  }

  if (VAR_0->dnr != VAR_1) {
   while ((VAR_0->dnr = ((VAR_0->dnr + 1) % 8)) != VAR_1) {
    VAR_2 = FUNC_5(&VAR_0->ack_pending_q);
    FUNC_1(VAR_2);
   }
  }

  FUNC_2(VAR_0);
 }
}
