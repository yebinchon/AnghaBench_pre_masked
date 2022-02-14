
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct cache_head {scalar_t__ last_refresh; scalar_t__ expiry_time; int ref; scalar_t__ flags; int cache_list; } ;
struct cache_detail {scalar_t__ flush_time; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct cache_head *VAR_1, struct cache_detail *VAR_2)
{
 time_t VAR_3 = FUNC_2();
 FUNC_0(&VAR_1->cache_list);
 VAR_1->flags = 0;
 FUNC_1(&VAR_1->ref);
 VAR_1->expiry_time = VAR_3 + VAR_0;
 if (VAR_3 <= VAR_2->flush_time)

  VAR_3 = VAR_2->flush_time + 1;
 VAR_1->last_refresh = VAR_3;
}
