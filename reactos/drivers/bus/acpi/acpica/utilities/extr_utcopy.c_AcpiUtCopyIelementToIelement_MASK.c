
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int UINT8 ;
typedef size_t UINT32 ;
struct TYPE_19__ {size_t Index; TYPE_6__* ThisTargetObj; TYPE_2__* DestObject; } ;
struct TYPE_21__ {TYPE_5__ Pkg; } ;
struct TYPE_18__ {int Flags; int Type; } ;
struct TYPE_17__ {int Count; } ;
struct TYPE_20__ {TYPE_4__ Common; TYPE_3__ Package; } ;
struct TYPE_15__ {int * Elements; } ;
struct TYPE_16__ {TYPE_1__ Package; } ;
typedef int ACPI_STATUS ;
typedef TYPE_6__ ACPI_OPERAND_OBJECT ;
typedef TYPE_7__ ACPI_GENERIC_STATE ;




 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_6__*,TYPE_6__*) ;
 TYPE_6__* FUNC_3 (int ) ;
 TYPE_6__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_6__*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_6 (
    UINT8 VAR_3,
    ACPI_OPERAND_OBJECT *VAR_4,
    ACPI_GENERIC_STATE *VAR_5,
    void *VAR_6)
{
    ACPI_STATUS VAR_7 = VAR_2;
    UINT32 VAR_8;
    ACPI_OPERAND_OBJECT **VAR_9;
    ACPI_OPERAND_OBJECT *VAR_10;


    FUNC_1 ();


    VAR_8 = VAR_5->Pkg.Index;
    VAR_9 = (ACPI_OPERAND_OBJECT **)
        &VAR_5->Pkg.DestObject->Package.Elements[VAR_8];

    switch (VAR_3)
    {
    case 128:



        if (VAR_4)
        {



            VAR_10 = FUNC_3 (
                VAR_4->Common.Type);
            if (!VAR_10)
            {
                return (VAR_1);
            }

            VAR_7 = FUNC_2 (VAR_4, VAR_10);
            if (FUNC_0 (VAR_7))
            {
                goto ErrorExit;
            }

            *VAR_9 = VAR_10;
        }
        else
        {


            *VAR_9 = ((void*)0);
        }
        break;

    case 129:




        VAR_10 = FUNC_4 (
            VAR_4->Package.Count);
        if (!VAR_10)
        {
            return (VAR_1);
        }

        VAR_10->Common.Flags = VAR_4->Common.Flags;



        VAR_5->Pkg.ThisTargetObj = VAR_10;



        *VAR_9 = VAR_10;
        break;

    default:

        return (VAR_0);
    }

    return (VAR_7);

ErrorExit:
    FUNC_5 (VAR_10);
    return (VAR_7);
}
