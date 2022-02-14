
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int alloc_meta_offset; } ;
struct kmem_cache {TYPE_1__ kasan_info; } ;
typedef void kasan_alloc_meta ;



struct kasan_alloc_meta *FUNC_0(struct kmem_cache *VAR_0,
     const void *VAR_1)
{
 return (void *)VAR_1 + VAR_0->kasan_info.alloc_meta_offset;
}
