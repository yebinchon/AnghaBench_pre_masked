
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xsk_umem_info {int cq; int fq; } ;
struct xsk_socket_info {size_t outstanding_tx; unsigned int tx_npkts; struct xsk_umem_info* umem; int tx; } ;
struct pollfd {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct xsk_socket_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct pollfd*,int ,int ) ;
 int * FUNC_3 (int *,int ) ;
 unsigned int FUNC_4 (int *,size_t,scalar_t__*) ;
 int FUNC_5 (int *,unsigned int) ;
 int * FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned int,scalar_t__*) ;
 int FUNC_9 (int *,unsigned int) ;

__attribute__((used)) static inline void FUNC_10(struct xsk_socket_info *VAR_4,
         struct pollfd *VAR_5)
{
 struct xsk_umem_info *VAR_6 = VAR_4->umem;
 u32 VAR_7 = 0, VAR_8 = 0;
 unsigned int VAR_9;
 size_t VAR_10;

 if (!VAR_4->outstanding_tx)
  return;

 if (!VAR_2 || FUNC_7(&VAR_4->tx))
  FUNC_1(VAR_4);

 VAR_10 = (VAR_4->outstanding_tx > VAR_0) ? VAR_0 :
  VAR_4->outstanding_tx;


 VAR_9 = FUNC_4(&VAR_6->cq, VAR_10, &VAR_7);
 if (VAR_9 > 0) {
  unsigned int VAR_11;
  int VAR_12;

  VAR_12 = FUNC_8(&VAR_6->fq, VAR_9, &VAR_8);
  while (VAR_12 != VAR_9) {
   if (VAR_12 < 0)
    FUNC_0(-VAR_12);
   if (FUNC_7(&VAR_6->fq))
    VAR_12 = FUNC_2(VAR_5, VAR_1, VAR_3);
   VAR_12 = FUNC_8(&VAR_6->fq, VAR_9, &VAR_8);
  }

  for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
   *FUNC_6(&VAR_6->fq, VAR_8++) =
    *FUNC_3(&VAR_6->cq, VAR_7++);

  FUNC_9(&VAR_4->umem->fq, VAR_9);
  FUNC_5(&VAR_4->umem->cq, VAR_9);
  VAR_4->outstanding_tx -= VAR_9;
  VAR_4->tx_npkts += VAR_9;
 }
}
