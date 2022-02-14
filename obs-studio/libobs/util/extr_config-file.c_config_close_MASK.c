
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct config_section {int dummy; } ;
struct TYPE_6__ {size_t num; struct config_section* array; } ;
struct TYPE_5__ {int mutex; struct TYPE_5__* file; TYPE_2__ sections; TYPE_2__ defaults; } ;
typedef TYPE_1__ config_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct config_section*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(config_t *VAR_0)
{
 struct config_section *VAR_1, *VAR_2;
 size_t VAR_3;

 if (!VAR_0)
  return;

 VAR_1 = VAR_0->defaults.array;
 VAR_2 = VAR_0->sections.array;

 for (VAR_3 = 0; VAR_3 < VAR_0->defaults.num; VAR_3++)
  FUNC_1(VAR_1 + VAR_3);
 for (VAR_3 = 0; VAR_3 < VAR_0->sections.num; VAR_3++)
  FUNC_1(VAR_2 + VAR_3);

 FUNC_2(&VAR_0->defaults);
 FUNC_2(&VAR_0->sections);
 FUNC_0(VAR_0->file);
 FUNC_3(&VAR_0->mutex);
 FUNC_0(VAR_0);
}
