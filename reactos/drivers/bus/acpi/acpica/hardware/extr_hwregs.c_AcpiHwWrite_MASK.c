
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT64 ;
typedef int UINT32 ;
struct TYPE_5__ {int BitOffset; int BitWidth; scalar_t__ SpaceId; } ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_PHYSICAL_ADDRESS ;
typedef scalar_t__ ACPI_IO_ADDRESS ;
typedef TYPE_1__ ACPI_GENERIC_ADDRESS ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__*,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (scalar_t__,TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int,scalar_t__*) ;
 int FUNC_9 (scalar_t__,int,int) ;
 int FUNC_10 (scalar_t__,scalar_t__,int) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_2 ;

ACPI_STATUS
FUNC_12 (
    UINT64 VAR_3,
    ACPI_GENERIC_ADDRESS *VAR_4)
{
    UINT64 VAR_5;
    UINT8 VAR_6;
    UINT32 VAR_7;
    UINT8 VAR_8;
    UINT64 VAR_9;
    UINT8 VAR_10;
    ACPI_STATUS VAR_11;


    FUNC_4 (VAR_2);




    VAR_11 = FUNC_8 (VAR_4, 64, &VAR_5);
    if (FUNC_2 (VAR_11))
    {
        return (VAR_11);
    }



    VAR_6 = FUNC_7 (VAR_5, VAR_4, 64);
    VAR_7 = VAR_4->BitOffset + VAR_4->BitWidth;
    VAR_8 = VAR_4->BitOffset;





    VAR_10 = 0;
    while (VAR_7)
    {




        VAR_9 = FUNC_5 (&VAR_3, VAR_10 * VAR_6,
            FUNC_6 (VAR_6));

        if (VAR_8 >= VAR_6)
        {
            VAR_8 -= VAR_6;
        }
        else
        {
            if (VAR_4->SpaceId == VAR_0)
            {
                VAR_11 = FUNC_10 ((ACPI_PHYSICAL_ADDRESS)
                    VAR_5 + VAR_10 * FUNC_1 (VAR_6),
                    VAR_9, VAR_6);
            }
            else
            {
                VAR_11 = FUNC_9 ((ACPI_IO_ADDRESS)
                    VAR_5 + VAR_10 * FUNC_1 (VAR_6),
                    (UINT32) VAR_9, VAR_6);
            }
        }





        VAR_7 -= VAR_7 > VAR_6 ? VAR_6 : VAR_7;
        VAR_10++;
    }

    FUNC_0 ((VAR_1,
        "Wrote: %8.8X%8.8X width %2d   to %8.8X%8.8X (%s)\n",
        FUNC_3 (VAR_3), VAR_6,
        FUNC_3 (VAR_5), FUNC_11 (VAR_4->SpaceId)));

    return (VAR_11);
}
