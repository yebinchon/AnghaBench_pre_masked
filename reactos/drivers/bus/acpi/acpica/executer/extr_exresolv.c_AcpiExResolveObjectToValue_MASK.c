
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_19__ {int Type; } ;
struct TYPE_18__ {TYPE_1__* Node; int TargetType; TYPE_5__** Where; int Value; int Class; } ;
struct TYPE_21__ {TYPE_3__ Common; TYPE_2__ Reference; } ;
struct TYPE_20__ {int Opcode; } ;
struct TYPE_17__ {TYPE_5__* Object; int Type; } ;
typedef TYPE_4__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_5__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,int ,TYPE_4__*,TYPE_5__**) ;
 int FUNC_7 (TYPE_4__*,TYPE_5__*,TYPE_5__**) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_9 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_11 (
    ACPI_OPERAND_OBJECT **VAR_10,
    ACPI_WALK_STATE *VAR_11)
{
    ACPI_STATUS VAR_12 = VAR_6;
    ACPI_OPERAND_OBJECT *VAR_13;
    ACPI_OPERAND_OBJECT *VAR_14 = ((void*)0);
    UINT8 VAR_15;


    FUNC_3 (VAR_9);


    VAR_13 = *VAR_10;



    switch (VAR_13->Common.Type)
    {
    case 130:

        VAR_15 = VAR_13->Reference.Class;

        switch (VAR_15)
        {
        case 138:
        case 141:




            VAR_12 = FUNC_6 (VAR_15,
                VAR_13->Reference.Value, VAR_11, &VAR_14);
            if (FUNC_2 (VAR_12))
            {
                FUNC_10 (VAR_12);
            }

            FUNC_0 ((VAR_0, "[Arg/Local %X] ValueObj is %p\n",
                VAR_13->Reference.Value, VAR_14));





            FUNC_9 (VAR_13);
            *VAR_10 = VAR_14;
            break;

        case 139:

            switch (VAR_13->Reference.TargetType)
            {
            case 133:


                break;

            case 128:



                if ((VAR_11->Opcode == VAR_8) ||
                    (VAR_11->Opcode == VAR_7))
                {
                    break;
                }



                VAR_14 = *VAR_13->Reference.Where;
                if (VAR_14)
                {





                    FUNC_8 (VAR_14);
                    *VAR_10 = VAR_14;
                }
                else
                {




                    FUNC_1 ((VAR_5,
                        "Attempt to dereference an Index to "
                        "NULL package element Idx=%p",
                        VAR_13));
                    VAR_12 = VAR_4;
                }
                break;

            default:



                FUNC_1 ((VAR_5,
                    "Unknown TargetType 0x%X in Index/Reference object %p",
                    VAR_13->Reference.TargetType, VAR_13));
                VAR_12 = VAR_3;
                break;
            }
            break;

        case 136:
        case 140:
        case 135:



            break;

        case 137:



            if ((VAR_13->Reference.Node->Type == VAR_1) ||
                (VAR_13->Reference.Node->Type == VAR_2))
            {


                *VAR_10 = (void *) VAR_13->Reference.Node;
            }
            else
            {


                *VAR_10 = (VAR_13->Reference.Node)->Object;
                FUNC_8 (*VAR_10);
            }

            FUNC_9 (VAR_13);
            break;

        default:

            FUNC_1 ((VAR_5,
                "Unknown Reference type 0x%X in %p",
                VAR_15, VAR_13));
            VAR_12 = VAR_3;
            break;
        }
        break;

    case 134:

        VAR_12 = FUNC_4 (VAR_13);
        break;

    case 128:

        VAR_12 = FUNC_5 (VAR_13);
        break;

    case 133:
    case 129:
    case 132:
    case 131:

        FUNC_0 ((VAR_0,
            "FieldRead SourceDesc=%p Type=%X\n",
            VAR_13, VAR_13->Common.Type));

        VAR_12 = FUNC_7 (VAR_11, VAR_13, &VAR_14);



        FUNC_9 (*VAR_10);
        *VAR_10 = (void *) VAR_14;
        break;

    default:

        break;
    }

    FUNC_10 (VAR_12);
}
