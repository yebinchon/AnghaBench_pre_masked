
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_4__ {int BitLength; } ;
struct TYPE_5__ {TYPE_1__ CommonField; } ;
typedef int BOOLEAN ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOLEAN
FUNC_2 (
    ACPI_OPERAND_OBJECT *VAR_4,
    UINT64 VAR_5)
{

    if (VAR_4->CommonField.BitLength >= VAR_0)
    {




        return (VAR_2);
    }

    if (VAR_5 >= ((UINT64) 1 << VAR_4->CommonField.BitLength))
    {




        FUNC_0 ((VAR_1,
            "Index value 0x%8.8X%8.8X overflows field width 0x%X",
            FUNC_1 (VAR_5),
            VAR_4->CommonField.BitLength));

        return (VAR_3);
    }



    return (VAR_2);
}
