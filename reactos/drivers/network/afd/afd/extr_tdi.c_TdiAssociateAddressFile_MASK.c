
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PIRP ;
typedef int PFILE_OBJECT ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;
typedef int KEVENT ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,int ,int ,int *,int *,int ) ;
 int FUNC_4 (int ,int ,int ,int *,int *) ;
 int FUNC_5 (int ,int ,int *,int *) ;

NTSTATUS FUNC_6(
    HANDLE VAR_7,
    PFILE_OBJECT VAR_8)
{
    PDEVICE_OBJECT VAR_9;
    IO_STATUS_BLOCK VAR_10;
    KEVENT VAR_11;
    PIRP VAR_12;

    FUNC_0(VAR_1, ("Called. AddressHandle (%p)  ConnectionObject (%p)\n",
                             VAR_7, VAR_8));

    if (!VAR_8) {
        FUNC_0(VAR_2, ("Bad connection object.\n"));
        return VAR_5;
    }

    VAR_9 = FUNC_1(VAR_8);
    if (!VAR_9) {
        FUNC_0(VAR_2, ("Bad device object.\n"));
        return VAR_5;
    }

    FUNC_2(&VAR_11, VAR_3, VAR_0);

    VAR_12 = FUNC_4(VAR_6,
                                           VAR_9,
                                           VAR_8,
                                           &VAR_11,
                                           &VAR_10);
    if (!VAR_12)
        return VAR_4;

    FUNC_3(VAR_12,
                             VAR_9,
                             VAR_8,
                             ((void*)0),
                             ((void*)0),
                             VAR_7);

    return FUNC_5(VAR_12, VAR_9, &VAR_11, &VAR_10);
}
