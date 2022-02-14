
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct sk_buff {int len; int* data; } ;
struct nfc_llcp_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct nfc_llcp_local*,struct sk_buff*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int*,int) ;

__attribute__((used)) static void FUNC_7(struct nfc_llcp_local *VAR_5, struct sk_buff *VAR_6)
{
 u8 VAR_7;
 u16 VAR_8;
 struct sk_buff *VAR_9;

 if (VAR_6->len <= VAR_2) {
  FUNC_4("Malformed AGF PDU\n");
  return;
 }

 FUNC_5(VAR_6, VAR_2);

 while (VAR_6->len > VAR_1) {
  VAR_8 = VAR_6->data[0] << 8 | VAR_6->data[1];

  FUNC_5(VAR_6, VAR_1);

  if (VAR_8 < VAR_2 || VAR_8 > VAR_6->len) {
   FUNC_4("Malformed AGF PDU\n");
   return;
  }

  VAR_7 = FUNC_2(VAR_6);

  if (VAR_7 == VAR_4 || VAR_7 == VAR_3)
   goto next;

  VAR_9 = FUNC_1(VAR_8, VAR_0);
  if (VAR_9 == ((void*)0)) {
   FUNC_4("Could not allocate PDU\n");
   return;
  }

  FUNC_6(VAR_9, VAR_6->data, VAR_8);

  FUNC_3(VAR_5, VAR_9);

  FUNC_0(VAR_9);
next:
  FUNC_5(VAR_6, VAR_8);
 }
}
