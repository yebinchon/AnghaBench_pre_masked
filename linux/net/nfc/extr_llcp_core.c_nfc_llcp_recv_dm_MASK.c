
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; int sk_err; } ;
struct sk_buff {int* data; } ;
struct nfc_llcp_sock {struct sock sk; } ;
struct nfc_llcp_local {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct nfc_llcp_sock* FUNC_0 (struct nfc_llcp_local*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct nfc_llcp_sock* FUNC_2 (struct nfc_llcp_local*,int,int) ;
 int FUNC_3 (struct nfc_llcp_sock*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct nfc_llcp_local *VAR_2, struct sk_buff *VAR_3)
{
 struct nfc_llcp_sock *VAR_4;
 struct sock *VAR_5;
 u8 VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_3);
 VAR_7 = FUNC_4(VAR_3);
 VAR_8 = VAR_3->data[2];

 FUNC_5("%d %d reason %d\n", VAR_7, VAR_6, VAR_8);

 switch (VAR_8) {
 case 129:
 case 128:
  VAR_4 = FUNC_0(VAR_2, VAR_6);
  break;

 default:
  VAR_4 = FUNC_2(VAR_2, VAR_6, VAR_7);
  break;
 }

 if (VAR_4 == ((void*)0)) {
  FUNC_5("Already closed\n");
  return;
 }

 VAR_5 = &VAR_4->sk;

 VAR_5->sk_err = VAR_0;
 VAR_5->sk_state = VAR_1;
 VAR_5->sk_state_change(VAR_5);

 FUNC_3(VAR_4);
}
