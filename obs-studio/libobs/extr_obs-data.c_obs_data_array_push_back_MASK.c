
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ref; } ;
typedef TYPE_1__ obs_data_t ;
struct TYPE_7__ {int objects; } ;
typedef TYPE_2__ obs_data_array_t ;


 size_t FUNC_0 (int ,TYPE_1__**) ;
 int FUNC_1 (int *) ;

size_t FUNC_2(obs_data_array_t *VAR_0, obs_data_t *VAR_1)
{
 if (!VAR_0 || !VAR_1)
  return 0;

 FUNC_1(&VAR_1->ref);
 return FUNC_0(VAR_0->objects, &VAR_1);
}
