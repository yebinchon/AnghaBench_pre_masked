
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
typedef int usec_t ;
struct rrdengine_instance {int dummy; } ;
struct rrdeng_page_descr {struct page_cache_descr* pg_cache_descr; } ;
struct page_cache_descr {void* page; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct rrdeng_page_descr* FUNC_1 (struct rrdengine_instance*,int *,int *,int ) ;

void *FUNC_2(struct rrdengine_instance *VAR_1, uuid_t *VAR_2, usec_t VAR_3, void **VAR_4)
{
    struct rrdeng_page_descr *VAR_5;
    struct page_cache_descr *VAR_6;

    FUNC_0(VAR_0, "Reading existing page:");
    VAR_5 = FUNC_1(VAR_1, ((void*)0), VAR_2, VAR_3);
    if (((void*)0) == VAR_5) {
        *VAR_4 = ((void*)0);

        return ((void*)0);
    }
    *VAR_4 = VAR_5;
    VAR_6 = VAR_5->pg_cache_descr;

    return VAR_6->page;
}
