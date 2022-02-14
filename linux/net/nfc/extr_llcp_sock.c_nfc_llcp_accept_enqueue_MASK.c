
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct nfc_llcp_sock {struct sock* parent; int accept_queue; } ;


 int FUNC_0 (int *,int *) ;
 struct nfc_llcp_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

void FUNC_4(struct sock *VAR_0, struct sock *VAR_1)
{
 struct nfc_llcp_sock *VAR_2 = FUNC_1(VAR_1);
 struct nfc_llcp_sock *VAR_3 = FUNC_1(VAR_0);


 FUNC_3(VAR_1);

 FUNC_0(&VAR_2->accept_queue,
        &VAR_3->accept_queue);
 VAR_2->parent = VAR_0;
 FUNC_2(VAR_0);
}
