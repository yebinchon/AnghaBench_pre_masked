
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int mutex; } ;
typedef TYPE_1__ profiler_name_store_t ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *) ;

profiler_name_store_t *FUNC_3(void)
{
 profiler_name_store_t *VAR_0 = FUNC_1(sizeof(profiler_name_store_t));

 if (FUNC_2(&VAR_0->mutex, ((void*)0)))
  goto error;

 return VAR_0;

error:
 FUNC_0(VAR_0);
 return ((void*)0);
}
