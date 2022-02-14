
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
typedef struct TYPE_24__ TYPE_15__ ;
typedef struct TYPE_23__ TYPE_14__ ;
typedef struct TYPE_22__ TYPE_13__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef int UINT8 ;
struct TYPE_33__ {int PblkLength; int PblkAddress; int ProcId; } ;
struct TYPE_32__ {int Node; int Class; } ;
struct TYPE_31__ {int ActualType; int Handle; } ;
struct TYPE_30__ {int Value; } ;
struct TYPE_29__ {int Value; } ;
struct TYPE_28__ {int Length; scalar_t__ Pointer; } ;
struct TYPE_27__ {int Length; scalar_t__ Pointer; } ;
struct TYPE_26__ {int Length; int * Pointer; } ;
struct TYPE_25__ {char* Pointer; int Length; } ;
struct TYPE_20__ {int ResourceOrder; int SystemLevel; } ;
struct TYPE_24__ {int Type; TYPE_11__ PowerResource; TYPE_9__ Processor; TYPE_7__ Reference; TYPE_5__ Integer; TYPE_2__ Buffer; TYPE_1__ String; } ;
struct TYPE_22__ {int Type; } ;
struct TYPE_21__ {int ResourceOrder; int SystemLevel; } ;
struct TYPE_19__ {int Length; int Address; int ProcId; } ;
struct TYPE_23__ {TYPE_13__ Common; TYPE_12__ PowerResource; TYPE_10__ Processor; TYPE_8__ Reference; TYPE_6__ Integer; TYPE_4__ Buffer; TYPE_3__ String; } ;
typedef int ACPI_STATUS ;
typedef scalar_t__ ACPI_SIZE ;
typedef TYPE_14__ ACPI_OPERAND_OBJECT ;
typedef TYPE_15__ ACPI_OBJECT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

 scalar_t__ FUNC_2 (int ) ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int VAR_4 ;
 int FUNC_5 (void*,void*,int ) ;
 int FUNC_6 (TYPE_15__*,int ,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_8 (
    ACPI_OPERAND_OBJECT *VAR_5,
    ACPI_OBJECT *VAR_6,
    UINT8 *VAR_7,
    ACPI_SIZE *VAR_8)
{
    ACPI_STATUS VAR_9 = VAR_1;


    FUNC_1 (VAR_4);


    *VAR_8 = 0;





    if (!VAR_5)
    {
        FUNC_7 (VAR_1);
    }



    FUNC_6 (VAR_6, 0, sizeof (ACPI_OBJECT));





    VAR_6->Type = VAR_5->Common.Type;



    switch (VAR_5->Common.Type)
    {
    case 128:

        VAR_6->String.Pointer = (char *) VAR_7;
        VAR_6->String.Length = VAR_5->String.Length;
        *VAR_8 = FUNC_2 (
            (ACPI_SIZE) VAR_5->String.Length + 1);

        FUNC_5 ((void *) VAR_7,
            (void *) VAR_5->String.Pointer,
            (ACPI_SIZE) VAR_5->String.Length + 1);
        break;

    case 133:

        VAR_6->Buffer.Pointer = VAR_7;
        VAR_6->Buffer.Length = VAR_5->Buffer.Length;
        *VAR_8 = FUNC_2 (
            VAR_5->String.Length);

        FUNC_5 ((void *) VAR_7,
            (void *) VAR_5->Buffer.Pointer,
            VAR_5->Buffer.Length);
        break;

    case 132:

        VAR_6->Integer.Value = VAR_5->Integer.Value;
        break;

    case 131:



        switch (VAR_5->Reference.Class)
        {
        case 134:




            VAR_6->Reference.Handle =
                VAR_5->Reference.Node;
            VAR_6->Reference.ActualType =
                FUNC_3 (VAR_5->Reference.Node);
            break;

        default:



            FUNC_7 (VAR_3);
        }
        break;

    case 129:

        VAR_6->Processor.ProcId =
            VAR_5->Processor.ProcId;
        VAR_6->Processor.PblkAddress =
            VAR_5->Processor.Address;
        VAR_6->Processor.PblkLength =
            VAR_5->Processor.Length;
        break;

    case 130:

        VAR_6->PowerResource.SystemLevel =
            VAR_5->PowerResource.SystemLevel;

        VAR_6->PowerResource.ResourceOrder =
            VAR_5->PowerResource.ResourceOrder;
        break;

    default:



        FUNC_0 ((VAR_0,
            "Unsupported object type, cannot convert to external object: %s",
            FUNC_4 (VAR_5->Common.Type)));

        FUNC_7 (VAR_2);
    }

    FUNC_7 (VAR_9);
}
