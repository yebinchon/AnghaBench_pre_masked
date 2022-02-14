
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int page_cache_descriptors; } ;
struct rrdengine_instance {TYPE_1__ stats; } ;
struct page_cache_descr {int mutex; int cond; } ;


 int FUNC_0 (struct page_cache_descr*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct rrdengine_instance *VAR_0, struct page_cache_descr *VAR_1)
{
    FUNC_2(&VAR_1->cond);
    FUNC_3(&VAR_1->mutex);
    FUNC_0(VAR_1);
    FUNC_1(&VAR_0->stats.page_cache_descriptors, -1);
}
