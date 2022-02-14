
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_llc {int dummy; } ;
struct llc_shdlc {int dummy; } ;


 int FUNC_0 (struct llc_shdlc*,struct sk_buff*) ;
 struct llc_shdlc* FUNC_1 (struct nfc_llc*) ;

__attribute__((used)) static void FUNC_2(struct nfc_llc *VAR_0, struct sk_buff *VAR_1)
{
 struct llc_shdlc *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_2, VAR_1);
}
