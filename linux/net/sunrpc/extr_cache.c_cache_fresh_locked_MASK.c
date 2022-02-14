
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct cache_head {int flags; scalar_t__ last_refresh; scalar_t__ expiry_time; } ;
struct cache_detail {scalar_t__ flush_time; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct cache_head *VAR_1, time_t VAR_2,
          struct cache_detail *VAR_3)
{
 time_t VAR_4 = FUNC_0();
 if (VAR_4 <= VAR_3->flush_time)

  VAR_4 = VAR_3->flush_time + 1;
 VAR_1->expiry_time = VAR_2;
 VAR_1->last_refresh = VAR_4;
 FUNC_2();
 FUNC_1(VAR_0, &VAR_1->flags);
}
