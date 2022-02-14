
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; } ;
struct nfc_llcp_sock {int * parent; int accept_queue; } ;


 int FUNC_0 (int *) ;
 struct nfc_llcp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sock*) ;

void FUNC_5(struct sock *VAR_0)
{
 struct nfc_llcp_sock *VAR_1 = FUNC_1(VAR_0);

 FUNC_2("state %d\n", VAR_0->sk_state);

 FUNC_0(&VAR_1->accept_queue);
 FUNC_3(VAR_1->parent);
 VAR_1->parent = ((void*)0);

 FUNC_4(VAR_0);
}
