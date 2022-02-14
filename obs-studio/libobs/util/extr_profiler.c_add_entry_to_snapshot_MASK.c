
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int children; int max_time_between_calls; int min_time_between_calls; int times_between_calls; void* overall_between_calls_count; int expected_time_between_calls; int max_time; int min_time; int times; void* overall_count; int name; } ;
typedef TYPE_2__ profiler_snapshot_entry_t ;
struct TYPE_7__ {size_t num; TYPE_3__* array; } ;
struct TYPE_9__ {TYPE_1__ children; int times_between_calls; int expected_time_between_calls; int times; int name; } ;
typedef TYPE_3__ profile_entry ;


 void* FUNC_0 (int *,int *,int *,int *) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,size_t) ;

__attribute__((used)) static void FUNC_3(profile_entry *VAR_0,
      profiler_snapshot_entry_t *VAR_1)
{
 VAR_1->name = VAR_0->name;

 VAR_1->overall_count =
  FUNC_0(&VAR_0->times, &VAR_1->times,
      &VAR_1->min_time, &VAR_1->max_time);

 if ((VAR_1->expected_time_between_calls =
       VAR_0->expected_time_between_calls))
  VAR_1->overall_between_calls_count =
   FUNC_0(&VAR_0->times_between_calls,
       &VAR_1->times_between_calls,
       &VAR_1->min_time_between_calls,
       &VAR_1->max_time_between_calls);

 FUNC_2(VAR_1->children, VAR_0->children.num);
 for (size_t VAR_2 = 0; VAR_2 < VAR_0->children.num; VAR_2++)
  FUNC_3(&VAR_0->children.array[VAR_2],
          FUNC_1(VAR_1->children));
}
