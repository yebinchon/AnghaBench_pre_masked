
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


struct TYPE_11__ {int TypeSpecific; } ;
struct TYPE_12__ {scalar_t__ ResourceType; TYPE_1__ Info; } ;
struct TYPE_13__ {TYPE_2__ Address; } ;
struct TYPE_16__ {TYPE_3__ Data; } ;
struct TYPE_14__ {int ResourceType; int SpecificFlags; } ;
struct TYPE_15__ {TYPE_4__ Address; } ;
typedef int BOOLEAN ;
typedef TYPE_5__ AML_RESOURCE ;
typedef TYPE_6__ ACPI_RESOURCE ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

BOOLEAN
FUNC_2 (
    ACPI_RESOURCE *VAR_7,
    AML_RESOURCE *VAR_8)
{
    FUNC_0 ();




    if ((VAR_8->Address.ResourceType > 2) &&
        (VAR_8->Address.ResourceType < 0xC0))
    {
        return (VAR_5);
    }



    (void) FUNC_1 (
        VAR_7, VAR_8, VAR_2);



    if (VAR_7->Data.Address.ResourceType == VAR_1)
    {
        (void) FUNC_1 (
            VAR_7, VAR_8, VAR_4);
    }
    else if (VAR_7->Data.Address.ResourceType == VAR_0)
    {
        (void) FUNC_1 (
            VAR_7, VAR_8, VAR_3);
    }
    else
    {


        VAR_7->Data.Address.Info.TypeSpecific =
            VAR_8->Address.SpecificFlags;
    }

    return (VAR_6);
}
