
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_4__ {int QuadPart; } ;
typedef scalar_t__ SIZE_T ;
typedef int * PVOID ;
typedef int NTSTATUS ;
typedef TYPE_1__ LARGE_INTEGER ;
typedef int HANDLE ;


 int FUNC_0 (int *,int ,int *,TYPE_1__*,int ,int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int **,int ,int ,TYPE_1__*,scalar_t__*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int,char*,int *,int *) ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(void)
{
    NTSTATUS VAR_7;
    HANDLE VAR_8, VAR_9;
    LARGE_INTEGER VAR_10, VAR_11;
    PVOID VAR_12, VAR_13;
    SIZE_T VAR_14;


    VAR_10.QuadPart = 0x1000;
    VAR_7 = FUNC_0(&VAR_8,
                             VAR_1,
                             ((void*)0),
                             &VAR_10,
                             VAR_0,
                             VAR_3 | VAR_2,
                             ((void*)0));
    FUNC_4(VAR_7, VAR_5);


    VAR_12 = ((void*)0);
    VAR_11.QuadPart = 0;
    VAR_14 = 0;
    VAR_7 = FUNC_2(VAR_8,
                                FUNC_1(),
                                &VAR_12,
                                0,
                                0,
                                &VAR_11,
                                &VAR_14,
                                VAR_6,
                                0,
                                VAR_0);



    FUNC_4(VAR_7, VAR_5);



    VAR_10.QuadPart = 0x1000;
    VAR_7 = FUNC_0(&VAR_9,
                             VAR_1,
                             ((void*)0),
                             &VAR_10,
                             VAR_0,
                             VAR_3 | VAR_2,
                             ((void*)0));
    FUNC_4(VAR_7, VAR_5);


    VAR_13 = ((void*)0);
    VAR_11.QuadPart = 0;
    VAR_14 = 0;
    VAR_7 = FUNC_2(VAR_9,
                                FUNC_1(),
                                &VAR_13,
                                0,
                                0,
                                &VAR_11,
                                &VAR_14,
                                VAR_6,
                                0,
                                VAR_0);



    FUNC_4(VAR_7, VAR_5);
    FUNC_3((ULONG_PTR)VAR_13 < (ULONG_PTR)VAR_12,
       "Invalid addresses: BaseAddress1=%p, BaseAddress2=%p\n", VAR_12, VAR_13);
    FUNC_3(((ULONG_PTR)VAR_12 - (ULONG_PTR)VAR_13) == 0x10000,
       "Invalid addresses: BaseAddress1=%p, BaseAddress2=%p\n", VAR_12, VAR_13);

}
