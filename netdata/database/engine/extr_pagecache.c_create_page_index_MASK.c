
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_t ;
struct pg_cache_page_index {int * prev; void* latest_time; void* oldest_time; int lock; int id; scalar_t__ JudyL_array; } ;
typedef scalar_t__ Pvoid_t ;


 void* VAR_0 ;
 int FUNC_0 (int) ;
 struct pg_cache_page_index* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *) ;

struct pg_cache_page_index *FUNC_4(uuid_t *VAR_1)
{
    struct pg_cache_page_index *VAR_2;

    VAR_2 = FUNC_1(sizeof(*VAR_2));
    VAR_2->JudyL_array = (Pvoid_t) ((void*)0);
    FUNC_2(VAR_2->id, *VAR_1);
    FUNC_0(0 == FUNC_3(&VAR_2->lock));
    VAR_2->oldest_time = VAR_0;
    VAR_2->latest_time = VAR_0;
    VAR_2->prev = ((void*)0);

    return VAR_2;
}
