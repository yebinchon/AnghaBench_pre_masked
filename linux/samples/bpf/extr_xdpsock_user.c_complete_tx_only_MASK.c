
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct xsk_socket_info {unsigned int tx_npkts; scalar_t__ outstanding_tx; TYPE_1__* umem; int tx; } ;
struct TYPE_2__ {int cq; } ;


 int VAR_0 ;
 int FUNC_0 (struct xsk_socket_info*) ;
 int VAR_1 ;
 unsigned int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,unsigned int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct xsk_socket_info *VAR_2)
{
 unsigned int VAR_3;
 u32 VAR_4;

 if (!VAR_2->outstanding_tx)
  return;

 if (!VAR_1 || FUNC_3(&VAR_2->tx))
  FUNC_0(VAR_2);

 VAR_3 = FUNC_1(&VAR_2->umem->cq, VAR_0, &VAR_4);
 if (VAR_3 > 0) {
  FUNC_2(&VAR_2->umem->cq, VAR_3);
  VAR_2->outstanding_tx -= VAR_3;
  VAR_2->tx_npkts += VAR_3;
 }
}
