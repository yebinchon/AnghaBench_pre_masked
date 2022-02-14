
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int Status; } ;
struct TYPE_5__ {int MediaHandle; } ;
typedef int PUNICODE_STRING ;
typedef TYPE_1__* PEXT2_FILESYS ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef TYPE_2__ IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ,int ,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int *,TYPE_2__*,int ,int ,int,int ,int ,int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;

NTSTATUS
FUNC_4( PEXT2_FILESYS VAR_9,
                 PUNICODE_STRING VAR_10 )
{
    NTSTATUS VAR_11;
    OBJECT_ATTRIBUTES VAR_12;
    HANDLE VAR_13;
    IO_STATUS_BLOCK VAR_14;





    FUNC_1(&VAR_12,
                               VAR_10,
                               VAR_7,
                               ((void*)0),
                               ((void*)0) );





    VAR_11 = FUNC_3(&VAR_13,
                          (VAR_5 | VAR_6 | VAR_8),
                          &VAR_12,
                          &VAR_14,
                          0,
                          VAR_0,
                          VAR_3 | VAR_2,
                          VAR_1 ,
                          VAR_4,
                          ((void*)0),
                          0);




    if( !FUNC_2(VAR_11) )
    {
        FUNC_0("Mke2fs: Create system service failed status = 0x%lx\n", VAR_11);
        return VAR_11;
    }





    if(!FUNC_2(VAR_14.Status) )
    {
        FUNC_0("Mke2fs: Create failed with status = 0x%lx\n",VAR_14.Status);
        return VAR_11;
    }

    VAR_9->MediaHandle = VAR_13;

    return VAR_11;
}
