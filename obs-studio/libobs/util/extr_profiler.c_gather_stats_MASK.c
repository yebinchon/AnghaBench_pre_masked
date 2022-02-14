
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef double uint64_t ;
struct TYPE_4__ {double count; double time_delta; } ;
typedef TYPE_1__ profiler_time_entry ;
struct TYPE_5__ {size_t num; TYPE_1__* array; } ;
typedef TYPE_2__ profiler_time_entries_t ;



__attribute__((used)) static void FUNC_0(uint64_t VAR_0,
    profiler_time_entries_t *VAR_1, uint64_t VAR_2,
    uint64_t *VAR_3, uint64_t *VAR_4,
    double *VAR_5)
{
 if (!VAR_1->num) {
  *VAR_3 = 0;
  *VAR_4 = 0;
  *VAR_5 = 0.;
  return;
 }







 uint64_t VAR_6 = 0;
 for (size_t VAR_7 = 0; VAR_7 < VAR_1->num; VAR_7++) {
  uint64_t VAR_8 = VAR_6;
  VAR_6 += VAR_1->array[VAR_7].count;

  if (VAR_8 < VAR_2 * 0.01 && VAR_6 >= VAR_2 * 0.01)
   *VAR_3 = VAR_1->array[VAR_7].time_delta;
  else if (VAR_8 < VAR_2 * 0.5 && VAR_6 >= VAR_2 * 0.5) {
   *VAR_4 = VAR_1->array[VAR_7].time_delta;
   break;
  }
 }

 *VAR_5 = 0.;
 if (!VAR_0)
  return;

 VAR_6 = 0;
 for (size_t VAR_9 = 0; VAR_9 < VAR_1->num; VAR_9++) {
  profiler_time_entry *VAR_10 = &VAR_1->array[VAR_9];
  if (VAR_10->time_delta < VAR_0)
   break;

  VAR_6 += VAR_10->count;
 }
 *VAR_5 = (1. - (double)VAR_6 / VAR_2) * 100;
}
