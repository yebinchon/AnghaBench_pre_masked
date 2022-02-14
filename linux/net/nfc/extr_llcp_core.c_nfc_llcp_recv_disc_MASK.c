
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {scalar_t__ sk_state; int (* sk_state_change ) (struct sock*) ;} ;
struct sk_buff {int dummy; } ;
struct nfc_llcp_sock {struct sock sk; } ;
struct nfc_llcp_local {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct nfc_llcp_local*,scalar_t__,scalar_t__,int ) ;
 struct nfc_llcp_sock* FUNC_4 (struct nfc_llcp_local*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct nfc_llcp_sock*) ;
 int FUNC_6 (struct nfc_llcp_sock*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static void FUNC_12(struct nfc_llcp_local *VAR_4,
          struct sk_buff *VAR_5)
{
 struct nfc_llcp_sock *VAR_6;
 struct sock *VAR_7;
 u8 VAR_8, VAR_9;

 VAR_8 = FUNC_2(VAR_5);
 VAR_9 = FUNC_7(VAR_5);

 if ((VAR_8 == 0) && (VAR_9 == 0)) {
  FUNC_9("Connection termination");
  FUNC_1(VAR_4->dev);
  return;
 }

 VAR_6 = FUNC_4(VAR_4, VAR_8, VAR_9);
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_4, VAR_8, VAR_9, VAR_3);
  return;
 }

 VAR_7 = &VAR_6->sk;
 FUNC_0(VAR_7);

 FUNC_6(VAR_6);

 if (VAR_7->sk_state == VAR_0) {
  FUNC_10(VAR_7);
  FUNC_5(VAR_6);
 }

 if (VAR_7->sk_state == VAR_1) {
  FUNC_8(VAR_4->dev);
  VAR_7->sk_state = VAR_0;
  VAR_7->sk_state_change(VAR_7);
 }

 FUNC_3(VAR_4, VAR_8, VAR_9, VAR_2);

 FUNC_10(VAR_7);
 FUNC_5(VAR_6);
}
