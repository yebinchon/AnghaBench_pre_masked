
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_19__ {int i_size; } ;
struct TYPE_18__ {scalar_t__ MajorFunction; } ;
struct TYPE_17__ {TYPE_6__ Inode; } ;
struct TYPE_16__ {int QuadPart; } ;
typedef TYPE_1__* PLARGE_INTEGER ;
typedef int PEXT2_VCB ;
typedef TYPE_2__* PEXT2_MCB ;
typedef TYPE_3__* PEXT2_IRP_CONTEXT ;
typedef int NTSTATUS ;
typedef int LONGLONG ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,TYPE_2__*,scalar_t__,scalar_t__,TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*,int ,TYPE_2__*,scalar_t__,scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_6__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

NTSTATUS
FUNC_5(
    PEXT2_IRP_CONTEXT VAR_6,
    PEXT2_VCB VAR_7,
    PEXT2_MCB VAR_8,
    PLARGE_INTEGER VAR_9
)
{
    NTSTATUS VAR_10 = VAR_4;
    ULONG VAR_11 = 0;
    ULONG VAR_12 = 0;

    VAR_11 = (ULONG)((VAR_8->Inode.i_size + VAR_1 - 1) >> VAR_0);
    VAR_12 = (ULONG)((VAR_9->QuadPart + VAR_1 - 1) >> VAR_0);


    if (VAR_11 >= VAR_12) {
        VAR_9->QuadPart = ((LONGLONG) VAR_11) << VAR_0;
        return VAR_4;
    }


 if (FUNC_4(VAR_8)) {
        return VAR_3;
    }


    if (FUNC_2(&VAR_8->Inode)) {

        VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_8, VAR_11, VAR_12, VAR_9);

    } else {

        BOOLEAN VAR_13;




        VAR_13 = (VAR_6->MajorFunction == VAR_2) ||
                    FUNC_3(VAR_8);

        if (!VAR_13)
            goto errorout;

        VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_11, VAR_12, VAR_9);
    }

errorout:
    return VAR_10;
}
