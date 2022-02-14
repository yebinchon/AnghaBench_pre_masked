
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmem_cache {size_t object_size; int flags; size_t inuse; size_t size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline size_t FUNC_0(const struct kmem_cache *VAR_5)
{

 return VAR_5->object_size;
}
