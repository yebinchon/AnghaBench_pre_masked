
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ loff_t ;
typedef int ULONGLONG ;
typedef scalar_t__ ULONG ;
struct TYPE_15__ {scalar_t__ i_size; } ;
struct TYPE_14__ {TYPE_4__ Inode; int Extents; int Flags; } ;
struct TYPE_13__ {scalar_t__ max_data_blocks; } ;
struct TYPE_12__ {int QuadPart; } ;
typedef TYPE_1__* PLARGE_INTEGER ;
typedef TYPE_2__* PEXT2_VCB ;
typedef TYPE_3__* PEXT2_MCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int NTSTATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,TYPE_2__*,TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,TYPE_4__*,scalar_t__) ;

NTSTATUS
FUNC_6(
    PEXT2_IRP_CONTEXT VAR_5,
    PEXT2_VCB VAR_6,
    PEXT2_MCB VAR_7,
    PLARGE_INTEGER VAR_8
    )
{
    NTSTATUS VAR_9 = VAR_4;

    ULONG VAR_10 = 0;
    ULONG VAR_11 = 0;
    ULONG VAR_12;
    ULONG VAR_13;
    int VAR_14;


    VAR_12 = VAR_6->max_data_blocks;
    VAR_11 = (ULONG)((VAR_8->QuadPart + VAR_1 - 1) >> VAR_0);


    VAR_10 = VAR_12 - VAR_11;

    VAR_14 = FUNC_5(VAR_5, &VAR_7->Inode, VAR_11);
    if (VAR_14 == 0) {
        if (!FUNC_2(VAR_6, VAR_7, VAR_11, VAR_10)) {
            FUNC_0(VAR_7->Flags, VAR_2);
            FUNC_1(&VAR_7->Extents);
        }
        VAR_10 = 0;
    } else {
        VAR_9 = VAR_3;
    }

    if (!FUNC_4(VAR_9)) {
        VAR_8->QuadPart += ((ULONGLONG)VAR_10 << VAR_0);
    }

    if (VAR_7->Inode.i_size > (loff_t)(VAR_8->QuadPart))
        VAR_7->Inode.i_size = (loff_t)(VAR_8->QuadPart);


    FUNC_3(VAR_5, VAR_6, &VAR_7->Inode);

    return VAR_9;
}
