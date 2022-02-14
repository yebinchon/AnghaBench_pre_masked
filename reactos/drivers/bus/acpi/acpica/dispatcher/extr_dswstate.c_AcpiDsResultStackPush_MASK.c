
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_7__ {int DescriptorType; } ;
struct TYPE_9__ {TYPE_1__ Common; } ;
struct TYPE_8__ {scalar_t__ ResultSize; int Results; } ;
typedef TYPE_2__ ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_3 () ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int VAR_8 ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    ACPI_WALK_STATE *VAR_9)
{
    ACPI_GENERIC_STATE *VAR_10;


    FUNC_2 (VAR_8);




    if (((UINT32) VAR_9->ResultSize + VAR_2) >
        VAR_3)
    {
        FUNC_1 ((VAR_4, "Result stack overflow: State=%p Num=%u",
            VAR_9, VAR_9->ResultSize));
        return (VAR_7);
    }

    VAR_10 = FUNC_3 ();
    if (!VAR_10)
    {
        return (VAR_5);
    }

    VAR_10->Common.DescriptorType = VAR_1;
    FUNC_4 (&VAR_9->Results, VAR_10);



    VAR_9->ResultSize += VAR_2;

    FUNC_0 ((VAR_0, "Results=%p State=%p\n",
        VAR_10, VAR_9));

    return (VAR_6);
}
