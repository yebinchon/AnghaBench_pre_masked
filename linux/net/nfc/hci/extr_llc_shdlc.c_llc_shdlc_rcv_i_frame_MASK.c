
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct llc_shdlc {scalar_t__ state; int nr; int t1_active; int dnr; int ns; int hdev; int (* rcv_to_hci ) (int ,struct sk_buff*) ;int w; int t1_timer; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct llc_shdlc*,int) ;
 int FUNC_3 (struct llc_shdlc*,int ,int) ;
 scalar_t__ FUNC_4 (int,int,int ) ;
 int FUNC_5 (int *,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_9(struct llc_shdlc *VAR_3,
      struct sk_buff *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = VAR_5;
 int VAR_8 = VAR_6;

 FUNC_7("recvd I-frame %d, remote waiting frame %d\n", VAR_5, VAR_6);

 if (VAR_3->state != VAR_0)
  goto exit;

 if (VAR_7 != VAR_3->nr) {
  FUNC_3(VAR_3, VAR_1, VAR_3->nr);
  goto exit;
 }

 if (VAR_3->t1_active == 0) {
  VAR_3->t1_active = 1;
  FUNC_5(&VAR_3->t1_timer, VAR_2 +
     FUNC_6(FUNC_0(VAR_3->w)));
  FUNC_7("(re)Start T1(send ack)\n");
 }

 if (VAR_4->len) {
  VAR_3->rcv_to_hci(VAR_3->hdev, VAR_4);
  VAR_4 = ((void*)0);
 }

 VAR_3->nr = (VAR_3->nr + 1) % 8;

 if (FUNC_4(VAR_3->dnr, VAR_8, VAR_3->ns)) {
  FUNC_2(VAR_3, VAR_8);

  VAR_3->dnr = VAR_8;
 }

exit:
 FUNC_1(VAR_4);
}
