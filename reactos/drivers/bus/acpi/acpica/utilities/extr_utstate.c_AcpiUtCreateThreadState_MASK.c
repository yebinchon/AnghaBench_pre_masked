
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ThreadId; } ;
struct TYPE_5__ {int DescriptorType; } ;
struct TYPE_7__ {TYPE_2__ Thread; TYPE_1__ Common; } ;
typedef int ACPI_THREAD_STATE ;
typedef scalar_t__ ACPI_THREAD_ID ;
typedef TYPE_3__ ACPI_GENERIC_STATE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 () ;
 TYPE_3__* FUNC_3 () ;

ACPI_THREAD_STATE *
FUNC_4 (
    void)
{
    ACPI_GENERIC_STATE *VAR_2;


    FUNC_1 ();




    VAR_2 = FUNC_3 ();
    if (!VAR_2)
    {
        return (((void*)0));
    }



    VAR_2->Common.DescriptorType = VAR_0;
    VAR_2->Thread.ThreadId = FUNC_2 ();



    if (!VAR_2->Thread.ThreadId)
    {
        FUNC_0 ((VAR_1, "Invalid zero ID from AcpiOsGetThreadId"));
        VAR_2->Thread.ThreadId = (ACPI_THREAD_ID) 1;
    }

    return ((ACPI_THREAD_STATE *) VAR_2);
}
