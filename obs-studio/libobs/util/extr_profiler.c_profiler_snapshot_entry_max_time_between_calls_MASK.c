
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int max_time_between_calls; } ;
typedef TYPE_1__ profiler_snapshot_entry_t ;



uint64_t
FUNC_0(profiler_snapshot_entry_t *VAR_0)
{
 return VAR_0 ? VAR_0->max_time_between_calls : 0;
}
