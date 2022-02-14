
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct perf_tsc_conversion {int time_zero; int time_shift; int time_mult; } ;
struct perf_event_mmap_page {int lock; int cap_user_time_zero; int time_zero; int time_shift; int time_mult; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;

int FUNC_2(const struct perf_event_mmap_page *VAR_2,
        struct perf_tsc_conversion *VAR_3)
{
 bool VAR_4;
 u32 VAR_5;
 int VAR_6 = 0;

 while (1) {
  VAR_5 = VAR_2->lock;
  FUNC_1();
  VAR_3->time_mult = VAR_2->time_mult;
  VAR_3->time_shift = VAR_2->time_shift;
  VAR_3->time_zero = VAR_2->time_zero;
  VAR_4 = VAR_2->cap_user_time_zero;
  FUNC_1();
  if (VAR_2->lock == VAR_5 && !(VAR_5 & 1))
   break;
  if (++VAR_6 > 10000) {
   FUNC_0("failed to get perf_event_mmap_page lock\n");
   return -VAR_0;
  }
 }

 if (!VAR_4)
  return -VAR_1;

 return 0;
}
