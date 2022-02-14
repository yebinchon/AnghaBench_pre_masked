
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int obs_data_item_t ;
struct TYPE_5__ {int ref; } ;
typedef TYPE_1__ obs_data_array_t ;
typedef TYPE_1__* (* get_array_t ) (int *) ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline obs_data_array_t *FUNC_2(obs_data_item_t *VAR_1,
          get_array_t VAR_2)
{
 obs_data_array_t *VAR_3 =
  FUNC_0(VAR_1, VAR_0) ? VAR_2(VAR_1) : ((void*)0);

 if (VAR_3)
  FUNC_1(&VAR_3->ref);
 return VAR_3;
}
