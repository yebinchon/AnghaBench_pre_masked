
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t num; TYPE_1__* array; } ;
struct TYPE_4__ {TYPE_3__ children; int times_between_calls; int overhead; int times; } ;
typedef TYPE_1__ profile_entry ;


 int FUNC_0 (TYPE_3__) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(profile_entry *VAR_0)
{
 for (size_t VAR_1 = 0; VAR_1 < VAR_0->children.num; VAR_1++)
  FUNC_2(&VAR_0->children.array[VAR_1]);

 FUNC_1(&VAR_0->times);



 FUNC_1(&VAR_0->times_between_calls);
 FUNC_0(VAR_0->children);
}
