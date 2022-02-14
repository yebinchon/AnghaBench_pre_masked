
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* Mutex; int SyncLevel; } ;
struct TYPE_7__ {int SyncLevel; int OsMutex; } ;
struct TYPE_9__ {TYPE_2__ Method; TYPE_1__ Mutex; } ;
typedef int ACPI_STATUS ;
typedef TYPE_3__ ACPI_OPERAND_OBJECT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_6 (
    ACPI_OPERAND_OBJECT *VAR_4)
{
    ACPI_OPERAND_OBJECT *VAR_5;
    ACPI_STATUS VAR_6;


    FUNC_1 (VAR_3);




    VAR_5 = FUNC_3 (VAR_0);
    if (!VAR_5)
    {
        FUNC_5 (VAR_1);
    }



    VAR_6 = FUNC_2 (&VAR_5->Mutex.OsMutex);
    if (FUNC_0 (VAR_6))
    {
        FUNC_4 (VAR_5);
        FUNC_5 (VAR_6);
    }

    VAR_5->Mutex.SyncLevel = VAR_4->Method.SyncLevel;
    VAR_4->Method.Mutex = VAR_5;
    FUNC_5 (VAR_2);
}
