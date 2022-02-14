
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


typedef scalar_t__ loff_t ;
typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_13__ {scalar_t__ i_size; int * i_block; } ;
struct TYPE_16__ {TYPE_12__ Inode; } ;
struct TYPE_15__ {scalar_t__ max_data_blocks; scalar_t__* max_blocks_per_layer; } ;
struct TYPE_14__ {int QuadPart; } ;
typedef int * PULONG ;
typedef TYPE_1__* PLARGE_INTEGER ;
typedef TYPE_2__* PEXT2_VCB ;
typedef TYPE_3__* PEXT2_MCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int NTSTATUS ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,TYPE_2__*,TYPE_12__*) ;
 int FUNC_2 (int ,TYPE_2__*,TYPE_3__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__*) ;
 int FUNC_3 (int ,TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;

NTSTATUS
FUNC_5(
    PEXT2_IRP_CONTEXT VAR_5,
    PEXT2_VCB VAR_6,
    PEXT2_MCB VAR_7,
    PLARGE_INTEGER VAR_8
)
{
    NTSTATUS VAR_9 = VAR_4;

    ULONG VAR_10 = 0;

    ULONG VAR_11 = 0;
    ULONG VAR_12 = 0;
    ULONG VAR_13;
    ULONG VAR_14;

    ULONG VAR_15 = 0;
    PULONG VAR_16 = ((void*)0);


    VAR_13 = VAR_14 = VAR_6->max_data_blocks;
    VAR_12 = (ULONG)((VAR_8->QuadPart + VAR_1 - 1) >> VAR_0);


    if (VAR_12 == 0) {
        VAR_9 = FUNC_3(VAR_5, VAR_6, VAR_7);
        if (FUNC_4(VAR_9))
            goto errorout;
    }


    VAR_11 = VAR_13 - VAR_12;

    for (VAR_10 = VAR_2; VAR_10 > 0 && VAR_11; VAR_10--) {

        if (VAR_6->max_blocks_per_layer[VAR_10 - 1] == 0) {
            continue;
        }

        VAR_14 -= VAR_6->max_blocks_per_layer[VAR_10 - 1];

        if (VAR_10 - 1 == 0) {
            VAR_16 = (PULONG)&VAR_7->Inode.i_block[0];
            VAR_15 = VAR_13;
            FUNC_0(VAR_13 == VAR_3 && VAR_14 == 0);
        } else {
            VAR_16 = (PULONG)&VAR_7->Inode.i_block[VAR_3 - 1 + VAR_10 - 1];
            VAR_15 = 1;
        }

        VAR_9 = FUNC_2(
                     VAR_5,
                     VAR_6,
                     VAR_7,
                     VAR_14,
                     VAR_13 - VAR_14 - 1,
                     VAR_10 - 1,
                     VAR_15,
                     VAR_16,
                     &VAR_11
                 );
        if (!FUNC_4(VAR_9)) {
            break;
        }

        VAR_13 = VAR_14;
    }

errorout:

    if (!FUNC_4(VAR_9)) {
        VAR_8->QuadPart += ((ULONGLONG)VAR_11 << VAR_0);
    }


    if (VAR_7->Inode.i_size > (loff_t)(VAR_8->QuadPart))
        VAR_7->Inode.i_size = (loff_t)(VAR_8->QuadPart);
    FUNC_1(VAR_5, VAR_6, &VAR_7->Inode);

    return VAR_9;
}
