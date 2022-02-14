
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PVOID ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *,int ,int ,int *,int ,int,int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_4(HANDLE VAR_4) {
    NTSTATUS VAR_5;
    IO_STATUS_BLOCK VAR_6;

    FUNC_1(&VAR_3, VAR_2, VAR_4);

    VAR_5 = FUNC_3(VAR_4, ((void*)0), (PVOID)&VAR_3, (PVOID)VAR_0, &VAR_6, VAR_1, 1, ((void*)0), 0, 1);
    if (!FUNC_2(VAR_5))
        FUNC_0("ZwNotifyChangeKey returned %08x\n", VAR_5);
}
