
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int PVOID ;
typedef int PTDI_CONNECTION_INFORMATION ;
typedef int PLARGE_INTEGER ;
typedef int PIRP ;
typedef int PIO_COMPLETION_ROUTINE ;
typedef int PFILE_OBJECT ;
typedef int PDEVICE_OBJECT ;
typedef int NTSTATUS ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int *,int *) ;
 int FUNC_4 (int ,int ,int *,int *) ;

NTSTATUS FUNC_5(
    PIRP *VAR_6,
    PFILE_OBJECT VAR_7,
    PLARGE_INTEGER VAR_8,
    USHORT VAR_9,
    PIO_COMPLETION_ROUTINE VAR_10,
    PVOID VAR_11,
    PTDI_CONNECTION_INFORMATION VAR_12,
    PTDI_CONNECTION_INFORMATION VAR_13) {
    PDEVICE_OBJECT VAR_14;

    if (!VAR_7) {
        FUNC_0(VAR_1, ("Bad transport object.\n"));
        return VAR_3;
    }

    FUNC_0(VAR_0,("Called(TransportObject %p)\n", VAR_7));

    VAR_14 = FUNC_1(VAR_7);
    if (!VAR_14) {
        FUNC_0(VAR_1, ("Bad device object.\n"));
        return VAR_3;
    }

    *VAR_6 = FUNC_3(VAR_5,
                                            VAR_14,
                                            VAR_7,
                                            ((void*)0),
                                            ((void*)0));

    if (!*VAR_6) {
        FUNC_0(VAR_1, ("Insufficient resources.\n"));
        return VAR_2;
    }

    FUNC_2(*VAR_6,
                       VAR_14,
                       VAR_7,
                       VAR_10,
                       VAR_11,
                       VAR_8,
                       VAR_9,
                       VAR_12,
                       VAR_13);

    FUNC_4(*VAR_6, VAR_14, ((void*)0), ((void*)0));

    return VAR_4;
}
