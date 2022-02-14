
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdengine_instance {int dummy; } ;
struct rrdeng_page_descr {struct page_cache_descr* pg_cache_descr; } ;
struct page_cache_descr {unsigned long flags; } ;


 int FUNC_0 (struct rrdeng_page_descr*) ;
 int FUNC_1 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_2 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;

unsigned long FUNC_3(struct rrdengine_instance *VAR_0, struct rrdeng_page_descr *VAR_1)
{
    struct page_cache_descr *VAR_2 = VAR_1->pg_cache_descr;
    unsigned long VAR_3;

    FUNC_1(VAR_0, VAR_1);
    FUNC_0(VAR_1);
    VAR_3 = VAR_2->flags;
    FUNC_2(VAR_0, VAR_1);

    return VAR_3;
}
