
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct page* next; int inuse; scalar_t__ frozen; int freelist; int counters; } ;
struct kmem_cache_node {scalar_t__ nr_partial; int list_lock; } ;
struct kmem_cache_cpu {struct page* partial; } ;
struct kmem_cache {scalar_t__ min_partial; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct kmem_cache*,struct page*,int ,int ,int ,int ,char*) ;
 int FUNC_2 (struct kmem_cache_node*,struct page*,int ) ;
 int FUNC_3 (struct kmem_cache*,struct page*) ;
 struct kmem_cache_node* FUNC_4 (struct kmem_cache*,int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct kmem_cache*,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct kmem_cache *VAR_4,
  struct kmem_cache_cpu *VAR_5)
{
}
