
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT64 ;
struct TYPE_4__ {scalar_t__ SpaceId; int AccessWidth; scalar_t__ BitWidth; scalar_t__ BitOffset; int Address; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_GENERIC_ADDRESS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,scalar_t__) ;

ACPI_STATUS
FUNC_5 (
    ACPI_GENERIC_ADDRESS *VAR_7,
    UINT8 VAR_8,
    UINT64 *VAR_9)
{
    UINT8 VAR_10;
    UINT8 VAR_11;




    if (!VAR_7)
    {
        return (VAR_3);
    }






    FUNC_1 (VAR_9, &VAR_7->Address);
    if (!(*VAR_9))
    {
        return (VAR_2);
    }



    if ((VAR_7->SpaceId != VAR_1) &&
        (VAR_7->SpaceId != VAR_0))
    {
        FUNC_0 ((VAR_4,
            "Unsupported address space: 0x%X", VAR_7->SpaceId));
        return (VAR_6);
    }



    if (VAR_7->AccessWidth > 4)
    {
        FUNC_0 ((VAR_4,
            "Unsupported register access width: 0x%X", VAR_7->AccessWidth));
        return (VAR_6);
    }



    VAR_11 = FUNC_4 (*VAR_9, VAR_7, VAR_8);
    VAR_10 = FUNC_2 (VAR_7->BitOffset + VAR_7->BitWidth, VAR_11);
    if (VAR_8 < VAR_10)
    {
        FUNC_3 ((VAR_4,
            "Requested bit width 0x%X is smaller than register bit width 0x%X",
            VAR_8, VAR_10));
        return (VAR_6);
    }

    return (VAR_5);
}
