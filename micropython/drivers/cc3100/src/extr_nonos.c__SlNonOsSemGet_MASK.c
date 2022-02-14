
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ _SlNonOsTime_t ;
typedef scalar_t__ _SlNonOsSemObj_t ;
typedef int _SlNonOsRetVal_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_4 ;

_SlNonOsRetVal_t FUNC_2(_SlNonOsSemObj_t* VAR_5, _SlNonOsSemObj_t VAR_6, _SlNonOsSemObj_t VAR_7, _SlNonOsTime_t VAR_8)
{



    while (VAR_8>0)
    {
        if (VAR_6 == *VAR_5)
        {
            *VAR_5 = VAR_7;
            break;
        }
        if (VAR_8 != VAR_3)
        {
            VAR_8--;
        }
        FUNC_0();
    }

    if (0 == VAR_8)
    {
        return VAR_1;
    }
    else
    {
        return VAR_2;
    }
}
