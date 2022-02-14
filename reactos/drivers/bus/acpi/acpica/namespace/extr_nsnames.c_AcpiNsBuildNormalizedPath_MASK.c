
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_5__ {struct TYPE_5__* Parent; int Name; } ;
typedef scalar_t__ BOOLEAN ;
typedef TYPE_1__ ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (char*,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int,char,int) ;
 char VAR_1 ;
 char VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int) ;

UINT32
FUNC_4 (
    ACPI_NAMESPACE_NODE *VAR_6,
    char *VAR_7,
    UINT32 VAR_8,
    BOOLEAN VAR_9)
{
    UINT32 VAR_10 = 0, VAR_11;
    char VAR_12[VAR_0];
    BOOLEAN VAR_13;
    char VAR_14, *VAR_15, *VAR_16;
    ACPI_NAMESPACE_NODE *VAR_17;


    FUNC_0 (VAR_5, VAR_6);
    if (!VAR_7)
    {
        VAR_8 = 0;
    }

    if (!VAR_6)
    {
        goto BuildTrailingNull;
    }

    VAR_17 = VAR_6;
    while (VAR_17 && VAR_17 != VAR_3)
    {
        if (VAR_17 != VAR_6)
        {
            do { if ((VAR_10) < (VAR_8)) { (VAR_7)[(VAR_10)] = (VAR_1); } (VAR_10)++; } while (0);
        }

        FUNC_1 (VAR_12, &VAR_17->Name);
        VAR_13 = VAR_9;
        for (VAR_11 = 0; VAR_11 < 4; VAR_11++)
        {
            VAR_14 = VAR_12[4-VAR_11-1];
            if (VAR_13 && VAR_14 != '_')
            {
                VAR_13 = VAR_4;
            }
            if (!VAR_13)
            {
                do { if ((VAR_10) < (VAR_8)) { (VAR_7)[(VAR_10)] = (VAR_14); } (VAR_10)++; } while (0);
            }
        }

        VAR_17 = VAR_17->Parent;
    }

    do { if ((VAR_10) < (VAR_8)) { (VAR_7)[(VAR_10)] = (VAR_2); } (VAR_10)++; } while (0);



    if (VAR_10 <= VAR_8)
    {
        VAR_15 = VAR_7;
        VAR_16 = VAR_7+VAR_10 - 1;

        while (VAR_15 < VAR_16)
        {
            VAR_14 = *VAR_15;
            *VAR_15++ = *VAR_16;
            *VAR_16-- = VAR_14;
        }
    }



BuildTrailingNull:
    do { if ((VAR_10) < (VAR_8)) { (VAR_7)[(VAR_10)] = ('\0'); } (VAR_10)++; } while (0);



    FUNC_3 (VAR_10);
}
