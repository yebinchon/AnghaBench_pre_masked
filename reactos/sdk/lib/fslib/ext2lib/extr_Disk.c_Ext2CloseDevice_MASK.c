
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ MediaHandle; } ;
typedef TYPE_1__* PEXT2_FILESYS ;
typedef int NTSTATUS ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;

NTSTATUS
FUNC_1( PEXT2_FILESYS VAR_1)
{
    NTSTATUS VAR_2 = VAR_0;

    if(VAR_1->MediaHandle)
    {
        VAR_2 = FUNC_0(VAR_1->MediaHandle);
    }

    return VAR_2;
}
