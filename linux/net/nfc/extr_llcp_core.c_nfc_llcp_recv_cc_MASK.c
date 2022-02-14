
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct sk_buff {scalar_t__ len; int * data; } ;
struct nfc_llcp_sock {int dsap; struct sock sk; } ;
struct nfc_llcp_local {int sockets; int connecting_sockets; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct nfc_llcp_sock* FUNC_0 (struct nfc_llcp_local*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct nfc_llcp_sock*,int *,scalar_t__) ;
 int FUNC_3 (struct nfc_llcp_local*,int ,int ,int ) ;
 int FUNC_4 (int *,struct sock*) ;
 int FUNC_5 (struct nfc_llcp_sock*) ;
 int FUNC_6 (int *,struct sock*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct sock*) ;

__attribute__((used)) static void FUNC_10(struct nfc_llcp_local *VAR_3, struct sk_buff *VAR_4)
{
 struct nfc_llcp_sock *VAR_5;
 struct sock *VAR_6;
 u8 VAR_7, VAR_8;

 VAR_7 = FUNC_1(VAR_4);
 VAR_8 = FUNC_7(VAR_4);

 VAR_5 = FUNC_0(VAR_3, VAR_7);
 if (VAR_5 == ((void*)0)) {
  FUNC_8("Invalid CC\n");
  FUNC_3(VAR_3, VAR_7, VAR_8, VAR_1);

  return;
 }

 VAR_6 = &VAR_5->sk;


 FUNC_6(&VAR_3->connecting_sockets, VAR_6);
 FUNC_4(&VAR_3->sockets, VAR_6);
 VAR_5->dsap = VAR_8;

 FUNC_2(VAR_5, &VAR_4->data[VAR_2],
          VAR_4->len - VAR_2);

 VAR_6->sk_state = VAR_0;
 VAR_6->sk_state_change(VAR_6);

 FUNC_5(VAR_5);
}
