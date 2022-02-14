
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {size_t size; void (* ctor ) (void*) ;int * objs; scalar_t__ nr_objs; int lock; } ;


 struct kmem_cache* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;

struct kmem_cache *
FUNC_2(const char *VAR_0, size_t VAR_1, size_t VAR_2,
 unsigned long VAR_3, void (*VAR_4)(void *))
{
 struct kmem_cache *VAR_5 = FUNC_0(sizeof(*VAR_5));

 FUNC_1(&VAR_5->lock, ((void*)0));
 VAR_5->size = VAR_1;
 VAR_5->nr_objs = 0;
 VAR_5->objs = ((void*)0);
 VAR_5->ctor = VAR_4;
 return VAR_5;
}
