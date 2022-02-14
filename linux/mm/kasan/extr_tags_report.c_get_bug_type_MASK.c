
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct page {struct kmem_cache* slab_cache; } ;
struct kmem_cache {int dummy; } ;
struct kasan_alloc_meta {scalar_t__* free_pointer_tag; } ;
struct kasan_access_info {int access_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 struct kasan_alloc_meta* FUNC_1 (struct kmem_cache*,void*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct page* FUNC_3 (void const*) ;
 void* FUNC_4 (struct kmem_cache*,struct page*,void*) ;
 void* FUNC_5 (int ) ;

const char *FUNC_6(struct kasan_access_info *VAR_1)
{
 return "invalid-access";
}
