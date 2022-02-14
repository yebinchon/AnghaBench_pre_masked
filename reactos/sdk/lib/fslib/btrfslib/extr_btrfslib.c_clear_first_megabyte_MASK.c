
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ QuadPart; } ;
typedef int NTSTATUS ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int IO_STATUS_BLOCK ;
typedef int HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *,int *,int *,int,TYPE_1__*,int *) ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static NTSTATUS FUNC_7(HANDLE VAR_1) {
    NTSTATUS VAR_2;
    IO_STATUS_BLOCK VAR_3;
    LARGE_INTEGER VAR_4;
    uint8_t* VAR_5;


    VAR_5 = FUNC_5(0x100000);
    FUNC_6(VAR_5, 0, 0x100000);




    VAR_4.QuadPart = 0;

    VAR_2 = FUNC_0(VAR_1, ((void*)0), ((void*)0), ((void*)0), &VAR_3, VAR_5, 0x100000, &VAR_4, ((void*)0));


    FUNC_4(VAR_5);




    return VAR_2;
}
