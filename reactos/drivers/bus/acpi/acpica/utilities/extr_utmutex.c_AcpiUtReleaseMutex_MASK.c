
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_2__ {scalar_t__ ThreadId; int Mutex; } ;
typedef int ACPI_STATUS ;
typedef size_t ACPI_MUTEX_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (size_t) ;
 int VAR_10 ;

ACPI_STATUS
FUNC_6 (
    ACPI_MUTEX_HANDLE VAR_11)
{
    FUNC_2 (VAR_10);


    FUNC_0 ((VAR_0, "Thread %u releasing Mutex [%s]\n",
        (UINT32) FUNC_3 (), FUNC_5 (VAR_11)));

    if (VAR_11 > VAR_1)
    {
        return (VAR_4);
    }




    if (VAR_9[VAR_11].ThreadId == VAR_2)
    {
        FUNC_1 ((VAR_5,
            "Mutex [%s] (0x%X) is not acquired, cannot release",
            FUNC_5 (VAR_11), VAR_11));

        return (VAR_6);
    }
    VAR_9[VAR_11].ThreadId = VAR_2;

    FUNC_4 (VAR_9[VAR_11].Mutex);
    return (VAR_7);
}
