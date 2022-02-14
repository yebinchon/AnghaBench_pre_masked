
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TickType_t ;
typedef int SemaphoreHandle_t ;
typedef scalar_t__ OsiTime_t ;
typedef scalar_t__ OsiSyncObj_t ;
typedef int OsiReturnVal_e ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

OsiReturnVal_e FUNC_1(OsiSyncObj_t* VAR_3 , OsiTime_t VAR_4)
{
    if(VAR_2 == FUNC_0( (SemaphoreHandle_t)*VAR_3, ( TickType_t )VAR_4))
    {
        return VAR_0;
    }
    else
    {
        return VAR_1;
    }
}
