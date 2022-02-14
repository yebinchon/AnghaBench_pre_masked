
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {int NumSegments; char* InternalName; char* NextExternalChar; int NumCarats; scalar_t__ FullyQualified; } ;
typedef int ACPI_STATUS ;
typedef size_t ACPI_SIZE ;
typedef TYPE_1__ ACPI_NAMESTRING_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;

ACPI_STATUS
FUNC_5 (
    ACPI_NAMESTRING_INFO *VAR_9)
{
    UINT32 VAR_10 = VAR_9->NumSegments;
    char *VAR_11 = VAR_9->InternalName;
    const char *VAR_12 = VAR_9->NextExternalChar;
    char *VAR_13 = ((void*)0);
    UINT32 VAR_14;


    FUNC_1 (VAR_8);




    if (VAR_9->FullyQualified)
    {
        VAR_11[0] = VAR_7;

        if (VAR_10 <= 1)
        {
            VAR_13 = &VAR_11[1];
        }
        else if (VAR_10 == 2)
        {
            VAR_11[1] = VAR_4;
            VAR_13 = &VAR_11[2];
        }
        else
        {
            VAR_11[1] = VAR_5;
            VAR_11[2] = (char) VAR_10;
            VAR_13 = &VAR_11[3];
        }
    }
    else
    {




        VAR_14 = 0;
        if (VAR_9->NumCarats)
        {
            for (VAR_14 = 0; VAR_14 < VAR_9->NumCarats; VAR_14++)
            {
                VAR_11[VAR_14] = VAR_6;
            }
        }

        if (VAR_10 <= 1)
        {
            VAR_13 = &VAR_11[VAR_14];
        }
        else if (VAR_10 == 2)
        {
            VAR_11[VAR_14] = VAR_4;
            VAR_13 = &VAR_11[(ACPI_SIZE) VAR_14+1];
        }
        else
        {
            VAR_11[VAR_14] = VAR_5;
            VAR_11[(ACPI_SIZE) VAR_14+1] = (char) VAR_10;
            VAR_13 = &VAR_11[(ACPI_SIZE) VAR_14+2];
        }
    }



    for (; VAR_10; VAR_10--)
    {
        for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++)
        {
            if (FUNC_2 (*VAR_12) ||
               (*VAR_12 == 0))
            {


                VAR_13[VAR_14] = '_';
            }
            else
            {


                VAR_13[VAR_14] = (char) FUNC_4 ((int) *VAR_12);
                VAR_12++;
            }
        }



        if (!FUNC_2 (*VAR_12) &&
            (*VAR_12 != 0))
        {
            FUNC_3 (VAR_2);
        }



        VAR_12++;
        VAR_13 += VAR_1;
    }



    *VAR_13 = 0;

    if (VAR_9->FullyQualified)
    {
        FUNC_0 ((VAR_0, "Returning [%p] (abs) \"\\%s\"\n",
            VAR_11, VAR_11));
    }
    else
    {
        FUNC_0 ((VAR_0, "Returning [%p] (rel) \"%s\"\n",
            VAR_11, VAR_11));
    }

    FUNC_3 (VAR_3);
}
