
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int offset; } ;


 void* FUNC_0 (struct kmem_cache*,void*) ;

__attribute__((used)) static inline void *FUNC_1(struct kmem_cache *VAR_0, void *VAR_1)
{
 return FUNC_0(VAR_0, VAR_1 + VAR_0->offset);
}
