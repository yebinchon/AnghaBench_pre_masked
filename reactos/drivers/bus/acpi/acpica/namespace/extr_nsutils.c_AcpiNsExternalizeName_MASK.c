
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT8 ;
typedef size_t UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;


 char* FUNC_0 (size_t) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_5 (char*) ;
 int VAR_6 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    UINT32 VAR_7,
    const char *VAR_8,
    UINT32 *VAR_9,
    char **VAR_10)
{
    UINT32 VAR_11 = 0;
    UINT32 VAR_12 = 0;
    UINT32 VAR_13;
    UINT32 VAR_14 = 0;
    UINT32 VAR_15 = 0;
    UINT32 VAR_16 = 0;


    FUNC_3 (VAR_6);


    if (!VAR_7 ||
        !VAR_8 ||
        !VAR_10)
    {
        FUNC_6 (VAR_1);
    }



    switch (VAR_8[0])
    {
    case 128:

        VAR_14 = 1;
        break;

    case 129:

        for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
        {
            if (FUNC_4 (VAR_8[VAR_15]))
            {
                VAR_14 = VAR_15 + 1;
            }
            else
            {
                break;
            }
        }

        if (VAR_15 == VAR_7)
        {
            VAR_14 = VAR_15;
        }

        break;

    default:

        break;
    }





    if (VAR_14 < VAR_7)
    {
        switch (VAR_8[VAR_14])
        {
        case 130:



            VAR_11 = VAR_14 + 2;
            VAR_12 = (UINT8)
                VAR_8[(ACPI_SIZE) VAR_14 + 1];
            break;

        case 131:



            VAR_11 = VAR_14 + 1;
            VAR_12 = 2;
            break;

        case 0:



            VAR_11 = 0;
            VAR_12 = 0;
            break;

        default:



            VAR_11 = VAR_14;
            VAR_12 = 1;
            break;
        }
    }






    VAR_13 = VAR_14 + (4 * VAR_12) +
        ((VAR_12 > 0) ? (VAR_12 - 1) : 0) + 1;





    if (VAR_13 > VAR_7)
    {
        FUNC_2 ((VAR_3, "Invalid internal name"));
        FUNC_6 (VAR_2);
    }



    *VAR_10 = FUNC_0 (VAR_13);
    if (!(*VAR_10))
    {
        FUNC_6 (VAR_4);
    }

    VAR_16 = 0;

    for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
    {
        (*VAR_10)[VAR_16++] = VAR_8[VAR_15];
    }

    if (VAR_12 > 0)
    {
        for (VAR_15 = 0; VAR_15 < VAR_12; VAR_15++)
        {
            if (VAR_15 > 0)
            {
                (*VAR_10)[VAR_16++] = '.';
            }



            FUNC_1 (&(*VAR_10)[VAR_16],
                &VAR_8[VAR_11]);
            FUNC_5 (&(*VAR_10)[VAR_16]);

            VAR_16 += VAR_0;
            VAR_11 += VAR_0;
        }
    }

    if (VAR_9)
    {
        *VAR_9 = (UINT32) VAR_13;
    }

    FUNC_6 (VAR_5);
}
