
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {unsigned long offset; } ;
typedef int p ;


 int FUNC_0 () ;
 void* FUNC_1 (struct kmem_cache*,void*,unsigned long) ;
 void* FUNC_2 (struct kmem_cache*,void*) ;
 int FUNC_3 (void**,void**,int) ;

__attribute__((used)) static inline void *FUNC_4(struct kmem_cache *VAR_0, void *VAR_1)
{
 unsigned long VAR_2;
 void *VAR_3;

 if (!FUNC_0())
  return FUNC_2(VAR_0, VAR_1);

 VAR_2 = (unsigned long)VAR_1 + VAR_0->offset;
 FUNC_3(&VAR_3, (void **)VAR_2, sizeof(VAR_3));
 return FUNC_1(VAR_0, VAR_3, VAR_2);
}
