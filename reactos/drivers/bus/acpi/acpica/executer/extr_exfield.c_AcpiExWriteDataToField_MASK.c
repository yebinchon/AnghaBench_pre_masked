
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_10__ ;


typedef int UINT64 ;
typedef int UINT32 ;
struct TYPE_33__ {int FieldFlags; int BaseByteOffset; int StartFieldBitOffset; int BitLength; } ;
struct TYPE_32__ {int Type; int Flags; } ;
struct TYPE_31__ {int Length; void* Pointer; } ;
struct TYPE_30__ {int Length; void* Pointer; } ;
struct TYPE_29__ {int Value; } ;
struct TYPE_28__ {TYPE_3__* RegionObj; scalar_t__ BaseByteOffset; int BitLength; } ;
struct TYPE_26__ {scalar_t__ InternalPccBuffer; } ;
struct TYPE_25__ {scalar_t__ SpaceId; scalar_t__ Address; } ;
struct TYPE_27__ {TYPE_2__ Field; TYPE_1__ Region; } ;
struct TYPE_24__ {TYPE_9__ CommonField; TYPE_8__ Common; TYPE_7__ String; TYPE_6__ Buffer; TYPE_5__ Integer; TYPE_4__ Field; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef TYPE_10__ ACPI_OPERAND_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_10__*) ;
 scalar_t__ FUNC_3 (int ) ;

 int VAR_6 ;

 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_10__*) ;
 int FUNC_5 (TYPE_10__*,int ,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_10__*,void*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_10__*,TYPE_10__*,TYPE_10__**) ;
 int FUNC_10 (TYPE_10__*,TYPE_10__*,TYPE_10__**) ;
 int FUNC_11 (int) ;
 int VAR_13 ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ VAR_14 ;
 int FUNC_14 (scalar_t__,void*,int) ;
 int FUNC_15 (int ) ;

ACPI_STATUS
FUNC_16 (
    ACPI_OPERAND_OBJECT *VAR_15,
    ACPI_OPERAND_OBJECT *VAR_16,
    ACPI_OPERAND_OBJECT **VAR_17)
{
    ACPI_STATUS VAR_18;
    UINT32 VAR_19;
    UINT32 VAR_20;
    void *VAR_21;


    FUNC_2 (VAR_13, VAR_16);




    if (!VAR_15 || !VAR_16)
    {
        FUNC_15 (VAR_9);
    }

    if (VAR_16->Common.Type == VAR_6)
    {




        if (!(VAR_16->Common.Flags & VAR_12))
        {
            VAR_18 = FUNC_4 (VAR_16);
            if (FUNC_1 (VAR_18))
            {
                FUNC_15 (VAR_18);
            }
        }
    }
    else if ((VAR_16->Common.Type == VAR_7) &&
        (VAR_16->Field.RegionObj->Region.SpaceId == VAR_0))
    {


        VAR_18 = FUNC_9 (VAR_15, VAR_16, VAR_17);
        FUNC_15 (VAR_18);
    }
    else if ((VAR_16->Common.Type == VAR_7) &&
        (VAR_16->Field.RegionObj->Region.SpaceId == VAR_4 ||
         VAR_16->Field.RegionObj->Region.SpaceId == VAR_1 ||
         VAR_16->Field.RegionObj->Region.SpaceId == VAR_2))
    {


        VAR_18 = FUNC_10 (VAR_15, VAR_16, VAR_17);
        FUNC_15 (VAR_18);
    }
    else if ((VAR_16->Common.Type == VAR_7) &&
             (VAR_16->Field.RegionObj->Region.SpaceId == VAR_3))
    {







        VAR_20 = (ACPI_SIZE) FUNC_3 (
            VAR_16->Field.BitLength);
        FUNC_14 (VAR_16->Field.RegionObj->Field.InternalPccBuffer +
            VAR_16->Field.BaseByteOffset,
            VAR_15->Buffer.Pointer, VAR_20);

        if ((VAR_16->Field.RegionObj->Region.Address == VAR_14 &&
           FUNC_13 (VAR_16->Field.BaseByteOffset)) ||
           FUNC_12 (VAR_16->Field.BaseByteOffset))
        {


            FUNC_0 ((VAR_5,
                "PCC COMD field has been written. Invoking PCC handler now.\n"));

            VAR_18 = FUNC_5 (
                VAR_16, 0, (UINT64 *) VAR_16->Field.RegionObj->Field.InternalPccBuffer,
                VAR_8);
            FUNC_15 (VAR_18);
        }
        return (VAR_11);
    }




    switch (VAR_15->Common.Type)
    {
    case 129:

        VAR_21 = &VAR_15->Integer.Value;
        VAR_19 = sizeof (VAR_15->Integer.Value);
        break;

    case 130:

        VAR_21 = VAR_15->Buffer.Pointer;
        VAR_19 = VAR_15->Buffer.Length;
        break;

    case 128:

        VAR_21 = VAR_15->String.Pointer;
        VAR_19 = VAR_15->String.Length;
        break;

    default:
        FUNC_15 (VAR_10);
    }

    FUNC_0 ((VAR_5,
        "FieldWrite [FROM]: Obj %p (%s:%X), Buf %p, ByteLen %X\n",
        VAR_15, FUNC_11 (VAR_15->Common.Type),
        VAR_15->Common.Type, VAR_21, VAR_19));

    FUNC_0 ((VAR_5,
        "FieldWrite [TO]:   Obj %p (%s:%X), BitLen %X, BitOff %X, ByteOff %X\n",
        VAR_16, FUNC_11 (VAR_16->Common.Type),
        VAR_16->Common.Type,
        VAR_16->CommonField.BitLength,
        VAR_16->CommonField.StartFieldBitOffset,
        VAR_16->CommonField.BaseByteOffset));



    FUNC_6 (VAR_16->CommonField.FieldFlags);



    VAR_18 = FUNC_7 (VAR_16, VAR_21, VAR_19);
    FUNC_8 (VAR_16->CommonField.FieldFlags);
    FUNC_15 (VAR_18);
}
