
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {int End; int Start; scalar_t__ OsiDependency; int Name; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_PORT_INFO ;
typedef int ACPI_IO_ADDRESS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_6 (
    ACPI_IO_ADDRESS VAR_12,
    UINT32 VAR_13)
{
    UINT32 VAR_14;
    UINT32 VAR_15;
    ACPI_IO_ADDRESS VAR_16;
    const ACPI_PORT_INFO *VAR_17;


    FUNC_4 (VAR_11);




    if ((VAR_13 != 8) &&
        (VAR_13 != 16) &&
        (VAR_13 != 32))
    {
        FUNC_2 ((VAR_6,
            "Bad BitWidth parameter: %8.8X", VAR_13));
        FUNC_5 (VAR_5);
    }

    VAR_17 = VAR_10;
    VAR_15 = FUNC_1 (VAR_13);
    VAR_16 = VAR_12 + VAR_15 - 1;

    FUNC_0 ((VAR_0,
        "Address %8.8X%8.8X LastAddress %8.8X%8.8X Length %X",
        FUNC_3 (VAR_12), FUNC_3 (VAR_16),
        VAR_15));



    if (VAR_16 > VAR_3)
    {
        FUNC_2 ((VAR_6,
            "Illegal I/O port address/length above 64K: %8.8X%8.8X/0x%X",
            FUNC_3 (VAR_12), VAR_15));
        FUNC_5 (VAR_7);
    }



    if (VAR_12 > VAR_10[VAR_2 - 1].End)
    {
        FUNC_5 (VAR_8);
    }



    for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++, VAR_17++)
    {
        if ((VAR_12 <= VAR_17->End) && (VAR_16 >= VAR_17->Start))
        {


            if (VAR_9 >= VAR_17->OsiDependency)
            {
                FUNC_0 ((VAR_1,
                    "Denied AML access to port 0x%8.8X%8.8X/%X (%s 0x%.4X-0x%.4X)\n",
                    FUNC_3 (VAR_12), VAR_15, VAR_17->Name,
                    VAR_17->Start, VAR_17->End));

                FUNC_5 (VAR_4);
            }
        }



        if (VAR_16 <= VAR_17->End)
        {
            break;
        }
    }

    FUNC_5 (VAR_8);
}
