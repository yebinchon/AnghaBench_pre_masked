
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_9__ {int Inode; int Extents; int Flags; } ;
struct TYPE_8__ {int QuadPart; } ;
typedef TYPE_1__* PLARGE_INTEGER ;
typedef int PEXT2_VCB ;
typedef TYPE_2__* PEXT2_MCB ;
typedef int PEXT2_IRP_CONTEXT ;
typedef int NTSTATUS ;
typedef int LONGLONG ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,TYPE_2__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,TYPE_2__*,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

NTSTATUS
FUNC_8(
    PEXT2_IRP_CONTEXT VAR_4,
    PEXT2_VCB VAR_5,
    PEXT2_MCB VAR_6,
    ULONG VAR_7,
    ULONG VAR_8,
    PLARGE_INTEGER VAR_9
    )
{
    ULONG VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
    NTSTATUS VAR_13 = VAR_3;

    if (VAR_8 <= VAR_7)
        return VAR_13;

    while (VAR_8 > VAR_7 + VAR_10) {

        VAR_11 = VAR_8 - VAR_7 - VAR_10;
        VAR_13 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7 + VAR_10,
                                    &VAR_12, &VAR_11);
        if (!FUNC_7(VAR_13)) {
            VAR_13 = VAR_2;
            break;
        }
        if (VAR_11 == 0) {
            VAR_13 = VAR_2;
            break;
        }

        if (VAR_12 && FUNC_6(VAR_6)) {
            if (!FUNC_2(VAR_5, VAR_6, VAR_7 + VAR_10, VAR_12, VAR_11)) {
                FUNC_1();
                FUNC_0(VAR_6->Flags, VAR_1);
                FUNC_3(&VAR_6->Extents);
            }
        }
        VAR_10 += VAR_11;
    }

    VAR_9->QuadPart = ((LONGLONG)(VAR_7 + VAR_10)) << VAR_0;


    FUNC_5(VAR_4, VAR_5, &VAR_6->Inode);

    return VAR_13;
}
