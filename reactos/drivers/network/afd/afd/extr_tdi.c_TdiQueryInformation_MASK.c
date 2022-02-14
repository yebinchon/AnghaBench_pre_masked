
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PMDL ;
typedef int PIRP ;
typedef int PFILE_OBJECT ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int LONG ;
typedef int KEVENT ;
typedef int IO_STATUS_BLOCK ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,int *,int *) ;
 int FUNC_4 (int ,int ,int ,int *,int *,int ,int ) ;
 int FUNC_5 (int ,int ,int *,int *) ;

NTSTATUS FUNC_6(
    PFILE_OBJECT VAR_7,
    LONG VAR_8,
    PMDL VAR_9)
{
    PDEVICE_OBJECT VAR_10;
    IO_STATUS_BLOCK VAR_11;
    KEVENT VAR_12;
    PIRP VAR_13;

    if (!VAR_7) {
        FUNC_0(VAR_2, ("Bad file object.\n"));
        return VAR_5;
    }

    VAR_10 = FUNC_1(VAR_7);
    if (!VAR_10) {
        FUNC_0(VAR_2, ("Bad device object.\n"));
        return VAR_5;
    }

    FUNC_2(&VAR_12, VAR_3, VAR_1);

    VAR_13 = FUNC_3(VAR_6,
                                           VAR_10,
                                           VAR_0,
                                           &VAR_12,
                                           &VAR_11);
    if (!VAR_13) {
        return VAR_4;
    }

    FUNC_4(VAR_13,
                             VAR_10,
                             VAR_7,
                             ((void*)0),
                             ((void*)0),
                             VAR_8,
                             VAR_9);

    return FUNC_5(VAR_13, VAR_10, &VAR_12, &VAR_11);
}
