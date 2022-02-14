
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ autoselect_size; } ;
typedef TYPE_1__ obs_data_item_t ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(obs_data_item_t *VAR_0)
{
 if (!VAR_0 || !VAR_0->autoselect_size)
  return;

 FUNC_0(VAR_0);
 VAR_0->autoselect_size = 0;
}
