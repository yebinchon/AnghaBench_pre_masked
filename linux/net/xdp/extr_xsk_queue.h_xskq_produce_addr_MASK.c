
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct xsk_queue {size_t ring_mask; int prod_tail; TYPE_1__* ring; } ;
struct xdp_umem_ring {int * desc; } ;
struct TYPE_2__ {int producer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (struct xsk_queue*,int ,int) ;

__attribute__((used)) static inline int FUNC_3(struct xsk_queue *VAR_1, u64 VAR_2)
{
 struct xdp_umem_ring *VAR_3 = (struct xdp_umem_ring *)VAR_1->ring;

 if (FUNC_2(VAR_1, VAR_1->prod_tail, 1) == 0)
  return -VAR_0;


 VAR_3->desc[VAR_1->prod_tail++ & VAR_1->ring_mask] = VAR_2;


 FUNC_1();

 FUNC_0(VAR_1->ring->producer, VAR_1->prod_tail);
 return 0;
}
