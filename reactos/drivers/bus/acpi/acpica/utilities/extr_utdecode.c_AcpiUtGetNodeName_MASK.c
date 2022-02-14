
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* Ascii; } ;
struct TYPE_5__ {TYPE_1__ Name; } ;
typedef TYPE_2__ ACPI_NAMESPACE_NODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (char const*) ;

const char *
FUNC_2 (
    void *VAR_3)
{
    ACPI_NAMESPACE_NODE *VAR_4 = (ACPI_NAMESPACE_NODE *) VAR_3;




    if (!VAR_3)
    {
        return ("NULL");
    }



    if ((VAR_3 == VAR_1) ||
        (VAR_3 == VAR_2))
    {
        return ("\"\\\" ");
    }



    if (FUNC_0 (VAR_4) != VAR_0)
    {
        return ("####");
    }





    FUNC_1 (VAR_4->Name.Ascii);



    return (VAR_4->Name.Ascii);
}
