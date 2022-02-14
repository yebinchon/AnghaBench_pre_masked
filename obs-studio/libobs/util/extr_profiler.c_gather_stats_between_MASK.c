
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef double uint64_t ;
struct TYPE_5__ {size_t num; TYPE_1__* array; } ;
typedef TYPE_2__ profiler_time_entries_t ;
struct TYPE_4__ {double time_delta; scalar_t__ count; } ;



__attribute__((used)) static void FUNC_0(profiler_time_entries_t *VAR_0,
     uint64_t VAR_1, uint64_t VAR_2,
     uint64_t VAR_3, uint64_t VAR_4,
     uint64_t VAR_5, uint64_t *VAR_6,
     double *VAR_7, double *VAR_8, double *VAR_9)
{
 *VAR_6 = 0;
 *VAR_7 = 0.;
 *VAR_8 = 0.;
 *VAR_9 = 0.;

 if (!VAR_0->num)
  return;

 uint64_t VAR_10 = 0;
 for (size_t VAR_11 = 0; VAR_11 < VAR_0->num; VAR_11++) {
  VAR_10 += VAR_0->array[VAR_11].count;
  if (VAR_10 < VAR_1 * 0.5)
   continue;

  *VAR_6 = VAR_0->array[VAR_11].time_delta;
  break;
 }

 bool VAR_12 = VAR_5 <= VAR_3;
 bool VAR_13 = 0;

 if (VAR_4 >= VAR_3) {
  *VAR_9 = 100.;
  return;
 }

 if (VAR_12 && VAR_4 >= VAR_2) {
  *VAR_7 = 100.;
  return;
 }

 VAR_10 = 0;
 for (size_t VAR_14 = 0; VAR_14 < VAR_0->num; VAR_14++) {
  uint64_t VAR_15 = VAR_0->array[VAR_14].time_delta;

  if (!VAR_12 && VAR_15 <= VAR_3) {
   *VAR_9 = (double)VAR_10 / VAR_1 * 100;
   VAR_10 = 0;
   VAR_12 = 1;
  }

  if (!VAR_13 && VAR_15 < VAR_2) {
   *VAR_7 = (double)VAR_10 / VAR_1 * 100;
   VAR_10 = 0;
   VAR_13 = 1;
  }

  VAR_10 += VAR_0->array[VAR_14].count;
 }

 if (!VAR_12) {
  *VAR_9 = 100.;

 } else if (!VAR_13) {
  *VAR_7 = (double)VAR_10 / VAR_1 * 100;

 } else {
  *VAR_8 = (double)VAR_10 / VAR_1 * 100;
 }
}
