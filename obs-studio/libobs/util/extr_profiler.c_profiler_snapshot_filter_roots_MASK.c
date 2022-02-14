
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t num; TYPE_3__* array; } ;
struct TYPE_5__ {TYPE_4__ roots; } ;
typedef TYPE_1__ profiler_snapshot_t ;
typedef int (* profiler_name_filter_func ) (void*,int ,int*) ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (TYPE_4__,size_t) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(profiler_snapshot_t *VAR_0,
        profiler_name_filter_func VAR_1, void *VAR_2)
{
 for (size_t VAR_3 = 0; VAR_3 < VAR_0->roots.num;) {
  bool VAR_4 = 0;
  bool VAR_5 = VAR_1(VAR_2, VAR_0->roots.array[VAR_3].name, &VAR_4);

  if (VAR_4) {
   FUNC_1(&VAR_0->roots.array[VAR_3]);
   FUNC_0(VAR_0->roots, VAR_3);
  }

  if (!VAR_5)
   break;

  if (!VAR_4)
   VAR_3 += 1;
 }
}
