
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct kmem_cache {int dummy; } ;
struct kasan_track {int dummy; } ;
struct kasan_alloc_meta {scalar_t__* free_pointer_tag; int free_track_idx; struct kasan_track* free_track; } ;


 int VAR_0 ;
 struct kasan_alloc_meta* FUNC_0 (struct kmem_cache*,void*) ;

__attribute__((used)) static struct kasan_track *FUNC_1(struct kmem_cache *VAR_1,
  void *VAR_2, u8 VAR_3)
{
 struct kasan_alloc_meta *VAR_4;
 int VAR_5 = 0;

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 return &VAR_4->free_track[VAR_5];
}
