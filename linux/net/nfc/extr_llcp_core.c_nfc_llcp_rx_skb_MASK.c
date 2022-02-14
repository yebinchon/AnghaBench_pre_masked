
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int len; int data; } ;
struct nfc_llcp_local {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct nfc_llcp_local*,struct sk_buff*) ;
 int FUNC_3 (struct nfc_llcp_local*,struct sk_buff*) ;
 int FUNC_4 (struct nfc_llcp_local*,struct sk_buff*) ;
 int FUNC_5 (struct nfc_llcp_local*,struct sk_buff*) ;
 int FUNC_6 (struct nfc_llcp_local*,struct sk_buff*) ;
 int FUNC_7 (struct nfc_llcp_local*,struct sk_buff*) ;
 int FUNC_8 (struct nfc_llcp_local*,struct sk_buff*) ;
 int FUNC_9 (struct nfc_llcp_local*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (char*,int ,int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_13(struct nfc_llcp_local *VAR_1, struct sk_buff *VAR_2)
{
 u8 VAR_3, VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_2);
 VAR_4 = FUNC_10(VAR_2);

 FUNC_11("ptype 0x%x dsap 0x%x ssap 0x%x\n", VAR_5, VAR_3, VAR_4);

 if (VAR_5 != 129)
  FUNC_12("LLCP Rx: ", VAR_0, 16, 1,
         VAR_2->data, VAR_2->len, 1);

 switch (VAR_5) {
 case 129:
  FUNC_11("SYMM\n");
  break;

 case 128:
  FUNC_11("UI\n");
  FUNC_9(VAR_1, VAR_2);
  break;

 case 136:
  FUNC_11("CONNECT\n");
  FUNC_4(VAR_1, VAR_2);
  break;

 case 135:
  FUNC_11("DISC\n");
  FUNC_5(VAR_1, VAR_2);
  break;

 case 137:
  FUNC_11("CC\n");
  FUNC_3(VAR_1, VAR_2);
  break;

 case 134:
  FUNC_11("DM\n");
  FUNC_6(VAR_1, VAR_2);
  break;

 case 130:
  FUNC_11("SNL\n");
  FUNC_8(VAR_1, VAR_2);
  break;

 case 133:
 case 131:
 case 132:
  FUNC_11("I frame\n");
  FUNC_7(VAR_1, VAR_2);
  break;

 case 138:
  FUNC_11("AGF frame\n");
  FUNC_2(VAR_1, VAR_2);
  break;
 }
}
