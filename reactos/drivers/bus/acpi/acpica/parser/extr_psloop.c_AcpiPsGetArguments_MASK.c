
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


typedef int UINT8 ;
typedef void* UINT32 ;
struct TYPE_31__ {int * PkgEnd; int * Aml; } ;
struct TYPE_26__ {void* Length; int * Data; } ;
struct TYPE_25__ {int AmlOpcode; TYPE_2__* Parent; int AmlOpName; } ;
struct TYPE_30__ {TYPE_4__ Named; TYPE_3__ Common; } ;
struct TYPE_29__ {TYPE_9__ ParserState; TYPE_6__* ControlState; int ArgCount; int PassNumber; int ArgTypes; int * Aml; } ;
struct TYPE_27__ {int * PackageEnd; } ;
struct TYPE_28__ {TYPE_5__ Control; } ;
struct TYPE_23__ {int AmlOpcode; } ;
struct TYPE_24__ {TYPE_1__ Common; } ;
typedef TYPE_7__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_8__ ACPI_PARSE_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_7__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;





 int VAR_4 ;






 int FUNC_3 (TYPE_7__*) ;
 int FUNC_4 (TYPE_8__*,TYPE_8__*) ;
 int FUNC_5 (TYPE_7__*,TYPE_9__*,int ,TYPE_8__**) ;
 int FUNC_6 (TYPE_7__*,TYPE_9__*,TYPE_8__*,int ) ;
 int FUNC_7 (TYPE_9__*,int ,TYPE_8__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_11 (
    ACPI_WALK_STATE *VAR_6,
    UINT8 *VAR_7,
    ACPI_PARSE_OBJECT *VAR_8)
{
    ACPI_STATUS VAR_9 = VAR_3;
    ACPI_PARSE_OBJECT *VAR_10 = ((void*)0);


    FUNC_2 (VAR_5, VAR_6);


    FUNC_0 ((VAR_0,
        "Get arguments for opcode [%s]\n", VAR_8->Common.AmlOpName));

    switch (VAR_8->Common.AmlOpcode)
    {
    case 137:
    case 128:
    case 136:
    case 132:
    case 131:



        FUNC_7 (&(VAR_6->ParserState),
            FUNC_8 (VAR_6->ArgTypes), VAR_8);
        break;

    case 135:

        VAR_9 = FUNC_6 (VAR_6,
            &(VAR_6->ParserState), VAR_8, VAR_2);
        if (FUNC_1 (VAR_9))
        {
            FUNC_10 (VAR_9);
        }

        VAR_6->ArgTypes = 0;
        break;

    default:



        while (FUNC_8 (VAR_6->ArgTypes) &&
            !VAR_6->ArgCount)
        {
            VAR_6->Aml = VAR_6->ParserState.Aml;

            switch (VAR_8->Common.AmlOpcode)
            {
            case 134:
            case 138:
            case 133:
            case 130:
            case 129:

                break;

            default:

                FUNC_3 (VAR_6);
                break;
            }

            VAR_9 = FUNC_5 (VAR_6, &(VAR_6->ParserState),
                FUNC_8 (VAR_6->ArgTypes), &VAR_10);
            if (FUNC_1 (VAR_9))
            {
                FUNC_10 (VAR_9);
            }

            if (VAR_10)
            {
                FUNC_4 (VAR_8, VAR_10);
            }

            FUNC_9 (VAR_6->ArgTypes);
        }

        FUNC_0 ((VAR_0,
            "Final argument count: %8.8X pass %u\n",
            VAR_6->ArgCount, VAR_6->PassNumber));



        switch (VAR_8->Common.AmlOpcode)
        {
        case 134:






            VAR_8->Named.Data = VAR_6->ParserState.Aml;
            VAR_8->Named.Length = (UINT32)
                (VAR_6->ParserState.PkgEnd - VAR_6->ParserState.Aml);



            VAR_6->ParserState.Aml = VAR_6->ParserState.PkgEnd;
            VAR_6->ArgCount = 0;
            break;

        case 138:
        case 133:
        case 130:

            if ((VAR_8->Common.Parent) &&
                (VAR_8->Common.Parent->Common.AmlOpcode == VAR_4) &&
                (VAR_6->PassNumber <= VAR_1))
            {
                FUNC_0 (*(VAR_0,
                    "Setup Package/Buffer: Pass %u, AML Ptr: %p\n",
                    VAR_6->PassNumber, VAR_7));





                VAR_8->Named.Data = VAR_7;
                VAR_8->Named.Length = (UINT32)
                    (VAR_6->ParserState.PkgEnd - VAR_7);



                VAR_6->ParserState.Aml = VAR_6->ParserState.PkgEnd;
                VAR_6->ArgCount = 0;
            }
            break;

        case 129:

            if (VAR_6->ControlState)
            {
                VAR_6->ControlState->Control.PackageEnd =
                    VAR_6->ParserState.PkgEnd;
            }
            break;

        default:



            break;
        }

        break;
    }

    FUNC_10 (VAR_3);
}
