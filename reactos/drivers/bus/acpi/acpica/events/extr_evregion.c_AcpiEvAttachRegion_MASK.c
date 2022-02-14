
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* Handler; TYPE_3__* Next; int SpaceId; int Node; } ;
struct TYPE_7__ {TYPE_3__* RegionList; } ;
struct TYPE_9__ {TYPE_2__ Region; TYPE_1__ AddressSpace; } ;
typedef int BOOLEAN ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

ACPI_STATUS
FUNC_6 (
    ACPI_OPERAND_OBJECT *VAR_4,
    ACPI_OPERAND_OBJECT *VAR_5,
    BOOLEAN VAR_6)
{

    FUNC_1 (VAR_3);




    if (VAR_5->Region.Handler)
    {
        FUNC_5 (VAR_1);
    }

    FUNC_0 ((VAR_0,
        "Adding Region [%4.4s] %p to address handler %p [%s]\n",
        FUNC_3 (VAR_5->Region.Node),
        VAR_5, VAR_4,
        FUNC_4 (VAR_5->Region.SpaceId)));



    VAR_5->Region.Next = VAR_4->AddressSpace.RegionList;
    VAR_4->AddressSpace.RegionList = VAR_5;
    VAR_5->Region.Handler = VAR_4;
    FUNC_2 (VAR_4);

    FUNC_5 (VAR_2);
}
