
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int frozen; } ;
struct kmem_cache_cpu {struct page* page; int tid; void* freelist; } ;
struct kmem_cache {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kmem_cache*,struct page*,void*,unsigned long) ;
 int FUNC_2 (struct kmem_cache*,struct page*,void*,struct kmem_cache_cpu*) ;
 void* FUNC_3 (struct kmem_cache*,struct page*) ;
 void* FUNC_4 (struct kmem_cache*,void*) ;
 scalar_t__ FUNC_5 (struct kmem_cache*) ;
 scalar_t__ FUNC_6 (int) ;
 void* FUNC_7 (struct kmem_cache*,int ,int,struct kmem_cache_cpu**) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct page*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (struct page*,int ) ;
 int FUNC_13 (struct kmem_cache*,int ,int) ;
 struct page* FUNC_14 (struct kmem_cache_cpu*) ;
 int FUNC_15 (struct kmem_cache_cpu*,struct page*) ;
 int FUNC_16 (struct kmem_cache*,int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void *FUNC_18(struct kmem_cache *VAR_5, gfp_t VAR_6, int VAR_7,
     unsigned long VAR_8, struct kmem_cache_cpu *VAR_9)
{
 void *VAR_10;
 struct page *VAR_11;

 VAR_11 = VAR_9->page;
 if (!VAR_11)
  goto new_slab;
redo:

 if (FUNC_17(!FUNC_9(VAR_11, VAR_7))) {
  int VAR_12 = VAR_7;

  if (VAR_7 != VAR_4 && !FUNC_10(VAR_7))
   VAR_12 = FUNC_11(VAR_7);

  if (FUNC_17(!FUNC_9(VAR_11, VAR_12))) {
   FUNC_16(VAR_5, VAR_0);
   FUNC_2(VAR_5, VAR_11, VAR_9->freelist, VAR_9);
   goto new_slab;
  }
 }






 if (FUNC_17(!FUNC_12(VAR_11, VAR_6))) {
  FUNC_2(VAR_5, VAR_11, VAR_9->freelist, VAR_9);
  goto new_slab;
 }


 VAR_10 = VAR_9->freelist;
 if (VAR_10)
  goto load_freelist;

 VAR_10 = FUNC_3(VAR_5, VAR_11);

 if (!VAR_10) {
  VAR_9->page = ((void*)0);
  FUNC_16(VAR_5, VAR_3);
  goto new_slab;
 }

 FUNC_16(VAR_5, VAR_1);

load_freelist:





 FUNC_0(!VAR_9->page->frozen);
 VAR_9->freelist = FUNC_4(VAR_5, VAR_10);
 VAR_9->tid = FUNC_8(VAR_9->tid);
 return VAR_10;

new_slab:

 if (FUNC_14(VAR_9)) {
  VAR_11 = VAR_9->page = FUNC_14(VAR_9);
  FUNC_15(VAR_9, VAR_11);
  FUNC_16(VAR_5, VAR_2);
  goto redo;
 }

 VAR_10 = FUNC_7(VAR_5, VAR_6, VAR_7, &VAR_9);

 if (FUNC_17(!VAR_10)) {
  FUNC_13(VAR_5, VAR_6, VAR_7);
  return ((void*)0);
 }

 VAR_11 = VAR_9->page;
 if (FUNC_6(!FUNC_5(VAR_5) && FUNC_12(VAR_11, VAR_6)))
  goto load_freelist;


 if (FUNC_5(VAR_5) &&
   !FUNC_1(VAR_5, VAR_11, VAR_10, VAR_8))
  goto new_slab;

 FUNC_2(VAR_5, VAR_11, FUNC_4(VAR_5, VAR_10), VAR_9);
 return VAR_10;
}
