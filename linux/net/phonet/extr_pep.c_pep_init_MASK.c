
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_destruct; } ;
struct pep_sock {int init_enable; scalar_t__ aligned; int tx_fc; int rx_fc; scalar_t__ rx_credits; int pipe_handle; scalar_t__ peer_type; scalar_t__ ifindex; int tx_credits; int ctrlreq_queue; int * listener; int hlist; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 struct pep_sock* FUNC_2 (struct sock*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_3)
{
 struct pep_sock *VAR_4 = FUNC_2(VAR_3);

 VAR_3->sk_destruct = VAR_2;
 FUNC_0(&VAR_4->hlist);
 VAR_4->listener = ((void*)0);
 FUNC_3(&VAR_4->ctrlreq_queue);
 FUNC_1(&VAR_4->tx_credits, 0);
 VAR_4->ifindex = 0;
 VAR_4->peer_type = 0;
 VAR_4->pipe_handle = VAR_1;
 VAR_4->rx_credits = 0;
 VAR_4->rx_fc = VAR_4->tx_fc = VAR_0;
 VAR_4->init_enable = 1;
 VAR_4->aligned = 0;
 return 0;
}
