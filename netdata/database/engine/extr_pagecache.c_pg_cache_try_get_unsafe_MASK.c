
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rrdeng_page_descr {struct page_cache_descr* pg_cache_descr; } ;
struct page_cache_descr {int flags; scalar_t__ refcnt; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct rrdeng_page_descr *VAR_2, int VAR_3)
{
    struct page_cache_descr *VAR_4 = VAR_2->pg_cache_descr;

    if ((VAR_4->flags & (VAR_0 | VAR_1)) ||
        (VAR_3 && VAR_4->refcnt)) {
        return 0;
    }
    if (VAR_3)
        VAR_4->flags |= VAR_0;
    ++VAR_4->refcnt;

    return 1;
}
