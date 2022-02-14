
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nfc_llcp_sock {scalar_t__ remote_rw; int tx_queue; int tx_pending_queue; scalar_t__ remote_ready; struct nfc_llcp_local* local; } ;
struct nfc_llcp_local {int tx_queue; } ;


 int FUNC_0 (struct nfc_llcp_sock*,struct sk_buff*) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,scalar_t__) ;
 struct sk_buff* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;

int FUNC_5(struct nfc_llcp_sock *VAR_0)
{
 int VAR_1 = 0;
 struct nfc_llcp_local *VAR_2 = VAR_0->local;

 FUNC_1("Remote ready %d tx queue len %d remote rw %d",
   VAR_0->remote_ready, FUNC_3(&VAR_0->tx_pending_queue),
   VAR_0->remote_rw);


 while (VAR_0->remote_ready &&
        FUNC_3(&VAR_0->tx_pending_queue) < VAR_0->remote_rw) {
  struct sk_buff *VAR_3;

  VAR_3 = FUNC_2(&VAR_0->tx_queue);
  if (VAR_3 == ((void*)0))
   break;


  FUNC_0(VAR_0, VAR_3);

  FUNC_4(&VAR_2->tx_queue, VAR_3);
  VAR_1++;
 }

 return VAR_1;
}
