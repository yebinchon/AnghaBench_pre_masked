
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ Length; int * Pointer; } ;
struct TYPE_6__ {scalar_t__ Type; } ;
typedef scalar_t__ BOOLEAN ;
typedef scalar_t__ ACPI_STRING ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_OBJECT_TYPE ;
typedef int ACPI_OBJECT_LIST ;
typedef TYPE_1__ ACPI_OBJECT ;
typedef int ACPI_HANDLE ;
typedef TYPE_2__ ACPI_BUFFER ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int (*) (int ,scalar_t__,int *,TYPE_2__*,scalar_t__)) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int *,int *,TYPE_2__*) ;
 int FUNC_5 (int ,scalar_t__,int *) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_9 (int ) ;

ACPI_STATUS
FUNC_10 (
    ACPI_HANDLE VAR_9,
    ACPI_STRING VAR_10,
    ACPI_OBJECT_LIST *VAR_11,
    ACPI_BUFFER *VAR_12,
    ACPI_OBJECT_TYPE VAR_13)
{
    ACPI_STATUS VAR_14;
    BOOLEAN VAR_15 = VAR_7;
    ACPI_HANDLE VAR_16;
    char *VAR_17;


    FUNC_3 (FUNC_10);




    if (!VAR_12)
    {
        FUNC_9 (VAR_2);
    }

    if (VAR_12->Length == VAR_0)
    {
        VAR_15 = VAR_8;
    }



    VAR_16 = VAR_9;
    if (VAR_10)
    {
        VAR_14 = FUNC_5 (VAR_9, VAR_10, &VAR_16);
        if (FUNC_1 (VAR_14))
        {
            FUNC_9 (VAR_14);
        }
    }

    VAR_17 = FUNC_6 (VAR_16);
    if (!VAR_17)
    {
        FUNC_9 (VAR_4);
    }



    VAR_14 = FUNC_4 (VAR_16, ((void*)0), VAR_11,
        VAR_12);
    if (FUNC_1 (VAR_14))
    {
        goto Exit;
    }



    if (VAR_13 == VAR_1)
    {
        goto Exit;
    }

    if (VAR_12->Length == 0)
    {


        FUNC_0 ((VAR_3, "%s did not return any object",
            VAR_17));
        VAR_14 = VAR_5;
        goto Exit;
    }



    if (((ACPI_OBJECT *) VAR_12->Pointer)->Type == VAR_13)
    {
        goto Exit;
    }



    FUNC_0 ((VAR_3,
        "Incorrect return type from %s - received [%s], requested [%s]",
        VAR_17,
        FUNC_8 (((ACPI_OBJECT *) VAR_12->Pointer)->Type),
        FUNC_8 (VAR_13)));

    if (VAR_15)
    {







        FUNC_7 (VAR_12->Pointer);
        VAR_12->Pointer = ((void*)0);
    }

    VAR_12->Length = 0;
    VAR_14 = VAR_6;

Exit:
    FUNC_2 (VAR_17);
    FUNC_9 (VAR_14);
}
