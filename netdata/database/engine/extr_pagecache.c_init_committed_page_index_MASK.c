
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ nr_committed_pages; scalar_t__ latest_corr_id; int lock; scalar_t__ JudyL_array; } ;
struct page_cache {TYPE_1__ committed_page_index; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;
typedef scalar_t__ Pvoid_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rrdengine_instance *VAR_0)
{
    struct page_cache *VAR_1 = &VAR_0->pg_cache;

    VAR_1->committed_page_index.JudyL_array = (Pvoid_t) ((void*)0);
    FUNC_0(0 == FUNC_1(&VAR_1->committed_page_index.lock));
    VAR_1->committed_page_index.latest_corr_id = 0;
    VAR_1->committed_page_index.nr_committed_pages = 0;
}
