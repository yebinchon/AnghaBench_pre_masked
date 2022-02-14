
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kmem_cache {int flags; } ;
struct kasan_track {int dummy; } ;
struct kasan_alloc_meta {struct kasan_track alloc_track; } ;


 int VAR_0 ;
 int FUNC_0 (struct kmem_cache*,void*,void const*) ;
 struct kasan_alloc_meta* FUNC_1 (struct kmem_cache*,void*) ;
 struct kasan_track* FUNC_2 (struct kmem_cache*,void*,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct kasan_track*,char*) ;

__attribute__((used)) static void FUNC_5(struct kmem_cache *VAR_1, void *VAR_2,
    const void *VAR_3, u8 VAR_4)
{
 struct kasan_alloc_meta *VAR_5 = FUNC_1(VAR_1, VAR_2);

 if (VAR_1->flags & VAR_0) {
  struct kasan_track *VAR_6;

  FUNC_4(&VAR_5->alloc_track, "Allocated");
  FUNC_3("\n");
  VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_4);
  FUNC_4(VAR_6, "Freed");
  FUNC_3("\n");
 }

 FUNC_0(VAR_1, VAR_2, VAR_3);
}
