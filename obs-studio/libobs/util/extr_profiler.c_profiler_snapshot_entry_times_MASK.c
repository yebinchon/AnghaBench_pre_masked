
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int profiler_time_entries_t ;
struct TYPE_3__ {int times; } ;
typedef TYPE_1__ profiler_snapshot_entry_t ;



profiler_time_entries_t *
FUNC_0(profiler_snapshot_entry_t *VAR_0)
{
 return VAR_0 ? &VAR_0->times : ((void*)0);
}
