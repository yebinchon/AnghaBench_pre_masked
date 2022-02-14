
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {scalar_t__ time_delta; scalar_t__ count; } ;
typedef TYPE_2__ profiler_time_entry ;
typedef int profiler_time_entries_t ;
struct TYPE_9__ {size_t size; TYPE_1__* entries; int occupied; } ;
typedef TYPE_3__ profile_times_table ;
struct TYPE_7__ {TYPE_2__ entry; int probes; } ;


 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;

__attribute__((used)) static uint64_t FUNC_4(profile_times_table *VAR_0,
      profiler_time_entries_t *VAR_1,
      uint64_t *VAR_2, uint64_t *VAR_3)
{
 FUNC_3(VAR_0, 0);

 FUNC_1((*VAR_1), VAR_0->occupied);
 FUNC_2((*VAR_1), 0);

 uint64_t VAR_4 = ~(uint64_t)0;
 uint64_t VAR_5 = 0;

 uint64_t VAR_6 = 0;
 for (size_t VAR_7 = 0; VAR_7 < VAR_0->size; VAR_7++) {
  if (!VAR_0->entries[VAR_7].probes)
   continue;

  profiler_time_entry *VAR_8 = &VAR_0->entries[VAR_7].entry;

  FUNC_0((*VAR_1), VAR_8);

  VAR_6 += VAR_8->count;
  VAR_4 = (VAR_4 < VAR_8->time_delta) ? VAR_4 : VAR_8->time_delta;
  VAR_5 = (VAR_5 > VAR_8->time_delta) ? VAR_5 : VAR_8->time_delta;
 }

 if (VAR_2)
  *VAR_2 = VAR_4;
 if (VAR_3)
  *VAR_3 = VAR_5;

 return VAR_6;
}
