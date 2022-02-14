
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* usec_t ;
struct rrdeng_page_descr {void* end_time; void* start_time; } ;
struct pg_cache_page_index {void* latest_time; void* oldest_time; int lock; int JudyL_array; } ;
typedef scalar_t__ Word_t ;
typedef struct rrdeng_page_descr* Pvoid_t ;


 void* VAR_0 ;
 struct rrdeng_page_descr** FUNC_0 (int ,scalar_t__*,int ) ;
 struct rrdeng_page_descr** FUNC_1 (int ,scalar_t__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct pg_cache_page_index *VAR_2)
{
    Pvoid_t *VAR_3, *VAR_4;
    Word_t VAR_5, VAR_6;
    struct rrdeng_page_descr *VAR_7;
    usec_t VAR_8 = VAR_0;
    usec_t VAR_9 = VAR_0;

    FUNC_5(&VAR_2->lock);

    VAR_5 = (Word_t)0;
    VAR_3 = FUNC_0(VAR_2->JudyL_array, &VAR_5, VAR_1);
    if (FUNC_3(((void*)0) != VAR_3)) {
        VAR_7 = *VAR_3;
        VAR_8 = VAR_7->start_time;
    }
    VAR_6 = (Word_t)-1;
    VAR_4 = FUNC_1(VAR_2->JudyL_array, &VAR_6, VAR_1);
    if (FUNC_3(((void*)0) != VAR_4)) {
        VAR_7 = *VAR_4;
        VAR_9 = VAR_7->end_time;
    }
    FUNC_6(&VAR_2->lock);

    if (FUNC_4(((void*)0) == VAR_3)) {
        FUNC_2(((void*)0) == VAR_4);
        VAR_2->oldest_time = VAR_2->latest_time = VAR_0;
        return;
    }
    VAR_2->oldest_time = VAR_8;
    VAR_2->latest_time = VAR_9;
}
