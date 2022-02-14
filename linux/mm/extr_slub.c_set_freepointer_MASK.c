
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {unsigned long offset; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (struct kmem_cache*,void*,unsigned long) ;

__attribute__((used)) static inline void FUNC_2(struct kmem_cache *VAR_0, void *VAR_1, void *VAR_2)
{
 unsigned long VAR_3 = (unsigned long)VAR_1 + VAR_0->offset;





 *(void **)VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_3);
}
