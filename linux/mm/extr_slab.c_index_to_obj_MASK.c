
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {void* s_mem; } ;
struct kmem_cache {unsigned int size; } ;



__attribute__((used)) static inline void *FUNC_0(struct kmem_cache *VAR_0, struct page *VAR_1,
     unsigned int VAR_2)
{
 return VAR_1->s_mem + VAR_0->size * VAR_2;
}
