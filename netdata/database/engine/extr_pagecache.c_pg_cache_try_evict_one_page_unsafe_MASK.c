
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; struct page_cache_descr* head; } ;
struct page_cache {TYPE_1__ replaceQ; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;
struct rrdeng_page_descr {int dummy; } ;
struct page_cache_descr {unsigned long flags; struct rrdeng_page_descr* descr; struct page_cache_descr* next; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_1 (struct rrdeng_page_descr*) ;
 int FUNC_2 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 scalar_t__ FUNC_3 (struct rrdeng_page_descr*,int) ;
 int FUNC_4 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_5 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_6 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct rrdengine_instance *VAR_2)
{
    struct page_cache *VAR_3 = &VAR_2->pg_cache;
    unsigned long VAR_4;
    struct rrdeng_page_descr *VAR_5;
    struct page_cache_descr *VAR_6 = ((void*)0);

    FUNC_7(&VAR_3->replaceQ.lock);
    for (VAR_6 = VAR_3->replaceQ.head ; ((void*)0) != VAR_6 ; VAR_6 = VAR_6->next) {
        VAR_5 = VAR_6->descr;

        FUNC_4(VAR_2, VAR_5);
        VAR_4 = VAR_6->flags;
        if ((VAR_4 & VAR_1) && !(VAR_4 & VAR_0) && FUNC_3(VAR_5, 1)) {

            FUNC_0(VAR_2, VAR_5);
            FUNC_1(VAR_5);
            FUNC_2(VAR_2, VAR_5);

            FUNC_5(VAR_2, VAR_5);
            FUNC_8(&VAR_3->replaceQ.lock);

            FUNC_6(VAR_2, VAR_5);

            return 1;
        }
        FUNC_5(VAR_2, VAR_5);
    }
    FUNC_8(&VAR_3->replaceQ.lock);


    return 0;
}
