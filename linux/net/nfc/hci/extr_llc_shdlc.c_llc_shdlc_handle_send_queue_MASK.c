
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ cb; } ;
struct TYPE_3__ {scalar_t__ qlen; } ;
struct TYPE_4__ {scalar_t__ qlen; } ;
struct llc_shdlc {int ns; int rnr; scalar_t__ w; int t1_active; int nr; int (* xmit_to_drv ) (int ,struct sk_buff*) ;int hard_fault; int t2_active; int t2_timer; TYPE_1__ ack_pending_q; int hdev; TYPE_2__ send_q; int t1_timer; int dnr; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char*,...) ;
 struct sk_buff* FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (TYPE_1__*,struct sk_buff*) ;
 int FUNC_9 (int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_10(struct llc_shdlc *VAR_3)
{
 struct sk_buff *VAR_4;
 int VAR_5;
 unsigned long VAR_6;

 if (VAR_3->send_q.qlen)
  FUNC_5
      ("sendQlen=%d ns=%d dnr=%d rnr=%s w_room=%d unackQlen=%d\n",
       VAR_3->send_q.qlen, VAR_3->ns, VAR_3->dnr,
       VAR_3->rnr == 0 ? "false" : "true",
       VAR_3->w - FUNC_2(VAR_3->ns, VAR_3->dnr),
       VAR_3->ack_pending_q.qlen);

 while (VAR_3->send_q.qlen && VAR_3->ack_pending_q.qlen < VAR_3->w &&
        (VAR_3->rnr == 0)) {

  if (VAR_3->t1_active) {
   FUNC_1(&VAR_3->t1_timer);
   VAR_3->t1_active = 0;
   FUNC_5("Stopped T1(send ack)\n");
  }

  VAR_4 = FUNC_6(&VAR_3->send_q);

  *(u8 *)FUNC_7(VAR_4, 1) = VAR_0 | (VAR_3->ns << 3) |
     VAR_3->nr;

  FUNC_5("Sending I-Frame %d, waiting to rcv %d\n", VAR_3->ns,
    VAR_3->nr);
  FUNC_0("shdlc frame written", VAR_4);

  VAR_5 = VAR_3->xmit_to_drv(VAR_3->hdev, VAR_4);
  if (VAR_5 < 0) {
   VAR_3->hard_fault = VAR_5;
   break;
  }

  VAR_3->ns = (VAR_3->ns + 1) % 8;

  VAR_6 = VAR_2;
  *(unsigned long *)VAR_4->cb = VAR_6;

  FUNC_8(&VAR_3->ack_pending_q, VAR_4);

  if (VAR_3->t2_active == 0) {
   VAR_3->t2_active = 1;
   FUNC_3(&VAR_3->t2_timer, VAR_6 +
      FUNC_4(VAR_1));
   FUNC_5("Started T2 (retransmit)\n");
  }
 }
}
