
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_SIZE ;
typedef int ACPI_NAMESPACE_NODE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int VAR_2 ;

ACPI_SIZE
FUNC_3 (
    ACPI_NAMESPACE_NODE *VAR_3)
{
    ACPI_SIZE VAR_4;




    if (FUNC_1 (VAR_3) != VAR_0)
    {
        FUNC_0 ((VAR_1,
            "Invalid/cached reference target node: %p, descriptor type %d",
            VAR_3, FUNC_1 (VAR_3)));
        return (0);
    }

    VAR_4 = FUNC_2 (VAR_3, ((void*)0), 0, VAR_2);
    return (VAR_4);
}
