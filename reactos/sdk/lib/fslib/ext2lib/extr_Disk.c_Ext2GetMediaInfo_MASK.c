
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int PartInfo; int MediaHandle; int DiskGeometry; } ;
typedef TYPE_1__* PEXT2_FILESYS ;
typedef int PARTITION_INFORMATION ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int DISK_GEOMETRY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *,int *,int *,int ,int *,int,int *,int) ;

NTSTATUS
FUNC_2( PEXT2_FILESYS VAR_2 )
{
    NTSTATUS VAR_3;
    IO_STATUS_BLOCK VAR_4;

    VAR_3 = FUNC_1( VAR_2->MediaHandle,
                                ((void*)0), ((void*)0), ((void*)0), &VAR_4,
                                VAR_0,
                                &(VAR_2->DiskGeometry), sizeof(DISK_GEOMETRY),
                                &(VAR_2->DiskGeometry), sizeof(DISK_GEOMETRY));


    if (!FUNC_0(VAR_3))
    {
        goto errorout;
    }

    VAR_3 = FUNC_1( VAR_2->MediaHandle,
                                ((void*)0), ((void*)0), ((void*)0), &VAR_4,
                                VAR_1,
                                &(VAR_2->PartInfo), sizeof(PARTITION_INFORMATION),
                                &(VAR_2->PartInfo), sizeof(PARTITION_INFORMATION));

    if (!FUNC_0(VAR_3))
    {
        goto errorout;
    }

errorout:

    return VAR_3;
}
