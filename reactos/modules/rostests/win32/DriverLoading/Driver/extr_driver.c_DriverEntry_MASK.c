
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DriverUnload; } ;
typedef int PUNICODE_STRING ;
typedef TYPE_1__* PDRIVER_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;

NTSTATUS
FUNC_1(PDRIVER_OBJECT VAR_2,
            PUNICODE_STRING VAR_3)
{
    VAR_2->DriverUnload = VAR_0;

    FUNC_0("Test driver loaded sucessfully\n");

    return VAR_1;
}
