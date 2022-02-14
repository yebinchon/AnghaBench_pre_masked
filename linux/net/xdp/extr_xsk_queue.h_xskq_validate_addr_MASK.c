
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct xsk_queue {unsigned int cons_tail; unsigned int cons_head; unsigned int ring_mask; int chunk_mask; scalar_t__ ring; } ;
struct xdp_umem_ring {int * desc; } ;
struct xdp_umem {int flags; int chunk_size_nohr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct xsk_queue*,int) ;
 scalar_t__ FUNC_2 (struct xsk_queue*,int,int ,struct xdp_umem*) ;

__attribute__((used)) static inline u64 *FUNC_3(struct xsk_queue *VAR_1, u64 *VAR_2,
          struct xdp_umem *VAR_3)
{
 while (VAR_1->cons_tail != VAR_1->cons_head) {
  struct xdp_umem_ring *VAR_4 = (struct xdp_umem_ring *)VAR_1->ring;
  unsigned int VAR_5 = VAR_1->cons_tail & VAR_1->ring_mask;

  *VAR_2 = FUNC_0(VAR_4->desc[VAR_5]) & VAR_1->chunk_mask;

  if (VAR_3->flags & VAR_0) {
   if (FUNC_2(VAR_1, *VAR_2,
        VAR_3->chunk_size_nohr,
        VAR_3))
    return VAR_2;
   goto out;
  }

  if (FUNC_1(VAR_1, *VAR_2))
   return VAR_2;

out:
  VAR_1->cons_tail++;
 }

 return ((void*)0);
}
