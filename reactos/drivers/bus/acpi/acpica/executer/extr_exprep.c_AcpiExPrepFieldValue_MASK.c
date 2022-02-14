
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_21__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_16__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef int UINT8 ;
typedef scalar_t__ UINT32 ;
typedef int UINT16 ;
struct TYPE_35__ {int Length; int Data; } ;
struct TYPE_34__ {int AmlLength; int AmlStart; } ;
struct TYPE_33__ {int Flags; TYPE_11__* NextObject; } ;
struct TYPE_32__ {TYPE_16__* BankObj; TYPE_16__* RegionObj; int BaseByteOffset; int StartFieldBitOffset; int Value; } ;
struct TYPE_31__ {int AccessByteWidth; TYPE_16__* RegionObj; int BaseByteOffset; int StartFieldBitOffset; int PinNumberIndex; int ResourceLength; int ResourceBuffer; int AccessLength; } ;
struct TYPE_30__ {int BitLength; int AccessByteWidth; int Node; } ;
struct TYPE_29__ {int SpaceId; } ;
struct TYPE_28__ {int Length; int Pointer; } ;
struct TYPE_27__ {TYPE_9__ Named; } ;
struct TYPE_26__ {TYPE_11__* Object; } ;
struct TYPE_25__ {TYPE_3__ Region; } ;
struct TYPE_24__ {int FieldType; int FieldNode; int FieldBitPosition; int DataRegisterNode; int RegisterNode; int RegionNode; int BankValue; int PinNumberIndex; int ResourceLength; int ResourceBuffer; TYPE_1__* ConnectionNode; int AccessLength; int FieldBitLength; int Attribute; int FieldFlags; } ;
struct TYPE_22__ {TYPE_16__* DataObj; TYPE_16__* IndexObj; scalar_t__ Value; int BaseByteOffset; int StartFieldBitOffset; int AccessByteWidth; } ;
struct TYPE_23__ {TYPE_10__ IndexField; TYPE_5__ Field; TYPE_8__ Extra; TYPE_7__ Common; TYPE_6__ BankField; TYPE_4__ CommonField; TYPE_2__ Buffer; } ;
typedef int ACPI_STATUS ;
typedef TYPE_11__ ACPI_OPERAND_OBJECT ;
typedef TYPE_12__ ACPI_CREATE_FIELD_INFO ;


 int VAR_0 ;
 TYPE_21__* FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;



 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (TYPE_11__*) ;
 int FUNC_9 (TYPE_11__*,int ,int ,int ,int ) ;
 int FUNC_10 (int ,TYPE_11__*,scalar_t__) ;
 void* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (TYPE_16__*) ;
 TYPE_11__* FUNC_14 (int) ;
 int FUNC_15 (TYPE_11__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (TYPE_11__*) ;
 int VAR_10 ;
 int FUNC_19 (int ) ;

ACPI_STATUS
FUNC_20 (
    ACPI_CREATE_FIELD_INFO *VAR_11)
{
    ACPI_OPERAND_OBJECT *VAR_12;
    ACPI_OPERAND_OBJECT *VAR_13 = ((void*)0);
    ACPI_STATUS VAR_14;
    UINT32 VAR_15;
    UINT32 VAR_16;


    FUNC_5 (VAR_10);




    if (VAR_11->FieldType != 129)
    {
        if (!VAR_11->RegionNode)
        {
            FUNC_3 ((VAR_7, "Null RegionNode"));
            FUNC_19 (VAR_5);
        }

        VAR_16 = FUNC_12 (VAR_11->RegionNode);
        if (VAR_16 != VAR_3)
        {
            FUNC_3 ((VAR_7, "Needed Region, found type 0x%X (%s)",
                VAR_16, FUNC_17 (VAR_16)));

            FUNC_19 (VAR_6);
        }
    }



    VAR_12 = FUNC_14 (VAR_11->FieldType);
    if (!VAR_12)
    {
        FUNC_19 (VAR_8);
    }



    VAR_12->CommonField.Node = VAR_11->FieldNode;
    VAR_14 = FUNC_9 (VAR_12,
        VAR_11->FieldFlags, VAR_11->Attribute,
        VAR_11->FieldBitPosition, VAR_11->FieldBitLength);
    if (FUNC_4 (VAR_14))
    {
        FUNC_15 (VAR_12);
        FUNC_19 (VAR_14);
    }



    switch (VAR_11->FieldType)
    {
    case 128:

        VAR_12->Field.RegionObj = FUNC_11 (VAR_11->RegionNode);



        VAR_12->Field.AccessLength = VAR_11->AccessLength;

        if (VAR_11->ConnectionNode)
        {
            VAR_13 = VAR_11->ConnectionNode->Object;
            if (!(VAR_13->Common.Flags & VAR_9))
            {
                VAR_14 = FUNC_8 (VAR_13);
                if (FUNC_4 (VAR_14))
                {
                    FUNC_15 (VAR_12);
                    FUNC_19 (VAR_14);
                }
            }

            VAR_12->Field.ResourceBuffer =
                VAR_13->Buffer.Pointer;
            VAR_12->Field.ResourceLength =
                (UINT16) VAR_13->Buffer.Length;
        }
        else if (VAR_11->ResourceBuffer)
        {
            VAR_12->Field.ResourceBuffer = VAR_11->ResourceBuffer;
            VAR_12->Field.ResourceLength = VAR_11->ResourceLength;
        }

        VAR_12->Field.PinNumberIndex = VAR_11->PinNumberIndex;



        if ((VAR_12->Field.RegionObj->Region.SpaceId == VAR_0) &&
            (VAR_12->CommonField.BitLength > 8))
        {
            VAR_15 = FUNC_6 (
                VAR_12->CommonField.BitLength);



            if (VAR_15 < 256)
            {
                VAR_12->CommonField.AccessByteWidth =
                    (UINT8) VAR_15;
            }
        }



        FUNC_13 (VAR_12->Field.RegionObj);

        FUNC_1 ((VAR_1,
            "RegionField: BitOff %X, Off %X, Gran %X, Region %p\n",
            VAR_12->Field.StartFieldBitOffset,
            VAR_12->Field.BaseByteOffset,
            VAR_12->Field.AccessByteWidth,
            VAR_12->Field.RegionObj));
        break;

    case 130:

        VAR_12->BankField.Value = VAR_11->BankValue;
        VAR_12->BankField.RegionObj =
            FUNC_11 (VAR_11->RegionNode);
        VAR_12->BankField.BankObj =
            FUNC_11 (VAR_11->RegisterNode);



        FUNC_13 (VAR_12->BankField.RegionObj);
        FUNC_13 (VAR_12->BankField.BankObj);

        FUNC_1 ((VAR_1,
            "Bank Field: BitOff %X, Off %X, Gran %X, Region %p, BankReg %p\n",
            VAR_12->BankField.StartFieldBitOffset,
            VAR_12->BankField.BaseByteOffset,
            VAR_12->Field.AccessByteWidth,
            VAR_12->BankField.RegionObj,
            VAR_12->BankField.BankObj));






        VAR_13 = VAR_12->Common.NextObject;
        VAR_13->Extra.AmlStart = FUNC_0 (VAR_2,
            VAR_11->DataRegisterNode)->Named.Data;
        VAR_13->Extra.AmlLength = FUNC_0 (VAR_2,
            VAR_11->DataRegisterNode)->Named.Length;

        break;

    case 129:



        VAR_12->IndexField.IndexObj =
            FUNC_11 (VAR_11->RegisterNode);
        VAR_12->IndexField.DataObj =
            FUNC_11 (VAR_11->DataRegisterNode);

        if (!VAR_12->IndexField.DataObj || !VAR_12->IndexField.IndexObj)
        {
            FUNC_3 ((VAR_7, "Null Index Object during field prep"));
            FUNC_15 (VAR_12);
            FUNC_19 (VAR_4);
        }



        FUNC_13 (VAR_12->IndexField.DataObj);
        FUNC_13 (VAR_12->IndexField.IndexObj);
        VAR_12->IndexField.Value = (UINT32) FUNC_7 (
            FUNC_2 (VAR_11->FieldBitPosition),
            VAR_12->IndexField.AccessByteWidth);

        FUNC_1 ((VAR_1,
            "IndexField: BitOff %X, Off %X, Value %X, "
            "Gran %X, Index %p, Data %p\n",
            VAR_12->IndexField.StartFieldBitOffset,
            VAR_12->IndexField.BaseByteOffset,
            VAR_12->IndexField.Value,
            VAR_12->Field.AccessByteWidth,
            VAR_12->IndexField.IndexObj,
            VAR_12->IndexField.DataObj));
        break;

    default:



        break;
    }





    VAR_14 = FUNC_10 (
        VAR_11->FieldNode, VAR_12, FUNC_12 (VAR_11->FieldNode));

    FUNC_1 ((VAR_1,
        "Set NamedObj %p [%4.4s], ObjDesc %p\n",
        VAR_11->FieldNode, FUNC_16 (VAR_11->FieldNode), VAR_12));



    FUNC_18 (VAR_12);
    FUNC_19 (VAR_14);
}
