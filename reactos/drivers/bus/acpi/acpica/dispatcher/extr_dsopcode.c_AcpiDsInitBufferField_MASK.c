
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_21__ {int Flags; TYPE_5__* BufferObj; } ;
struct TYPE_20__ {scalar_t__ Type; int ReferenceCount; } ;
struct TYPE_19__ {scalar_t__ Length; } ;
struct TYPE_18__ {scalar_t__ Value; } ;
struct TYPE_22__ {TYPE_4__ BufferField; TYPE_3__ Common; TYPE_2__ Buffer; TYPE_1__ Integer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (TYPE_5__*,int ,int ,int,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*) ;
 int FUNC_11 (TYPE_5__*) ;
 int VAR_12 ;
 int FUNC_12 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_13 (
    UINT16 VAR_13,
    ACPI_OPERAND_OBJECT *VAR_14,
    ACPI_OPERAND_OBJECT *VAR_15,
    ACPI_OPERAND_OBJECT *VAR_16,
    ACPI_OPERAND_OBJECT *VAR_17,
    ACPI_OPERAND_OBJECT *VAR_18)
{
    UINT32 VAR_19;
    UINT32 VAR_20;
    UINT32 VAR_21;
    UINT8 VAR_22;
    ACPI_STATUS VAR_23;


    FUNC_4 (VAR_12, VAR_14);




    if (VAR_15->Common.Type != VAR_1)
    {
        FUNC_2 ((VAR_6,
            "Target of Create Field is not a Buffer object - %s",
            FUNC_10 (VAR_15)));

        VAR_23 = VAR_4;
        goto Cleanup;
    }






    if (FUNC_5 (VAR_18) != VAR_0)
    {
        FUNC_2 ((VAR_6,
            "(%s) destination not a NS Node [%s]",
            FUNC_7 (VAR_13),
            FUNC_8 (VAR_18)));

        VAR_23 = VAR_4;
        goto Cleanup;
    }

    VAR_19 = (UINT32) VAR_16->Integer.Value;




    switch (VAR_13)
    {
    case 130:



        VAR_22 = VAR_7;
        VAR_20 = VAR_19;
        VAR_21 = (UINT32) VAR_17->Integer.Value;



        if (VAR_21 == 0)
        {
            FUNC_0 ((VAR_6,
                "Attempt to CreateField of length zero"));
            VAR_23 = VAR_5;
            goto Cleanup;
        }
        break;

    case 133:



        VAR_20 = VAR_19;
        VAR_21 = 1;
        VAR_22 = VAR_7;
        break;

    case 132:



        VAR_20 = 8 * VAR_19;
        VAR_21 = 8;
        VAR_22 = VAR_7;
        break;

    case 128:



        VAR_20 = 8 * VAR_19;
        VAR_21 = 16;
        VAR_22 = VAR_10;
        break;

    case 131:



        VAR_20 = 8 * VAR_19;
        VAR_21 = 32;
        VAR_22 = VAR_8;
        break;

    case 129:



        VAR_20 = 8 * VAR_19;
        VAR_21 = 64;
        VAR_22 = VAR_9;
        break;

    default:

        FUNC_2 ((VAR_6,
            "Unknown field creation opcode 0x%02X",
            VAR_13));
        VAR_23 = VAR_2;
        goto Cleanup;
    }



    if ((VAR_20 + VAR_21) >
        (8 * (UINT32) VAR_15->Buffer.Length))
    {
        VAR_23 = VAR_3;
        FUNC_1 ((VAR_6, VAR_23,
            "Field [%4.4s] at bit offset/length %u/%u "
            "exceeds size of target Buffer (%u bits)",
            FUNC_9 (VAR_18), VAR_20, VAR_21,
            8 * (UINT32) VAR_15->Buffer.Length));
        goto Cleanup;
    }






    VAR_23 = FUNC_6 (
        VAR_14, VAR_22, 0, VAR_20, VAR_21);
    if (FUNC_3 (VAR_23))
    {
        goto Cleanup;
    }

    VAR_14->BufferField.BufferObj = VAR_15;



    VAR_15->Common.ReferenceCount = (UINT16)
        (VAR_15->Common.ReferenceCount + VAR_14->Common.ReferenceCount);


Cleanup:



    FUNC_11 (VAR_16);
    FUNC_11 (VAR_15);

    if (VAR_13 == 130)
    {
        FUNC_11 (VAR_17);
    }



    if (FUNC_3 (VAR_23))
    {
        FUNC_11 (VAR_18);
    }
    else
    {


        VAR_14->BufferField.Flags |= VAR_11;
    }

    FUNC_12 (VAR_23);
}
