
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_23__ {int Type; } ;
struct TYPE_22__ {scalar_t__ Length; int * Pointer; } ;
struct TYPE_21__ {char* Pointer; scalar_t__ Length; } ;
struct TYPE_20__ {int Value; } ;
struct TYPE_24__ {TYPE_4__ Common; TYPE_3__ Buffer; TYPE_2__ String; TYPE_1__ Integer; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_SIZE ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_OBJECT_TYPE ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (scalar_t__) ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (TYPE_5__*,TYPE_5__**) ;
 int FUNC_5 (TYPE_5__*,TYPE_5__**,int ) ;
 int FUNC_6 (TYPE_5__*,TYPE_5__**) ;
 int FUNC_7 (TYPE_5__*,TYPE_5__**,int ) ;
 scalar_t__ VAR_6 ;
 TYPE_5__* FUNC_8 (scalar_t__) ;
 TYPE_5__* FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_5__*) ;
 int VAR_7 ;
 int FUNC_11 (char*,int *,scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*,char*) ;

ACPI_STATUS
FUNC_15 (
    ACPI_OPERAND_OBJECT *VAR_8,
    ACPI_OPERAND_OBJECT *VAR_9,
    ACPI_OPERAND_OBJECT **VAR_10,
    ACPI_WALK_STATE *VAR_11)
{
    ACPI_OPERAND_OBJECT *VAR_12 = VAR_8;
    ACPI_OPERAND_OBJECT *VAR_13 = VAR_9;
    ACPI_OPERAND_OBJECT *VAR_14 = ((void*)0);
    ACPI_OPERAND_OBJECT *VAR_15;
    char *VAR_16;
    ACPI_OBJECT_TYPE VAR_17;
    ACPI_OBJECT_TYPE VAR_18;
    ACPI_STATUS VAR_19;


    FUNC_2 (VAR_7);




    switch (VAR_8->Common.Type)
    {
    case 129:
    case 128:
    case 130:

        VAR_17 = VAR_8->Common.Type;
        break;

    default:



        VAR_19 = FUNC_6 (
            VAR_8, &VAR_12);
        if (FUNC_1 (VAR_19))
        {
            goto Cleanup;
        }

        VAR_17 = 128;
        break;
    }



    switch (VAR_9->Common.Type)
    {
    case 129:
    case 128:
    case 130:

        VAR_18 = VAR_9->Common.Type;
        break;

    default:



        VAR_19 = FUNC_6 (
            VAR_9, &VAR_13);
        if (FUNC_1 (VAR_19))
        {
            goto Cleanup;
        }

        VAR_18 = 128;
        break;
    }
    switch (VAR_17)
    {
    case 129:

        VAR_19 = FUNC_5 (VAR_13, &VAR_14,
            VAR_0);
        break;

    case 130:

        VAR_19 = FUNC_4 (VAR_13, &VAR_14);
        break;

    case 128:

        switch (VAR_18)
        {
        case 129:
        case 128:
        case 130:



            VAR_19 = FUNC_7 (
                VAR_13, &VAR_14, VAR_1);
            break;

        default:

            VAR_19 = VAR_5;
            break;
        }
        break;

    default:

        FUNC_0 ((VAR_3, "Invalid object type: 0x%X",
            VAR_8->Common.Type));
        VAR_19 = VAR_2;
    }

    if (FUNC_1 (VAR_19))
    {
        goto Cleanup;
    }



    if ((VAR_13 != VAR_9) &&
        (VAR_13 != VAR_14))
    {
        FUNC_10 (VAR_13);
    }

    VAR_13 = VAR_14;
    switch (VAR_17)
    {
    case 129:




        VAR_15 = FUNC_8 (
            (ACPI_SIZE) FUNC_3 (VAR_6));
        if (!VAR_15)
        {
            VAR_19 = VAR_4;
            goto Cleanup;
        }

        VAR_16 = (char *) VAR_15->Buffer.Pointer;



        FUNC_11 (VAR_16, &VAR_8->Integer.Value,
            VAR_6);



        FUNC_11 (VAR_16 + VAR_6,
            &VAR_13->Integer.Value, VAR_6);
        break;

    case 128:



        VAR_15 = FUNC_9 (
            ((ACPI_SIZE) VAR_12->String.Length +
            VAR_13->String.Length));
        if (!VAR_15)
        {
            VAR_19 = VAR_4;
            goto Cleanup;
        }

        VAR_16 = VAR_15->String.Pointer;



        FUNC_14 (VAR_16, VAR_12->String.Pointer);
        FUNC_13 (VAR_16, VAR_13->String.Pointer);
        break;

    case 130:



        VAR_15 = FUNC_8 (
            ((ACPI_SIZE) VAR_8->Buffer.Length +
            VAR_13->Buffer.Length));
        if (!VAR_15)
        {
            VAR_19 = VAR_4;
            goto Cleanup;
        }

        VAR_16 = (char *) VAR_15->Buffer.Pointer;



        FUNC_11 (VAR_16, VAR_8->Buffer.Pointer,
            VAR_8->Buffer.Length);
        FUNC_11 (VAR_16 + VAR_8->Buffer.Length,
            VAR_13->Buffer.Pointer,
            VAR_13->Buffer.Length);
        break;

    default:



        FUNC_0 ((VAR_3, "Invalid object type: 0x%X",
            VAR_8->Common.Type));
        VAR_19 = VAR_2;
        goto Cleanup;
    }

    *VAR_10 = VAR_15;

Cleanup:
    if (VAR_12 != VAR_8)
    {
        FUNC_10 (VAR_12);
    }

    if (VAR_13 != VAR_9)
    {
        FUNC_10 (VAR_13);
    }

    FUNC_12 (VAR_19);
}
