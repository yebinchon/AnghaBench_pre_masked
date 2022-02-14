
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_12__ {int Flags; scalar_t__ Type; TYPE_2__* Object; } ;
struct TYPE_10__ {int ArgumentList; int ExpectedBtypes; } ;
struct TYPE_11__ {TYPE_3__ Info; } ;
struct TYPE_8__ {scalar_t__ ParamCount; } ;
struct TYPE_9__ {TYPE_1__ Method; } ;
typedef TYPE_4__ ACPI_PREDEFINED_INFO ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

void
FUNC_3 (
    char *VAR_5,
    ACPI_NAMESPACE_NODE *VAR_6,
    const ACPI_PREDEFINED_INFO *VAR_7)
{
    UINT32 VAR_8;
    UINT32 VAR_9;


    if (!VAR_7 || (VAR_6->Flags & VAR_3))
    {
        return;
    }



    VAR_9 =
        FUNC_2 (VAR_7->Info.ArgumentList);





    if (VAR_6->Type != VAR_0)
    {
        if (VAR_9 > 0)
        {


            FUNC_0 ((VAR_2, VAR_5, VAR_1,
                "Object (%s) must be a control method with %u arguments",
                FUNC_1 (VAR_6->Type), VAR_9));
        }
        else if (!VAR_9 && !VAR_7->Info.ExpectedBtypes)
        {


            FUNC_0 ((VAR_2, VAR_5, VAR_1,
                "Object (%s) must be a control method "
                "with no arguments and no return value",
                FUNC_1 (VAR_6->Type)));
        }

        return;
    }
    VAR_8 = VAR_6->Object->Method.ParamCount;

    if (VAR_8 < VAR_9)
    {
        FUNC_0 ((VAR_2, VAR_5, VAR_1,
            "Insufficient arguments - "
            "ASL declared %u, ACPI requires %u",
            VAR_8, VAR_9));
    }
    else if ((VAR_8 > VAR_9) &&
        !(VAR_7->Info.ArgumentList & VAR_4))
    {
        FUNC_0 ((VAR_2, VAR_5, VAR_1,
            "Excess arguments - "
            "ASL declared %u, ACPI requires %u",
            VAR_8, VAR_9));
    }
}
