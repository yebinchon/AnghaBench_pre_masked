
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int PVOID ;
typedef int PLARGE_INTEGER ;
typedef int PIO_STATUS_BLOCK ;
typedef int NTSTATUS ;
typedef int HANDLE ;


 int FUNC_0 (int ,int *,int *,int *,int ,int ,int ,int ,int *) ;

NTSTATUS FUNC_1(HANDLE VAR_0, PLARGE_INTEGER VAR_1, ULONG VAR_2, PVOID VAR_3, PIO_STATUS_BLOCK VAR_4){
    NTSTATUS VAR_5;

    VAR_5 = FUNC_0(
        VAR_0,
        ((void*)0),
        ((void*)0),
        ((void*)0),
        VAR_4,
        VAR_3,
        VAR_2,
        VAR_1,
        ((void*)0)
        );

    return VAR_5;
}
