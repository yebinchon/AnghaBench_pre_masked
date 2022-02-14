
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* first_item; } ;
typedef TYPE_1__ obs_data_t ;
struct TYPE_6__ {int ref; } ;
typedef TYPE_2__ obs_data_item_t ;


 int FUNC_0 (int *) ;

obs_data_item_t *FUNC_1(obs_data_t *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 if (VAR_0->first_item)
  FUNC_0(&VAR_0->first_item->ref);
 return VAR_0->first_item;
}
