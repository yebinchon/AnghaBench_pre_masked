
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int PVOID ;
typedef int PUNICODE_STRING ;
typedef int * PHANDLE ;
typedef int * PFILE_OBJECT ;
typedef int PFILE_FULL_EA_INFORMATION ;
typedef int OBJECT_ATTRIBUTES ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int ,int,int *,int *) ;
 int * VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int ,int,int ,int ,int *,int *) ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int,int *,int *,int ,int ,scalar_t__,int ,int ,int ,scalar_t__) ;

__attribute__((used)) static NTSTATUS FUNC_6(
    PUNICODE_STRING VAR_15,
    ULONG VAR_16,
    PFILE_FULL_EA_INFORMATION VAR_17,
    ULONG VAR_18,
    PHANDLE VAR_19,
    PFILE_OBJECT *VAR_20)
{
    OBJECT_ATTRIBUTES VAR_21;
    IO_STATUS_BLOCK VAR_22;
    NTSTATUS VAR_23;
    ULONG VAR_24;

    FUNC_0(VAR_10, ("Called. DeviceName (%wZ, %u)\n", VAR_15, VAR_18));


    if (VAR_18 != VAR_0)
    {

        VAR_24 = 0;
    }
    else
    {

        VAR_24 = VAR_3 | VAR_4;
    }

    FUNC_1(&VAR_21,
                               VAR_15,
                               VAR_12 |
                               VAR_13,
                               ((void*)0),
                               ((void*)0));

    VAR_23 = FUNC_5(VAR_19,
                          VAR_5 | VAR_6 | VAR_14,
                          &VAR_21,
                          &VAR_22,
                          0,
                          VAR_1,
                          VAR_24,
                          VAR_2,
                          0,
                          VAR_17,
                          VAR_16);
    if (FUNC_2(VAR_23)) {
        VAR_23 = FUNC_3(*VAR_19,
                                           VAR_5 | VAR_6 | VAR_14,
                                           *VAR_8,
                                           VAR_9,
                                           (PVOID*)VAR_20,
                                           ((void*)0));
        if (!FUNC_2(VAR_23)) {
            FUNC_0(VAR_11, ("ObReferenceObjectByHandle() failed with status (0x%X).\n", VAR_23));
            FUNC_4(*VAR_19);
        } else {
            FUNC_0(VAR_10, ("Got handle (%p)  Object (%p)\n",
                                     *VAR_19, *VAR_20));
        }
    } else {
        FUNC_0(VAR_11, ("ZwCreateFile() failed with status (0x%X)\n", VAR_23));
    }

    if (!FUNC_2(VAR_23)) {
        *VAR_19 = VAR_7;
        *VAR_20 = ((void*)0);
    }

    return VAR_23;
}
