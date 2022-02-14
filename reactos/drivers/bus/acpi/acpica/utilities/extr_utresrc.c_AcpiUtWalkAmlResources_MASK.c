
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef int AML_RESOURCE_END_TAG ;
typedef int ACPI_WALK_STATE ;
typedef int (* ACPI_WALK_AML_CALLBACK ) (int*,int,int,int,void**) ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (int *,int*,int*) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

ACPI_STATUS
FUNC_6 (
    ACPI_WALK_STATE *VAR_4,
    UINT8 *VAR_5,
    ACPI_SIZE VAR_6,
    ACPI_WALK_AML_CALLBACK VAR_7,
    void **VAR_8)
{
    ACPI_STATUS VAR_9;
    UINT8 *VAR_10;
    UINT8 VAR_11;
    UINT32 VAR_12;
    UINT32 VAR_13 = 0;
    UINT8 VAR_14[2] = {0x79, 0x00};


    FUNC_1 (VAR_3);




    if (VAR_6 < sizeof (AML_RESOURCE_END_TAG))
    {
        FUNC_5 (VAR_1);
    }



    VAR_10 = VAR_5 + VAR_6;



    while (VAR_5 < VAR_10)
    {


        VAR_9 = FUNC_4 (VAR_4, VAR_5, &VAR_11);
        if (FUNC_0 (VAR_9))
        {




            FUNC_5 (VAR_9);
        }



        VAR_12 = FUNC_2 (VAR_5);



        if (VAR_7)
        {
            VAR_9 = VAR_7 (
                VAR_5, VAR_12, VAR_13, VAR_11, VAR_8);
            if (FUNC_0 (VAR_9))
            {
                FUNC_5 (VAR_9);
            }
        }



        if (FUNC_3 (VAR_5) == VAR_0)
        {




            if ((VAR_5 + 1) >= VAR_10)
            {
                FUNC_5 (VAR_1);
            }
            if (!VAR_7)
            {
                *VAR_8 = VAR_5;
            }



            FUNC_5 (VAR_2);
        }

        VAR_5 += VAR_12;
        VAR_13 += VAR_12;
    }



    if (VAR_7)
    {


        (void) FUNC_4 (VAR_4, VAR_14, &VAR_11);
        VAR_9 = VAR_7 (VAR_14, 2, VAR_13, VAR_11, VAR_8);
        if (FUNC_0 (VAR_9))
        {
            FUNC_5 (VAR_9);
        }
    }

    FUNC_5 (VAR_1);
}
