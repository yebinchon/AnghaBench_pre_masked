
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int AmlOpName; int Aml; } ;
struct TYPE_5__ {TYPE_1__ Common; } ;
typedef int ACPI_WALK_STATE ;
typedef TYPE_2__ ACPI_PARSE_OBJECT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void
FUNC_3 (
    ACPI_PARSE_OBJECT *VAR_5,
    ACPI_WALK_STATE *VAR_6)
{

    FUNC_0 (VAR_3);


    if (FUNC_2 (((void*)0)) &&
        (VAR_2 & VAR_1))
    {
        FUNC_1 (VAR_0, VAR_4,
            VAR_5->Common.Aml, VAR_5->Common.AmlOpName);
    }
}
