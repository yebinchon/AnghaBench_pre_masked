
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uuid_t ;
typedef int usec_t ;
struct TYPE_2__ {int lock; int JudyHS_array; } ;
struct page_cache {TYPE_1__ metrics_index; } ;
struct rrdengine_instance {struct page_cache pg_cache; } ;
struct rrdeng_page_descr {int start_time; } ;
struct pg_cache_page_index {int lock; } ;
typedef struct pg_cache_page_index* Pvoid_t ;


 int VAR_0 ;
 struct pg_cache_page_index** FUNC_0 (int ,int *,int) ;
 struct rrdeng_page_descr* FUNC_1 (struct pg_cache_page_index*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

usec_t FUNC_5(struct rrdengine_instance *VAR_1, uuid_t *VAR_2, usec_t VAR_3, usec_t VAR_4)
{
    struct page_cache *VAR_5 = &VAR_1->pg_cache;
    struct rrdeng_page_descr *VAR_6 = ((void*)0);
    Pvoid_t *VAR_7;
    struct pg_cache_page_index *VAR_8;

    FUNC_3(&VAR_5->metrics_index.lock);
    VAR_7 = FUNC_0(VAR_5->metrics_index.JudyHS_array, VAR_2, sizeof(uuid_t));
    if (FUNC_2(((void*)0) != VAR_7)) {
        VAR_8 = *VAR_7;
    }
    FUNC_4(&VAR_5->metrics_index.lock);
    if (((void*)0) == VAR_7) {
        return VAR_0;
    }

    FUNC_3(&VAR_8->lock);
    VAR_6 = FUNC_1(VAR_8, VAR_3, VAR_4);
    if (((void*)0) == VAR_6) {
        FUNC_4(&VAR_8->lock);
        return VAR_0;
    }
    FUNC_4(&VAR_8->lock);
    return VAR_6->start_time;
}
