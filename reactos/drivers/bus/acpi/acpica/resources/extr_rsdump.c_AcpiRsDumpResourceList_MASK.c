
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_7__ {size_t Type; } ;
struct TYPE_9__ {TYPE_1__ CommonSerialBus; } ;
struct TYPE_8__ {size_t Type; TYPE_4__ Data; int Length; } ;
typedef TYPE_2__ ACPI_RESOURCE ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (TYPE_2__*) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 int VAR_6 ;

void
FUNC_5 (
    ACPI_RESOURCE *VAR_7)
{
    UINT32 VAR_8 = 0;
    UINT32 VAR_9;


    FUNC_0 ();




    if (!FUNC_1 (VAR_0, VAR_6))
    {
        return;
    }



    do
    {
        FUNC_3 ("\n[%02X] ", VAR_8);
        VAR_8++;



        VAR_9 = VAR_7->Type;
        if (VAR_9 > VAR_2)
        {
            FUNC_3 (
                "Invalid descriptor type (%X) in resource list\n",
                VAR_7->Type);
            return;
        }



        if (!VAR_7->Length)
        {
            FUNC_3 (
                "Invalid zero length descriptor in resource list\n");
            return;
        }



        if (VAR_9 == VAR_3)
        {
            FUNC_4 (&VAR_7->Data,
                VAR_5[
                    VAR_7->Data.CommonSerialBus.Type]);
        }
        else
        {
            FUNC_4 (&VAR_7->Data,
                VAR_4[VAR_9]);
        }



        VAR_7 = FUNC_2 (VAR_7);



    } while (VAR_9 != VAR_1);
}
