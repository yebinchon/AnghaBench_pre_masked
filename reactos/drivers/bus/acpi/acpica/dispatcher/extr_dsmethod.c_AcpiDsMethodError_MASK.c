
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_11__ {int AmlStart; } ;
struct TYPE_16__ {int Op; int Opcode; TYPE_5__* DeferredNode; TYPE_3__* MethodNode; TYPE_1__ ParserState; int Aml; } ;
struct TYPE_14__ {int Integer; } ;
struct TYPE_15__ {TYPE_4__ Name; } ;
struct TYPE_12__ {int Integer; } ;
struct TYPE_13__ {TYPE_2__ Name; } ;
typedef TYPE_6__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_NAME ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int FUNC_4 (int,TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (int,TYPE_6__*,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int,int ,int ,scalar_t__,int *) ;

ACPI_STATUS
FUNC_10 (
    ACPI_STATUS VAR_1,
    ACPI_WALK_STATE *VAR_2)
{
    UINT32 VAR_3;
    ACPI_NAME VAR_4 = 0;


    FUNC_1 ();




    if (FUNC_3 (VAR_1) ||
        (VAR_1 & VAR_0))
    {
        return (VAR_1);
    }



    if (&FUNC_9)
    {


        FUNC_8 ();





        VAR_3 = (UINT32) FUNC_2 (VAR_2->Aml,
            VAR_2->ParserState.AmlStart);

        if (VAR_2->MethodNode)
        {
            VAR_4 = VAR_2->MethodNode->Name.Integer;
        }
        else if (VAR_2->DeferredNode)
        {
            VAR_4 = VAR_2->DeferredNode->Name.Integer;
        }

        VAR_1 = FUNC_9 (VAR_1, VAR_4,
            VAR_2->Opcode, VAR_3, ((void*)0));
        FUNC_7 ();
    }

    FUNC_5 (VAR_2);

    if (FUNC_0 (VAR_1))
    {
        FUNC_6 (VAR_1, VAR_2, VAR_2->Op);






    }

    return (VAR_1);
}
