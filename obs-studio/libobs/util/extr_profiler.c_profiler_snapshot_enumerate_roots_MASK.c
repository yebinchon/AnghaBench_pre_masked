
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t num; int * array; } ;
struct TYPE_5__ {TYPE_1__ roots; } ;
typedef TYPE_2__ profiler_snapshot_t ;
typedef int (* profiler_entry_enum_func ) (void*,int *) ;



void FUNC_0(profiler_snapshot_t *VAR_0,
           profiler_entry_enum_func VAR_1,
           void *VAR_2)
{
 if (!VAR_0)
  return;

 for (size_t VAR_3 = 0; VAR_3 < VAR_0->roots.num; VAR_3++)
  if (!VAR_1(VAR_2, &VAR_0->roots.array[VAR_3]))
   break;
}
