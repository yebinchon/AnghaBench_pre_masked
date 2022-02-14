
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int AmlStart; int AmlLength; int * Node; } ;
struct TYPE_6__ {int Flags; } ;
struct TYPE_8__ {TYPE_2__ Package; TYPE_1__ Common; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    ACPI_OPERAND_OBJECT *VAR_6)
{
    ACPI_NAMESPACE_NODE *VAR_7;
    ACPI_STATUS VAR_8;


    FUNC_2 (VAR_5, VAR_6);


    if (VAR_6->Common.Flags & VAR_4)
    {
        FUNC_4 (VAR_3);
    }



    VAR_7 = VAR_6->Package.Node;
    if (!VAR_7)
    {
        FUNC_1 ((VAR_2,
            "No pointer back to namespace node in package %p", VAR_6));
        FUNC_4 (VAR_1);
    }

    FUNC_0 ((VAR_0, "Package Argument Init, AML Ptr: %p\n",
        VAR_6->Package.AmlStart));



    VAR_8 = FUNC_3 (VAR_7, VAR_7,
        VAR_6->Package.AmlLength, VAR_6->Package.AmlStart);

    FUNC_4 (VAR_8);
}
