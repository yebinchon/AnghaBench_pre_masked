
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT16 ;
typedef int PFAST_MUTEX ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_MUTEX ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

ACPI_STATUS
FUNC_3(
    ACPI_MUTEX VAR_4,
    UINT16 VAR_5)
{
    if (!VAR_4)
    {
        FUNC_0("Bad parameter\n");
        return VAR_1;
    }


    if (VAR_5 == VAR_0)
    {

        if (!FUNC_2((PFAST_MUTEX)VAR_4))
            return VAR_3;
    }
    else
    {

        FUNC_1((PFAST_MUTEX)VAR_4);
    }

    return VAR_2;
}
