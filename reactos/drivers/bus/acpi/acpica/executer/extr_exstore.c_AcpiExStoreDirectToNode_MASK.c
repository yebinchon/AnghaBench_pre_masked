
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int Type; } ;
struct TYPE_12__ {int Type; } ;
struct TYPE_13__ {TYPE_1__ Common; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef TYPE_3__ ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__**,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_8 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_9 (
    ACPI_OPERAND_OBJECT *VAR_2,
    ACPI_NAMESPACE_NODE *VAR_3,
    ACPI_WALK_STATE *VAR_4)
{
    ACPI_STATUS VAR_5;
    ACPI_OPERAND_OBJECT *VAR_6;


    FUNC_2 (VAR_1);


    FUNC_0 ((VAR_0,
        "Storing [%s] (%p) directly into node [%s] (%p)"
        " with no implicit conversion\n",
        FUNC_5 (VAR_2), VAR_2,
        FUNC_6 (VAR_3->Type), VAR_3));



    VAR_5 = FUNC_4 (VAR_2, &VAR_6, VAR_4);
    if (FUNC_1 (VAR_5))
    {
        FUNC_8 (VAR_5);
    }



    VAR_5 = FUNC_3 (VAR_3, VAR_6, VAR_6->Common.Type);
    FUNC_7 (VAR_6);
    FUNC_8 (VAR_5);
}
