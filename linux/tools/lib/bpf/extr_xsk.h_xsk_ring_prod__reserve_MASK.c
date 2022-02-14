
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsk_ring_prod {size_t cached_prod; } ;
typedef size_t __u32 ;


 size_t FUNC_0 (struct xsk_ring_prod*,size_t) ;

__attribute__((used)) static inline size_t FUNC_1(struct xsk_ring_prod *VAR_0,
         size_t VAR_1, __u32 *VAR_2)
{
 if (FUNC_0(VAR_0, VAR_1) < VAR_1)
  return 0;

 *VAR_2 = VAR_0->cached_prod;
 VAR_0->cached_prod += VAR_1;

 return VAR_1;
}
