
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t num; TYPE_1__** array; } ;
struct TYPE_5__ {TYPE_3__ names; } ;
typedef TYPE_1__ profiler_name_store_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__) ;

void FUNC_2(profiler_name_store_t *VAR_0)
{
 if (!VAR_0)
  return;

 for (size_t VAR_1 = 0; VAR_1 < VAR_0->names.num; VAR_1++)
  FUNC_0(VAR_0->names.array[VAR_1]);

 FUNC_1(VAR_0->names);
 FUNC_0(VAR_0);
}
