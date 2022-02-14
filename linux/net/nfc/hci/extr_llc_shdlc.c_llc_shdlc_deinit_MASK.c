
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_llc {int dummy; } ;
struct llc_shdlc {int ack_pending_q; int send_q; int rcv_q; } ;


 int FUNC_0 (struct llc_shdlc*) ;
 struct llc_shdlc* FUNC_1 (struct nfc_llc*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct nfc_llc *VAR_0)
{
 struct llc_shdlc *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->rcv_q);
 FUNC_2(&VAR_1->send_q);
 FUNC_2(&VAR_1->ack_pending_q);

 FUNC_0(VAR_1);
}
