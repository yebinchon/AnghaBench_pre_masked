
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ThreadId; int * Mutex; } ;
typedef size_t ACPI_MUTEX_HANDLE ;


 int FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2 (
    ACPI_MUTEX_HANDLE VAR_4)
{

    FUNC_0 (VAR_2, VAR_4);


    FUNC_1 (VAR_1[VAR_4].Mutex);

    VAR_1[VAR_4].Mutex = ((void*)0);
    VAR_1[VAR_4].ThreadId = VAR_0;

    VAR_3;
}
