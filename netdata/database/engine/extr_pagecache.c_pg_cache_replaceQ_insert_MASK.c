
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct page_cache {TYPE_1__ replaceQ; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;
struct rrdeng_page_descr {int dummy; } ;


 int FUNC_0 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rrdengine_instance *VAR_0,
                              struct rrdeng_page_descr *VAR_1)
{
    struct page_cache *VAR_2 = &VAR_0->pg_cache;

    FUNC_1(&VAR_2->replaceQ.lock);
    FUNC_0(VAR_0, VAR_1);
    FUNC_2(&VAR_2->replaceQ.lock);
}
