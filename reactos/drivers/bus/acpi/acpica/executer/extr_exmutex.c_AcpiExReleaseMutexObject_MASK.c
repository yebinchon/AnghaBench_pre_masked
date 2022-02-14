
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ AcquisitionDepth; scalar_t__ ThreadId; int OsMutex; int * OwnerThread; } ;
struct TYPE_7__ {TYPE_1__ Mutex; } ;
typedef int ACPI_STATUS ;
typedef TYPE_2__ ACPI_OPERAND_OBJECT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

ACPI_STATUS
FUNC_5 (
    ACPI_OPERAND_OBJECT *VAR_4)
{
    ACPI_STATUS VAR_5 = VAR_1;


    FUNC_0 (VAR_3);


    if (VAR_4->Mutex.AcquisitionDepth == 0)
    {
        FUNC_4 (VAR_0);
    }



    VAR_4->Mutex.AcquisitionDepth--;
    if (VAR_4->Mutex.AcquisitionDepth != 0)
    {


        FUNC_4 (VAR_1);
    }

    if (VAR_4->Mutex.OwnerThread)
    {


        FUNC_2 (VAR_4);
        VAR_4->Mutex.OwnerThread = ((void*)0);
    }



    if (VAR_4 == VAR_2)
    {
        VAR_5 = FUNC_1 ();
    }
    else
    {
        FUNC_3 (VAR_4->Mutex.OsMutex);
    }



    VAR_4->Mutex.ThreadId = 0;
    FUNC_4 (VAR_5);
}
