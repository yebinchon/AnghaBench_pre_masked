
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int page_cache_descriptors; } ;
struct rrdengine_instance {TYPE_1__ stats; } ;
struct page_cache_descr {int mutex; int cond; scalar_t__ waiters; scalar_t__ refcnt; int * next; int prev; scalar_t__ flags; int * page; } ;


 int FUNC_0 (int) ;
 struct page_cache_descr* FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

struct page_cache_descr *FUNC_5(struct rrdengine_instance *VAR_0)
{
    struct page_cache_descr *VAR_1;

    VAR_1 = FUNC_1(sizeof(*VAR_1));
    FUNC_2(&VAR_0->stats.page_cache_descriptors, 1);
    VAR_1->page = ((void*)0);
    VAR_1->flags = 0;
    VAR_1->prev = *(VAR_1->next = ((void*)0));
    VAR_1->refcnt = 0;
    VAR_1->waiters = 0;
    FUNC_0(0 == FUNC_3(&VAR_1->cond));
    FUNC_0(0 == FUNC_4(&VAR_1->mutex));

    return VAR_1;
}
