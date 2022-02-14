
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;


struct TYPE_19__ {int Type; } ;
struct TYPE_18__ {int Class; int Node; } ;
struct TYPE_17__ {int Length; } ;
struct TYPE_16__ {int Length; } ;
struct TYPE_20__ {TYPE_5__ Common; TYPE_4__ Reference; TYPE_3__ Buffer; TYPE_2__ String; } ;
struct TYPE_15__ {int Ascii; } ;
struct TYPE_14__ {TYPE_1__ Name; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_SIZE ;
typedef TYPE_6__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_OBJECT ;


 TYPE_12__* FUNC_0 (int ,TYPE_6__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_6__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int VAR_1 ;

 int FUNC_4 (int) ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int VAR_7 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_9 (
    ACPI_OPERAND_OBJECT *VAR_8,
    ACPI_SIZE *VAR_9)
{
    ACPI_SIZE VAR_10;
    ACPI_SIZE VAR_11;
    ACPI_STATUS VAR_12 = VAR_5;


    FUNC_2 (VAR_7, VAR_8);




    VAR_10 = sizeof (ACPI_OBJECT);



    if (!VAR_8)
    {




        *VAR_9 = FUNC_4 (VAR_10);
        FUNC_8 (VAR_5);
    }



    if (FUNC_3 (VAR_8) == VAR_0)
    {


        FUNC_1 ((VAR_4,
            "Received a namespace node [%4.4s] "
            "where an operand object is required",
            FUNC_0 (VAR_1, VAR_8)->Name.Ascii));
        FUNC_8 (VAR_2);
    }







    switch (VAR_8->Common.Type)
    {
    case 128:

        VAR_10 += (ACPI_SIZE) VAR_8->String.Length + 1;
        break;

    case 133:

        VAR_10 += (ACPI_SIZE) VAR_8->Buffer.Length;
        break;

    case 132:
    case 129:
    case 130:



        break;

    case 131:

        switch (VAR_8->Reference.Class)
        {
        case 134:




            VAR_11 = FUNC_5 (VAR_8->Reference.Node);
            if (!VAR_11)
            {
                FUNC_8 (VAR_3);
            }

            VAR_10 += FUNC_4 (VAR_11);
            break;

        default:





            FUNC_1 ((VAR_4, "Cannot convert to external object - "
                "unsupported Reference Class [%s] 0x%X in object %p",
                FUNC_7 (VAR_8),
                VAR_8->Reference.Class, VAR_8));
            VAR_12 = VAR_6;
            break;
        }
        break;

    default:

        FUNC_1 ((VAR_4, "Cannot convert to external object - "
            "unsupported type [%s] 0x%X in object %p",
            FUNC_6 (VAR_8),
            VAR_8->Common.Type, VAR_8));
        VAR_12 = VAR_6;
        break;
    }







    *VAR_9 = FUNC_4 (VAR_10);
    FUNC_8 (VAR_12);
}
