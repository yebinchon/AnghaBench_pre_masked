
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_llc {int dummy; } ;
struct llc_nop {int hdev; int (* rcv_to_hci ) (int ,struct sk_buff*) ;} ;


 struct llc_nop* FUNC_0 (struct nfc_llc*) ;
 int FUNC_1 (int ,struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct nfc_llc *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_nop *VAR_2 = FUNC_0(VAR_0);

 VAR_2->rcv_to_hci(VAR_2->hdev, VAR_1);
}
