
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct rrdengine_instance {int dummy; } ;
struct rrdeng_page_descr {struct page_cache_descr* pg_cache_descr; int * id; } ;
struct page_cache_descr {int flags; int refcnt; void* page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 struct rrdeng_page_descr* FUNC_2 () ;
 int FUNC_3 (struct rrdeng_page_descr*) ;
 int FUNC_4 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_5 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 scalar_t__ FUNC_6 (int) ;

void *FUNC_7(struct rrdengine_instance *VAR_5, uuid_t *VAR_6, struct rrdeng_page_descr **VAR_7)
{
    struct rrdeng_page_descr *VAR_8;
    struct page_cache_descr *VAR_9;
    void *VAR_10;


    VAR_8 = FUNC_2();
    VAR_8->id = VAR_6;
    VAR_10 = FUNC_1(VAR_1);
    FUNC_4(VAR_5, VAR_8);
    VAR_9 = VAR_8->pg_cache_descr;
    VAR_9->page = VAR_10;
    VAR_9->flags = VAR_2 | VAR_3 ;
    VAR_9->refcnt = 1;

    FUNC_0(VAR_0, "Created new page:");
    if (FUNC_6(VAR_4 & VAR_0))
        FUNC_3(VAR_8);
    FUNC_5(VAR_5, VAR_8);
    *VAR_7 = VAR_8;
    return VAR_10;
}
