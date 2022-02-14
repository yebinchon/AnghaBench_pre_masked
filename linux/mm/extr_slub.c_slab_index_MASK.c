
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {int size; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static inline unsigned int FUNC_1(void *VAR_0, struct kmem_cache *VAR_1, void *VAR_2)
{
 return (FUNC_0(VAR_0) - VAR_2) / VAR_1->size;
}
