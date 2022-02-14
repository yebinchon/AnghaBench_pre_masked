
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_6__ {int Flags; } ;
struct TYPE_7__ {TYPE_1__ Package; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;
typedef scalar_t__ ACPI_HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*,int *,int ,int *) ;

ACPI_STATUS
FUNC_4 (
    ACPI_HANDLE VAR_3,
    UINT32 VAR_4,
    void *VAR_5,
    void **VAR_6)
{
    ACPI_STATUS VAR_7;
    ACPI_OPERAND_OBJECT *VAR_8;
    ACPI_NAMESPACE_NODE *VAR_9 = (ACPI_NAMESPACE_NODE *) VAR_3;


    VAR_8 = FUNC_2 (VAR_9);
    if (!VAR_8)
    {
        return (VAR_0);
    }



    if (VAR_8->Package.Flags & VAR_1)
    {
        return (VAR_0);
    }

    VAR_7 = FUNC_1 (VAR_8);
    if (FUNC_0 (VAR_7))
    {
        return (VAR_0);
    }

    VAR_7 = FUNC_3 (VAR_8, ((void*)0), VAR_2,
        ((void*)0));
    if (FUNC_0 (VAR_7))
    {
        return (VAR_0);
    }

    VAR_8->Package.Flags |= VAR_1;
    return (VAR_0);
}
