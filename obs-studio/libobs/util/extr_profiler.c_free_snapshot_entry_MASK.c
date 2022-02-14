
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t num; TYPE_1__* array; } ;
struct TYPE_4__ {TYPE_3__ times; TYPE_3__ times_between_calls; TYPE_3__ children; } ;
typedef TYPE_1__ profiler_snapshot_entry_t ;


 int FUNC_0 (TYPE_3__) ;

__attribute__((used)) static void FUNC_1(profiler_snapshot_entry_t *VAR_0)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->children.num; VAR_1++)
  FUNC_1(&VAR_0->children.array[VAR_1]);

 FUNC_0(VAR_0->children);
 FUNC_0(VAR_0->times_between_calls);
 FUNC_0(VAR_0->times);
}
