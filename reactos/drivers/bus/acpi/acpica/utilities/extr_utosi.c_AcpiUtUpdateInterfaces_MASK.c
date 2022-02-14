
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_3__ {int Flags; struct TYPE_3__* Next; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_INTERFACE_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

ACPI_STATUS
FUNC_0 (
    UINT8 VAR_7)
{
    ACPI_INTERFACE_INFO *VAR_8;


    VAR_8 = VAR_6;
    while (VAR_8)
    {
        if (((VAR_8->Flags & VAR_2) &&
             (VAR_7 & VAR_1)) ||
            (!(VAR_8->Flags & VAR_2) &&
             (VAR_7 & VAR_4)))
        {
            if (VAR_7 & VAR_0)
            {


                VAR_8->Flags |= VAR_3;
            }
            else
            {


                VAR_8->Flags &= ~VAR_3;
            }
        }

        VAR_8 = VAR_8->Next;
    }

    return (VAR_5);
}
