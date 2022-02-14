
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_queue {unsigned int cons_tail; unsigned int cons_head; unsigned int ring_mask; scalar_t__ ring; } ;
struct xdp_umem {int dummy; } ;
struct xdp_rxtx_ring {int * desc; } ;
struct xdp_desc {int dummy; } ;


 struct xdp_desc FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct xsk_queue*,struct xdp_desc*,struct xdp_umem*) ;

__attribute__((used)) static inline struct xdp_desc *FUNC_2(struct xsk_queue *VAR_0,
        struct xdp_desc *VAR_1,
        struct xdp_umem *VAR_2)
{
 while (VAR_0->cons_tail != VAR_0->cons_head) {
  struct xdp_rxtx_ring *VAR_3 = (struct xdp_rxtx_ring *)VAR_0->ring;
  unsigned int VAR_4 = VAR_0->cons_tail & VAR_0->ring_mask;

  *VAR_1 = FUNC_0(VAR_3->desc[VAR_4]);
  if (FUNC_1(VAR_0, VAR_1, VAR_2))
   return VAR_1;

  VAR_0->cons_tail++;
 }

 return ((void*)0);
}
