
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_7__ {int Ascii; } ;
struct TYPE_9__ {TYPE_1__ Name; } ;
struct TYPE_8__ {scalar_t__ UnexpectedBtypes; scalar_t__ PackageIndex; int Name; scalar_t__ ObjectConverter; } ;
typedef TYPE_2__ ACPI_SIMPLE_REPAIR_INFO ;
typedef TYPE_3__ ACPI_NAMESPACE_NODE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static const ACPI_SIMPLE_REPAIR_INFO *
FUNC_1 (
    ACPI_NAMESPACE_NODE *VAR_2,
    UINT32 VAR_3,
    UINT32 VAR_4)
{
    const ACPI_SIMPLE_REPAIR_INFO *VAR_5;




    VAR_5 = VAR_1;
    while (VAR_5->ObjectConverter)
    {
        if (FUNC_0 (VAR_2->Name.Ascii, VAR_5->Name))
        {


            if ((VAR_3 & VAR_5->UnexpectedBtypes) &&
                (VAR_5->PackageIndex == VAR_0 ||
                 VAR_4 == VAR_5->PackageIndex))
            {
                return (VAR_5);
            }

            return (((void*)0));
        }

        VAR_5++;
    }

    return (((void*)0));
}
