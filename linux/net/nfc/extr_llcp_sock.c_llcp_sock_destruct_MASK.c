
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_receive_queue; } ;
struct nfc_llcp_sock {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct nfc_llcp_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct nfc_llcp_sock*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,struct sock*) ;
 int FUNC_4 (char*,struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2)
{
 struct nfc_llcp_sock *VAR_3 = FUNC_0(VAR_2);

 FUNC_3("%p\n", VAR_2);

 if (VAR_2->sk_state == VAR_0)
  FUNC_2(VAR_3->dev);

 FUNC_5(&VAR_2->sk_receive_queue);

 FUNC_1(VAR_3);

 if (!FUNC_6(VAR_2, VAR_1)) {
  FUNC_4("Freeing alive NFC LLCP socket %p\n", VAR_2);
  return;
 }
}
