
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ BOOLEAN ;
typedef scalar_t__ ACPI_STATUS ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int*) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;




 char* FUNC_6 (int,int) ;
 scalar_t__ FUNC_7 (int**,char*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_8 (scalar_t__) ;

ACPI_STATUS
FUNC_9 (
    ACPI_OBJECT_TYPE VAR_14,
    UINT8 *VAR_15,
    char **VAR_16,
    UINT32 *VAR_17)
{
    ACPI_STATUS VAR_18 = VAR_10;
    UINT8 *VAR_19 = VAR_15;
    char *VAR_20 = ((void*)0);
    UINT32 VAR_21;
    UINT32 VAR_22 = 0;
    BOOLEAN VAR_23 = VAR_12;


    FUNC_4 (VAR_11, VAR_19);


    if (VAR_4 == VAR_14 ||
        VAR_2 == VAR_14 ||
        VAR_3 == VAR_14)
    {


        VAR_20 = FUNC_6 (0, 1);
        if (!VAR_20)
        {
            VAR_18 = VAR_9;
        }
        else
        {
            VAR_18 = FUNC_7 (&VAR_19, VAR_20);
        }
    }
    else
    {




        switch (*VAR_19)
        {
        case 128:

            FUNC_0 (*(VAR_1, "RootPrefix(\\) at %p\n",
                VAR_19));





            VAR_19++;
            VAR_22 = VAR_5;
            VAR_23 = VAR_13;
            break;

        case 129:



            do
            {
                FUNC_0 (*(VAR_1, "ParentPrefix (^) at %p\n",
                    VAR_19));

                VAR_19++;
                VAR_22++;

            } while (*VAR_19 == 129);

            VAR_23 = VAR_13;
            break;

        default:



            break;
        }



        switch (*VAR_19)
        {
        case 131:

            FUNC_0 (*(VAR_1, "DualNamePrefix at %p\n",
                VAR_19));

            VAR_19++;
            VAR_20 = FUNC_6 (VAR_22, 2);
            if (!VAR_20)
            {
                VAR_18 = VAR_9;
                break;
            }



            VAR_23 = VAR_13;

            VAR_18 = FUNC_7 (&VAR_19, VAR_20);
            if (FUNC_5 (VAR_18))
            {
                VAR_18 = FUNC_7 (&VAR_19, VAR_20);
            }
            break;

        case 130:

            FUNC_0 (*(VAR_1, "MultiNamePrefix at %p\n",
                VAR_19));



            VAR_19++;
            VAR_21 = *VAR_19;

            VAR_20 = FUNC_6 (
                VAR_22, VAR_21);
            if (!VAR_20)
            {
                VAR_18 = VAR_9;
                break;
            }



            VAR_19++;
            VAR_23 = VAR_13;

            while (VAR_21 &&
                    (VAR_18 = FUNC_7 (&VAR_19, VAR_20)) ==
                        VAR_10)
            {
                VAR_21--;
            }

            break;

        case 0:



            if (VAR_22 == VAR_5)
            {
                FUNC_0 ((VAR_0,
                    "NameSeg is \"\\\" followed by NULL\n"));
            }



            VAR_19++;
            VAR_20 = FUNC_6 (VAR_22, 0);
            if (!VAR_20)
            {
                VAR_18 = VAR_9;
                break;
            }

            break;

        default:



            VAR_20 = FUNC_6 (VAR_22, 1);
            if (!VAR_20)
            {
                VAR_18 = VAR_9;
                break;
            }

            VAR_18 = FUNC_7 (&VAR_19, VAR_20);
            break;
        }
    }

    if (VAR_7 == VAR_18 && VAR_23)
    {


        FUNC_1 ((VAR_8,
            "Malformed Name at %p", VAR_20));
        VAR_18 = VAR_6;
    }

    if (FUNC_2 (VAR_18))
    {
        if (VAR_20)
        {
            FUNC_3 (VAR_20);
        }
        FUNC_8 (VAR_18);
    }

    *VAR_16 = VAR_20;
    *VAR_17 = (UINT32) (VAR_19 - VAR_15);

    FUNC_8 (VAR_18);
}
