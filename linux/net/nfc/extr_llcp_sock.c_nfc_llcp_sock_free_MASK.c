
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfc_llcp_sock {int local; int * parent; int accept_queue; int tx_pending_queue; int tx_queue; int service_name; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct nfc_llcp_sock *VAR_0)
{
 FUNC_0(VAR_0->service_name);

 FUNC_3(&VAR_0->tx_queue);
 FUNC_3(&VAR_0->tx_pending_queue);

 FUNC_1(&VAR_0->accept_queue);

 VAR_0->parent = ((void*)0);

 FUNC_2(VAR_0->local);
}
