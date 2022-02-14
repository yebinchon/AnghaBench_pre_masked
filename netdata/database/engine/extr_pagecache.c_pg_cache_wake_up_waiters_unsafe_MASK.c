
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdeng_page_descr {struct page_cache_descr* pg_cache_descr; } ;
struct page_cache_descr {int cond; scalar_t__ waiters; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct rrdeng_page_descr *VAR_0)
{
    struct page_cache_descr *VAR_1 = VAR_0->pg_cache_descr;
    if (VAR_1->waiters)
        FUNC_0(&VAR_1->cond);
}
