
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_ring_cons {scalar_t__ cached_prod; scalar_t__ cached_cons; scalar_t__* producer; } ;
typedef scalar_t__ __u32 ;



__attribute__((used)) static inline __u32 FUNC_0(struct xsk_ring_cons *VAR_0, __u32 VAR_1)
{
 __u32 VAR_2 = VAR_0->cached_prod - VAR_0->cached_cons;

 if (VAR_2 == 0) {
  VAR_0->cached_prod = *VAR_0->producer;
  VAR_2 = VAR_0->cached_prod - VAR_0->cached_cons;
 }

 return (VAR_2 > VAR_1) ? VAR_1 : VAR_2;
}
