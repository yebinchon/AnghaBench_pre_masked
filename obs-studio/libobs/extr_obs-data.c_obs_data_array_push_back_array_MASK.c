
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int obs_data_t ;
struct TYPE_7__ {size_t num; int ** array; } ;
struct TYPE_6__ {TYPE_4__ objects; } ;
typedef TYPE_1__ obs_data_array_t ;


 int FUNC_0 (TYPE_4__,TYPE_4__) ;
 int FUNC_1 (int *) ;

void FUNC_2(obs_data_array_t *VAR_0,
        obs_data_array_t *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return;

 for (size_t VAR_2 = 0; VAR_2 < VAR_1->objects.num; VAR_2++) {
  obs_data_t *VAR_3 = VAR_1->objects.array[VAR_2];
  FUNC_1(VAR_3);
 }
 FUNC_0(VAR_0->objects, VAR_1->objects);
}
