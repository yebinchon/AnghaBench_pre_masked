
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_llc {int dummy; } ;
struct llc_shdlc {int sm_work; int send_q; } ;


 struct llc_shdlc* FUNC_0 (struct nfc_llc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct nfc_llc *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_shdlc *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(&VAR_2->send_q, VAR_1);

 FUNC_1(&VAR_2->sm_work);

 return 0;
}
