
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_ring_prod {scalar_t__ cached_cons; scalar_t__ cached_prod; scalar_t__* consumer; scalar_t__ size; } ;
typedef scalar_t__ __u32 ;



__attribute__((used)) static inline __u32 FUNC_0(struct xsk_ring_prod *VAR_0, __u32 VAR_1)
{
 __u32 VAR_2 = VAR_0->cached_cons - VAR_0->cached_prod;

 if (VAR_2 >= VAR_1)
  return VAR_2;
 VAR_0->cached_cons = *VAR_0->consumer + VAR_0->size;

 return VAR_0->cached_cons - VAR_0->cached_prod;
}
