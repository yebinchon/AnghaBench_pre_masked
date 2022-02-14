
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct perf_event_mmap_page {scalar_t__ lock; scalar_t__ time_enabled; scalar_t__ time_running; scalar_t__ time_mult; scalar_t__ time_shift; scalar_t__ time_offset; scalar_t__ index; scalar_t__ offset; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static u64 FUNC_3(void *VAR_0)
{
 struct perf_event_mmap_page *VAR_1 = VAR_0;
 u32 VAR_2, VAR_3, VAR_4 = 0, VAR_5 = 0;
 u64 VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9, VAR_10, VAR_11;

 do {
  VAR_2 = VAR_1->lock;
  FUNC_0();

  VAR_9 = VAR_1->time_enabled;
  VAR_10 = VAR_1->time_running;

  if (VAR_9 != VAR_10) {
   VAR_7 = FUNC_2();
   VAR_4 = VAR_1->time_mult;
   VAR_5 = VAR_1->time_shift;
   VAR_8 = VAR_1->time_offset;
  }

  VAR_3 = VAR_1->index;
  VAR_6 = VAR_1->offset;
  if (VAR_3)
   VAR_6 += FUNC_1(VAR_3 - 1);

  FUNC_0();
 } while (VAR_1->lock != VAR_2);

 if (VAR_9 != VAR_10) {
  u64 VAR_12, VAR_13;

  VAR_12 = (VAR_7 >> VAR_5);
  VAR_13 = VAR_7 & (((u64)1 << VAR_5) - 1);
  VAR_11 = VAR_8 + VAR_12 * VAR_4 +
   ((VAR_13 * VAR_4) >> VAR_5);

  VAR_9 += VAR_11;
  if (VAR_3)
   VAR_10 += VAR_11;

  VAR_12 = VAR_6 / VAR_10;
  VAR_13 = VAR_6 % VAR_10;
  VAR_6 = VAR_12 * VAR_9 + (VAR_13 * VAR_9) / VAR_10;
 }

 return VAR_6;
}
