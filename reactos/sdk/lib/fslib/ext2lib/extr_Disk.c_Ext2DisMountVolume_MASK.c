
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int MediaHandle; } ;
typedef TYPE_1__* PEXT2_FILESYS ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *,int *,int *,int ,int *,int ,int *,int ) ;

NTSTATUS
FUNC_3( PEXT2_FILESYS VAR_1 )
{
    NTSTATUS VAR_2;
    IO_STATUS_BLOCK VAR_3;

    VAR_2 = FUNC_2( VAR_1->MediaHandle,
                              ((void*)0), ((void*)0), ((void*)0), &VAR_3,
                              VAR_0,
                              ((void*)0), 0, ((void*)0), 0 );

    if (!FUNC_1(VAR_2))
    {
        FUNC_0("Mke2fs: Error when dismounting volume ...\n");
        goto errorout;
    }

errorout:

    return VAR_2;
}
