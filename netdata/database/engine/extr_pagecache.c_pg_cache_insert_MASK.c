
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uuid_t ;
struct TYPE_4__ {int pg_cache_insertions; } ;
struct TYPE_3__ {int lock; int JudyHS_array; } ;
struct page_cache {int pg_cache_rwlock; int page_descriptors; TYPE_1__ metrics_index; } ;
struct rrdengine_instance {TYPE_2__ stats; struct page_cache pg_cache; } ;
struct rrdeng_page_descr {unsigned long pg_cache_descr_state; int start_time; int lock; int JudyL_array; int id; struct page_cache_descr* pg_cache_descr; } ;
struct pg_cache_page_index {unsigned long pg_cache_descr_state; int start_time; int lock; int JudyL_array; int id; struct page_cache_descr* pg_cache_descr; } ;
struct page_cache_descr {int flags; } ;
typedef int Word_t ;
typedef struct rrdeng_page_descr* Pvoid_t ;


 struct rrdeng_page_descr** FUNC_0 (int ,int ,int) ;
 struct rrdeng_page_descr** FUNC_1 (int *,int ,int ) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rrdeng_page_descr*,struct rrdeng_page_descr*) ;
 int FUNC_4 (struct rrdengine_instance*,struct rrdeng_page_descr*) ;
 int FUNC_5 (struct rrdengine_instance*,int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct rrdengine_instance *VAR_5, struct pg_cache_page_index *VAR_6,
                     struct rrdeng_page_descr *VAR_7)
{
    struct page_cache *VAR_8 = &VAR_5->pg_cache;
    Pvoid_t *VAR_9;
    struct pg_cache_page_index *VAR_10;
    unsigned long VAR_11 = VAR_7->pg_cache_descr_state;

    if (0 != VAR_11) {

        struct page_cache_descr *VAR_12 = VAR_7->pg_cache_descr;

        FUNC_2(VAR_11 & VAR_0);
        if (VAR_12->flags & VAR_3) {
            FUNC_5(VAR_5, 1);
            if (!(VAR_12->flags & VAR_2))
                FUNC_4(VAR_5, VAR_7);
        }
    }

    if (FUNC_6(((void*)0) == VAR_6)) {
        FUNC_7(&VAR_8->metrics_index.lock);
        VAR_9 = FUNC_0(VAR_8->metrics_index.JudyHS_array, VAR_7->id, sizeof(uuid_t));
        FUNC_2(((void*)0) != VAR_9);
        VAR_10 = *VAR_9;
        FUNC_8(&VAR_8->metrics_index.lock);
    } else {
        VAR_10 = VAR_6;
    }

    FUNC_9(&VAR_10->lock);
    VAR_9 = FUNC_1(&VAR_10->JudyL_array, (Word_t)(VAR_7->start_time / VAR_4), VAR_1);
    *VAR_9 = VAR_7;
    FUNC_3(VAR_10, VAR_7);
    FUNC_10(&VAR_10->lock);

    FUNC_9(&VAR_8->pg_cache_rwlock);
    ++VAR_5->stats.pg_cache_insertions;
    ++VAR_8->page_descriptors;
    FUNC_10(&VAR_8->pg_cache_rwlock);
}
