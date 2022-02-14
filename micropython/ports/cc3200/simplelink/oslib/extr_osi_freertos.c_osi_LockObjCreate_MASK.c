
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SemaphoreHandle_t ;
typedef int OsiReturnVal_e ;
typedef int * OsiLockObj_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

OsiReturnVal_e FUNC_2(OsiLockObj_t* VAR_1)
{
    SemaphoreHandle_t *VAR_2 = (SemaphoreHandle_t *)VAR_1;

    FUNC_1(*VAR_2);

    FUNC_0 (*VAR_1 != ((void*)0));

    return VAR_0;
}
