
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef void* UINT16 ;
struct TYPE_4__ {void* Bus; int Function; int Device; } ;
typedef scalar_t__ BOOLEAN ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_PCI_ID ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;
typedef int ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,int ,scalar_t__*,int) ;
 int FUNC_6 (int ,int ,scalar_t__*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static ACPI_STATUS
FUNC_7 (
    ACPI_PCI_ID *VAR_11,
    ACPI_HANDLE VAR_12,
    UINT16 *VAR_13,
    BOOLEAN *VAR_14)
{
    ACPI_STATUS VAR_15;
    ACPI_OBJECT_TYPE VAR_16;
    UINT64 VAR_17;
    UINT64 VAR_18;




    VAR_15 = FUNC_4 (VAR_12, &VAR_16);
    if (FUNC_0 (VAR_15))
    {
        return (VAR_15);
    }

    if (VAR_16 != VAR_0)
    {
        return (VAR_1);
    }



    VAR_15 = FUNC_6 (VAR_3,
        VAR_12, &VAR_17);
    if (FUNC_0 (VAR_15))
    {
        return (VAR_1);
    }





    VAR_11->Device = FUNC_1 (FUNC_2 (VAR_17));
    VAR_11->Function = FUNC_3 (FUNC_2 (VAR_17));





    if (*VAR_14)
    {
        VAR_11->Bus = *VAR_13;
    }






    *VAR_14 = VAR_2;
    VAR_15 = FUNC_5 (VAR_11,
        VAR_4, &VAR_18, 8);
    if (FUNC_0 (VAR_15))
    {
        return (VAR_15);
    }



    VAR_18 &= VAR_7;

    if ((VAR_18 != VAR_8) &&
        (VAR_18 != VAR_9))
    {
        return (VAR_1);
    }



    VAR_15 = FUNC_5 (VAR_11,
        VAR_5, &VAR_18, 8);
    if (FUNC_0 (VAR_15))
    {
        return (VAR_15);
    }

    *VAR_14 = VAR_10;
    VAR_11->Bus = (UINT16) VAR_18;



    VAR_15 = FUNC_5 (VAR_11,
        VAR_6, &VAR_18, 8);
    if (FUNC_0 (VAR_15))
    {
        return (VAR_15);
    }

    *VAR_13 = (UINT16) VAR_18;
    return (VAR_1);
}
