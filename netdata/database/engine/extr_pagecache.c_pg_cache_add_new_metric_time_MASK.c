
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ usec_t ;
struct rrdeng_page_descr {scalar_t__ start_time; scalar_t__ end_time; } ;
struct pg_cache_page_index {scalar_t__ oldest_time; scalar_t__ latest_time; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

void FUNC_2(struct pg_cache_page_index *VAR_1, struct rrdeng_page_descr *VAR_2)
{
    usec_t VAR_3 = VAR_1->oldest_time;
    usec_t VAR_4 = VAR_1->latest_time;

    if (FUNC_1(VAR_3 == VAR_0 || VAR_2->start_time < VAR_3)) {
        VAR_1->oldest_time = VAR_2->start_time;
    }
    if (FUNC_0(VAR_2->end_time > VAR_4 || VAR_4 == VAR_0)) {
        VAR_1->latest_time = VAR_2->end_time;
    }
}
