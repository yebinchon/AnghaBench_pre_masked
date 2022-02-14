
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* device; } ;
typedef TYPE_2__ gs_samplerstate_t ;
struct TYPE_5__ {TYPE_2__** cur_samplers; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(gs_samplerstate_t *VAR_1)
{
 if (!VAR_1)
  return;

 if (VAR_1->device)
  for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
   if (VAR_1->device->cur_samplers[VAR_2] ==
       VAR_1)
    VAR_1->device->cur_samplers[VAR_2] = ((void*)0);

 FUNC_0(VAR_1);
}
