
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_2__ {size_t StatusBitMask; size_t EnableBitMask; } ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_3 (size_t) ;
 int * VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_4 (int ,int *,size_t,int ) ;
 int VAR_8 ;
 int FUNC_5 (int ,size_t*) ;
 int VAR_9 ;

UINT32
FUNC_6 (
    void)
{
    UINT32 VAR_10 = VAR_2;
    UINT32 VAR_11;
    UINT32 VAR_12;
    UINT32 VAR_13;
    ACPI_STATUS VAR_14;


    FUNC_2 (VAR_9);






    VAR_14 = FUNC_5 (VAR_5, &VAR_11);
    VAR_14 |= FUNC_5 (VAR_4, &VAR_12);
    if (FUNC_1 (VAR_14))
    {
        return (VAR_10);
    }

    FUNC_0 ((VAR_0,
        "Fixed Event Block: Enable %08X Status %08X\n",
        VAR_12, VAR_11));




    for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
    {


        if ((VAR_11 & VAR_7[VAR_13].StatusBitMask) &&
            (VAR_12 & VAR_7[VAR_13].EnableBitMask))
        {




            VAR_6[VAR_13]++;
            if (&FUNC_4)
            {
                FUNC_4 (VAR_1, ((void*)0),
                     VAR_13, VAR_8);
            }

            VAR_10 |= FUNC_3 (VAR_13);
        }
    }

    return (VAR_10);
}
