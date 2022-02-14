
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ UseCount; int ThreadId; int Mutex; } ;
typedef int ACPI_STATUS ;
typedef size_t ACPI_MUTEX_HANDLE ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_3 (
    ACPI_MUTEX_HANDLE VAR_4)
{
    ACPI_STATUS VAR_5 = VAR_1;


    FUNC_0 (VAR_3, VAR_4);


    if (!VAR_2[VAR_4].Mutex)
    {
        VAR_5 = FUNC_1 (&VAR_2[VAR_4].Mutex);
        VAR_2[VAR_4].ThreadId = VAR_0;
        VAR_2[VAR_4].UseCount = 0;
    }

    FUNC_2 (VAR_5);
}
