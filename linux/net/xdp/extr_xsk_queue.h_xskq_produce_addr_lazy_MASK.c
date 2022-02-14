
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xsk_queue {size_t ring_mask; int prod_head; scalar_t__ ring; } ;
struct xdp_umem_ring {int * desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct xsk_queue*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1(struct xsk_queue *VAR_2, u64 VAR_3)
{
 struct xdp_umem_ring *VAR_4 = (struct xdp_umem_ring *)VAR_2->ring;

 if (FUNC_0(VAR_2, VAR_2->prod_head, VAR_1) == 0)
  return -VAR_0;


 VAR_4->desc[VAR_2->prod_head++ & VAR_2->ring_mask] = VAR_3;
 return 0;
}
