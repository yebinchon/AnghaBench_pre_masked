
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int ref; } ;
typedef TYPE_2__ obs_data_t ;
struct TYPE_6__ {size_t num; TYPE_2__** array; } ;
struct TYPE_8__ {TYPE_1__ objects; } ;
typedef TYPE_3__ obs_data_array_t ;


 int FUNC_0 (int *) ;

obs_data_t *FUNC_1(obs_data_array_t *VAR_0, size_t VAR_1)
{
 obs_data_t *VAR_2;

 if (!VAR_0)
  return ((void*)0);

 VAR_2 = (VAR_1 < VAR_0->objects.num) ? VAR_0->objects.array[VAR_1] : ((void*)0);

 if (VAR_2)
  FUNC_0(&VAR_2->ref);
 return VAR_2;
}
