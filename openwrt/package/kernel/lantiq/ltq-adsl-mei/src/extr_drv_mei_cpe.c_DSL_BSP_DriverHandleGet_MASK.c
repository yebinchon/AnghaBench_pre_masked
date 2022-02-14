
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nInUse; int owner; } ;
typedef TYPE_1__ DSL_DEV_Device_t ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;

DSL_DEV_Device_t *
FUNC_1 (int VAR_2, int VAR_3)
{
 DSL_DEV_Device_t *VAR_4;

 if (VAR_3 > VAR_0)
  return ((void*)0);

 VAR_4 = &VAR_1[VAR_3];
 if (!FUNC_0(VAR_4->owner))
  return ((void*)0);

 VAR_4->nInUse++;
 return VAR_4;
}
