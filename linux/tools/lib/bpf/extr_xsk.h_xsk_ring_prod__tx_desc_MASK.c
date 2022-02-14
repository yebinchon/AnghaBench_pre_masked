
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_ring_prod {size_t mask; scalar_t__ ring; } ;
struct xdp_desc {int dummy; } ;
typedef size_t __u32 ;



__attribute__((used)) static inline struct xdp_desc *FUNC_0(struct xsk_ring_prod *VAR_0,
            __u32 VAR_1)
{
 struct xdp_desc *VAR_2 = (struct xdp_desc *)VAR_0->ring;

 return &VAR_2[VAR_1 & VAR_0->mask];
}
