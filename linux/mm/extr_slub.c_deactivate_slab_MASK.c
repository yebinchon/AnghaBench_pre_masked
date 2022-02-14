
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {void* freelist; unsigned long counters; int inuse; scalar_t__ frozen; } ;
struct kmem_cache_node {scalar_t__ nr_partial; int list_lock; } ;
struct kmem_cache_cpu {int * freelist; int * page; } ;
struct kmem_cache {scalar_t__ min_partial; } ;
typedef enum slab_modes { ____Placeholder_slab_modes } slab_modes ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kmem_cache*,struct page*,void*,unsigned long,void*,unsigned long,char*) ;
 int FUNC_2 (struct kmem_cache*,struct kmem_cache_node*,struct page*) ;
 int FUNC_3 (struct kmem_cache_node*,struct page*,int) ;
 int FUNC_4 (struct kmem_cache*,struct page*) ;
 void* FUNC_5 (struct kmem_cache*,void*) ;
 struct kmem_cache_node* FUNC_6 (struct kmem_cache*,int ) ;
 scalar_t__ FUNC_7 (struct kmem_cache*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct kmem_cache*,struct kmem_cache_node*,struct page*) ;
 int FUNC_10 (struct kmem_cache_node*,struct page*) ;
 int FUNC_11 (struct kmem_cache*,void*,void*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct kmem_cache*,int) ;

__attribute__((used)) static void FUNC_15(struct kmem_cache *VAR_6, struct page *VAR_7,
    void *VAR_8, struct kmem_cache_cpu *VAR_9)
{
 enum slab_modes { M_NONE, M_PARTIAL, M_FULL, M_FREE };
 struct kmem_cache_node *VAR_10 = FUNC_6(VAR_6, FUNC_8(VAR_7));
 int VAR_11 = 0;
 enum slab_modes VAR_12 = M_NONE, VAR_13 = M_NONE;
 void *VAR_14;
 int VAR_15 = VAR_3;
 struct page VAR_16;
 struct page VAR_17;

 if (VAR_7->freelist) {
  FUNC_14(VAR_6, VAR_2);
  VAR_15 = VAR_4;
 }
 while (VAR_8 && (VAR_14 = FUNC_5(VAR_6, VAR_8))) {
  void *VAR_18;
  unsigned long VAR_19;

  do {
   VAR_18 = VAR_7->freelist;
   VAR_19 = VAR_7->counters;
   FUNC_11(VAR_6, VAR_8, VAR_18);
   VAR_16.counters = VAR_19;
   VAR_16.inuse--;
   FUNC_0(!VAR_16.frozen);

  } while (!FUNC_1(VAR_6, VAR_7,
   VAR_18, VAR_19,
   VAR_8, VAR_16.counters,
   "drain percpu freelist"));

  VAR_8 = VAR_14;
 }
redo:

 VAR_17.freelist = VAR_7->freelist;
 VAR_17.counters = VAR_7->counters;
 FUNC_0(!VAR_17.frozen);


 VAR_16.counters = VAR_17.counters;
 if (VAR_8) {
  VAR_16.inuse--;
  FUNC_11(VAR_6, VAR_8, VAR_17.freelist);
  VAR_16.freelist = VAR_8;
 } else
  VAR_16.freelist = VAR_17.freelist;

 VAR_16.frozen = 0;

 if (!VAR_16.inuse && VAR_10->nr_partial >= VAR_6->min_partial)
  VAR_13 = M_FREE;
 else if (VAR_16.freelist) {
  VAR_13 = M_PARTIAL;
  if (!VAR_11) {
   VAR_11 = 1;





   FUNC_12(&VAR_10->list_lock);
  }
 } else {
  VAR_13 = M_FULL;
  if (FUNC_7(VAR_6) && !VAR_11) {
   VAR_11 = 1;





   FUNC_12(&VAR_10->list_lock);
  }
 }

 if (VAR_12 != VAR_13) {
  if (VAR_12 == M_PARTIAL)
   FUNC_10(VAR_10, VAR_7);
  else if (VAR_12 == M_FULL)
   FUNC_9(VAR_6, VAR_10, VAR_7);

  if (VAR_13 == M_PARTIAL)
   FUNC_3(VAR_10, VAR_7, VAR_15);
  else if (VAR_13 == M_FULL)
   FUNC_2(VAR_6, VAR_10, VAR_7);
 }

 VAR_12 = VAR_13;
 if (!FUNC_1(VAR_6, VAR_7,
    VAR_17.freelist, VAR_17.counters,
    VAR_16.freelist, VAR_16.counters,
    "unfreezing slab"))
  goto redo;

 if (VAR_11)
  FUNC_13(&VAR_10->list_lock);

 if (VAR_13 == M_PARTIAL)
  FUNC_14(VAR_6, VAR_15);
 else if (VAR_13 == M_FULL)
  FUNC_14(VAR_6, VAR_1);
 else if (VAR_13 == M_FREE) {
  FUNC_14(VAR_6, VAR_0);
  FUNC_4(VAR_6, VAR_7);
  FUNC_14(VAR_6, VAR_5);
 }

 VAR_9->page = ((void*)0);
 VAR_9->freelist = ((void*)0);
}
