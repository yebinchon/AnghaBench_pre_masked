
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* l2_cache; TYPE_2__* cache; } ;
typedef TYPE_1__ rtree_ctx_t ;
struct TYPE_5__ {int * leaf; void* leafkey; } ;
typedef TYPE_2__ rtree_ctx_cache_elm_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void* VAR_2 ;

void
FUNC_0(rtree_ctx_t *VAR_3) {
 for (unsigned VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  rtree_ctx_cache_elm_t *VAR_5 = &VAR_3->cache[VAR_4];
  VAR_5->leafkey = VAR_2;
  VAR_5->leaf = ((void*)0);
 }
 for (unsigned VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  rtree_ctx_cache_elm_t *VAR_7 = &VAR_3->l2_cache[VAR_6];
  VAR_7->leafkey = VAR_2;
  VAR_7->leaf = ((void*)0);
 }
}
