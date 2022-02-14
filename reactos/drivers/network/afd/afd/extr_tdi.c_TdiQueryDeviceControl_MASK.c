
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_4__ {int Information; } ;
typedef int PVOID ;
typedef int * PULONG ;
typedef int PIRP ;
typedef int PFILE_OBJECT ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int KEVENT ;
typedef TYPE_1__ IO_STATUS_BLOCK ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int *,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int *,TYPE_1__*) ;

NTSTATUS FUNC_5(
    PFILE_OBJECT VAR_5,
    ULONG VAR_6,
    PVOID VAR_7,
    ULONG VAR_8,
    PVOID VAR_9,
    ULONG VAR_10,
    PULONG VAR_11)
{
    PDEVICE_OBJECT VAR_12;
    IO_STATUS_BLOCK VAR_13;
    NTSTATUS VAR_14;
    KEVENT VAR_15;
    PIRP VAR_16;

    if (!VAR_5) {
        FUNC_0(VAR_1, ("Bad file object.\n"));
        return VAR_4;
    }

    VAR_12 = FUNC_2(VAR_5);
    if (!VAR_12) {
        FUNC_0(VAR_1, ("Bad device object.\n"));
        return VAR_4;
    }

    FUNC_3(&VAR_15, VAR_2, VAR_0);

    VAR_16 = FUNC_1(VAR_6,
                                        VAR_12,
                                        VAR_7,
                                        VAR_8,
                                        VAR_9,
                                        VAR_10,
                                        VAR_0,
                                        &VAR_15,
                                        &VAR_13);
    if (!VAR_16)
        return VAR_3;

    VAR_14 = FUNC_4(VAR_16, VAR_12, &VAR_15, &VAR_13);

    if (VAR_11)
        *VAR_11 = VAR_13.Information;

    return VAR_14;
}
