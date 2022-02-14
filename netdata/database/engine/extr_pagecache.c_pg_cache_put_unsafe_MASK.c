
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdeng_page_descr {struct page_cache_descr* pg_cache_descr; } ;
struct page_cache_descr {scalar_t__ refcnt; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct rrdeng_page_descr*) ;

void FUNC_1(struct rrdeng_page_descr *VAR_1)
{
    struct page_cache_descr *VAR_2 = VAR_1->pg_cache_descr;

    VAR_2->flags &= ~VAR_0;
    if (0 == --VAR_2->refcnt) {
        FUNC_0(VAR_1);
    }
}
