
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_llcp_local {int dummy; } ;


 int FUNC_0 (struct nfc_llcp_local*,struct sk_buff*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;

void FUNC_3(void *VAR_0, struct sk_buff *VAR_1, int VAR_2)
{
 struct nfc_llcp_local *VAR_3 = (struct nfc_llcp_local *) VAR_0;

 FUNC_1("Received an LLCP PDU\n");
 if (VAR_2 < 0) {
  FUNC_2("err %d\n", VAR_2);
  return;
 }

 FUNC_0(VAR_3, VAR_1);
}
