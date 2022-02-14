
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct kmem_cache {int dummy; } ;
struct kasan_alloc_meta {size_t free_track_idx; size_t* free_pointer_tag; int * free_track; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct kasan_alloc_meta* FUNC_0 (struct kmem_cache*,void*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(struct kmem_cache *VAR_2,
  void *VAR_3, u8 VAR_4)
{
 struct kasan_alloc_meta *VAR_5;
 u8 VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_2, VAR_3);







 FUNC_1(&VAR_5->free_track[VAR_6], VAR_0);
}
