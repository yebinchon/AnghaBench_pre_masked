
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


 int FUNC_0 (int ,size_t,TYPE_1__**) ;
 int FUNC_1 (int *) ;

void FUNC_2(obs_data_array_t *VAR_0, size_t VAR_1, obs_data_t *VAR_2)
{
 if (!VAR_0 || !VAR_2)
  return;

 FUNC_1(&VAR_2->ref);
 FUNC_0(VAR_0->objects, VAR_1, &VAR_2);
}
