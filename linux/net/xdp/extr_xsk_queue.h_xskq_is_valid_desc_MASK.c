
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_queue {int chunk_mask; int invalid_descs; } ;
struct xdp_umem {int flags; int chunk_size_nohr; } ;
struct xdp_desc {int addr; int len; scalar_t__ options; } ;


 int VAR_0 ;
 int FUNC_0 (struct xsk_queue*,int) ;
 int FUNC_1 (struct xsk_queue*,int,int,struct xdp_umem*) ;

__attribute__((used)) static inline bool FUNC_2(struct xsk_queue *VAR_1, struct xdp_desc *VAR_2,
          struct xdp_umem *VAR_3)
{
 if (VAR_3->flags & VAR_0) {
  if (!FUNC_1(VAR_1, VAR_2->addr, VAR_2->len, VAR_3))
   return 0;

  if (VAR_2->len > VAR_3->chunk_size_nohr || VAR_2->options) {
   VAR_1->invalid_descs++;
   return 0;
  }

  return 1;
 }

 if (!FUNC_0(VAR_1, VAR_2->addr))
  return 0;

 if (((VAR_2->addr + VAR_2->len) & VAR_1->chunk_mask) != (VAR_2->addr & VAR_1->chunk_mask) ||
     VAR_2->options) {
  VAR_1->invalid_descs++;
  return 0;
 }

 return 1;
}
