
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int UINT64 ;
typedef scalar_t__ UINT32 ;
struct TYPE_28__ {int FieldFlags; int BaseByteOffset; int StartFieldBitOffset; int BitLength; } ;
struct TYPE_27__ {scalar_t__ Type; int Flags; } ;
struct TYPE_26__ {int BitLength; scalar_t__ BaseByteOffset; TYPE_5__* RegionObj; } ;
struct TYPE_22__ {int Value; } ;
struct TYPE_21__ {void* Pointer; } ;
struct TYPE_29__ {TYPE_8__ CommonField; TYPE_7__ Common; TYPE_6__ Field; TYPE_2__ Integer; TYPE_1__ Buffer; } ;
struct TYPE_24__ {scalar_t__ InternalPccBuffer; } ;
struct TYPE_23__ {scalar_t__ SpaceId; } ;
struct TYPE_25__ {TYPE_4__ Field; TYPE_3__ Region; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_SIZE ;
typedef TYPE_9__ ACPI_OPERAND_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_9__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_9__*,void*,scalar_t__) ;
 int FUNC_7 (TYPE_9__*,void*) ;
 int FUNC_8 (TYPE_9__*,TYPE_9__**) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_13 ;
 TYPE_9__* FUNC_10 (scalar_t__) ;
 TYPE_9__* FUNC_11 (int ) ;
 int FUNC_12 (TYPE_9__*) ;
 int VAR_14 ;
 int FUNC_13 (void*,scalar_t__,scalar_t__) ;
 int FUNC_14 (int ) ;

ACPI_STATUS
FUNC_15 (
    ACPI_WALK_STATE *VAR_15,
    ACPI_OPERAND_OBJECT *VAR_16,
    ACPI_OPERAND_OBJECT **VAR_17)
{
    ACPI_STATUS VAR_18;
    ACPI_OPERAND_OBJECT *VAR_19;
    void *VAR_20;
    UINT32 VAR_21;


    FUNC_2 (VAR_14, VAR_16);




    if (!VAR_16)
    {
        FUNC_14 (VAR_8);
    }
    if (!VAR_17)
    {
        FUNC_14 (VAR_9);
    }

    if (VAR_16->Common.Type == VAR_6)
    {




        if (!(VAR_16->Common.Flags & VAR_12))
        {
            VAR_18 = FUNC_4 (VAR_16);
            if (FUNC_1 (VAR_18))
            {
                FUNC_14 (VAR_18);
            }
        }
    }
    else if ((VAR_16->Common.Type == VAR_7) &&
        (VAR_16->Field.RegionObj->Region.SpaceId == VAR_4 ||
         VAR_16->Field.RegionObj->Region.SpaceId == VAR_1 ||
         VAR_16->Field.RegionObj->Region.SpaceId == VAR_2))
    {


        VAR_18 = FUNC_8 (VAR_16, VAR_17);
        FUNC_14 (VAR_18);
    }
    VAR_21 = (ACPI_SIZE) FUNC_3 (
        VAR_16->Field.BitLength);

    if (VAR_21 > VAR_13)
    {


        VAR_19 = FUNC_10 (VAR_21);
        if (!VAR_19)
        {
            FUNC_14 (VAR_10);
        }
        VAR_20 = VAR_19->Buffer.Pointer;
    }
    else
    {


        VAR_19 = FUNC_11 ((UINT64) 0);
        if (!VAR_19)
        {
            FUNC_14 (VAR_10);
        }

        VAR_21 = VAR_13;
        VAR_20 = &VAR_19->Integer.Value;
    }

    if ((VAR_16->Common.Type == VAR_7) &&
        (VAR_16->Field.RegionObj->Region.SpaceId == VAR_0))
    {


        VAR_18 = FUNC_7 (VAR_16, VAR_20);
        goto Exit;
    }
    else if ((VAR_16->Common.Type == VAR_7) &&
        (VAR_16->Field.RegionObj->Region.SpaceId == VAR_3))
    {




        FUNC_0 ((VAR_5,
            "PCC FieldRead bits %u\n", VAR_16->Field.BitLength));

        FUNC_13 (VAR_20, VAR_16->Field.RegionObj->Field.InternalPccBuffer +
        VAR_16->Field.BaseByteOffset, (ACPI_SIZE) FUNC_3 (
            VAR_16->Field.BitLength));

        *VAR_17 = VAR_19;
        return VAR_11;
    }

    FUNC_0 ((VAR_5,
        "FieldRead [TO]:   Obj %p, Type %X, Buf %p, ByteLen %X\n",
        VAR_16, VAR_16->Common.Type, VAR_20, VAR_21));
    FUNC_0 ((VAR_5,
        "FieldRead [FROM]: BitLen %X, BitOff %X, ByteOff %X\n",
        VAR_16->CommonField.BitLength,
        VAR_16->CommonField.StartFieldBitOffset,
        VAR_16->CommonField.BaseByteOffset));



    FUNC_5 (VAR_16->CommonField.FieldFlags);



    VAR_18 = FUNC_6 (VAR_16, VAR_20, VAR_21);
    FUNC_9 (VAR_16->CommonField.FieldFlags);


Exit:
    if (FUNC_1 (VAR_18))
    {
        FUNC_12 (VAR_19);
    }
    else
    {
        *VAR_17 = VAR_19;
    }

    FUNC_14 (VAR_18);
}
