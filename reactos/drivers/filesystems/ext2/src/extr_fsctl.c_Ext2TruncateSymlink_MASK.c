
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_9__ {scalar_t__ i_size; int i_blocks; int i_block; } ;
struct TYPE_8__ {scalar_t__ QuadPart; } ;
struct TYPE_7__ {TYPE_6__ Inode; } ;
typedef scalar_t__ PUCHAR ;
typedef int PEXT2_VCB ;
typedef TYPE_1__* PEXT2_MCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int NTSTATUS ;
typedef TYPE_2__ LARGE_INTEGER ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_6__*) ;
 int FUNC_1 (int ,int ,TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_1 ;

NTSTATUS
FUNC_4(
    PEXT2_IRP_CONTEXT VAR_2,
    PEXT2_VCB VAR_3,
    PEXT2_MCB VAR_4,
    ULONG VAR_5
    )
{
    NTSTATUS VAR_6 = VAR_1;
    PUCHAR VAR_7 = (PUCHAR)&VAR_4->Inode.i_block;
    ULONG VAR_8 = (ULONG)VAR_4->Inode.i_size;
    LARGE_INTEGER VAR_9;

    if (VAR_8 < VAR_0 && !VAR_4->Inode.i_blocks) {

        FUNC_3(VAR_7 + VAR_5, VAR_0 - VAR_5);
        VAR_4->Inode.i_size = VAR_5;
        FUNC_0(VAR_2, VAR_3, &VAR_4->Inode);

    } else {
        VAR_9.QuadPart = VAR_5;
        VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4, &VAR_9);
        if (!FUNC_2(VAR_6)) {
            goto out;
        }
    }

out:
    return VAR_6;
}
