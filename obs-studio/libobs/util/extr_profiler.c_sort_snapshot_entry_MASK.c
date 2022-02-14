
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int profiler_time_entry ;
struct TYPE_6__ {size_t num; TYPE_4__* array; } ;
struct TYPE_8__ {int num; int array; } ;
struct TYPE_7__ {int num; int array; } ;
struct TYPE_9__ {TYPE_1__ children; TYPE_3__ times_between_calls; scalar_t__ expected_time_between_calls; TYPE_2__ times; } ;
typedef TYPE_4__ profiler_snapshot_entry_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_1(profiler_snapshot_entry_t *VAR_1)
{
 FUNC_0(VAR_1->times.array, VAR_1->times.num, sizeof(profiler_time_entry),
       VAR_0);

 if (VAR_1->expected_time_between_calls)
  FUNC_0(VAR_1->times_between_calls.array,
        VAR_1->times_between_calls.num,
        sizeof(profiler_time_entry), VAR_0);

 for (size_t VAR_2 = 0; VAR_2 < VAR_1->children.num; VAR_2++)
  FUNC_1(&VAR_1->children.array[VAR_2]);
}
