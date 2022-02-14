
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ autoselect_size; scalar_t__ default_len; scalar_t__ default_size; scalar_t__ data_len; scalar_t__ data_size; } ;
typedef TYPE_1__ obs_data_item_t ;


 void* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,void*,TYPE_1__*,void*,scalar_t__) ;

void FUNC_3(obs_data_item_t *VAR_0)
{
 if (!VAR_0 || !VAR_0->data_size)
  return;

 void *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 VAR_0->data_size = 0;
 VAR_0->data_len = 0;

 if (VAR_0->default_size || VAR_0->autoselect_size)
  FUNC_2(VAR_0, VAR_1, VAR_0,
     FUNC_0(VAR_0),
     VAR_0->default_len + VAR_0->autoselect_size);
}
