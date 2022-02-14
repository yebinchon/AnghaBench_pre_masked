
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_umem {int xsk_list_lock; int xsk_list; } ;
struct xdp_sock {int list; int tx; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(struct xdp_umem *VAR_0, struct xdp_sock *VAR_1)
{
 unsigned long VAR_2;

 if (!VAR_1->tx)
  return;

 FUNC_1(&VAR_0->xsk_list_lock, VAR_2);
 FUNC_0(&VAR_1->list, &VAR_0->xsk_list);
 FUNC_2(&VAR_0->xsk_list_lock, VAR_2);
}
