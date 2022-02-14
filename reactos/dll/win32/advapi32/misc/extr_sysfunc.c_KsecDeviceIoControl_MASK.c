
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int SIZE_T ;
typedef int PVOID ;
typedef int NTSTATUS ;
typedef int IO_STATUS_BLOCK ;


 int * VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int *,int *,int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static
NTSTATUS
FUNC_3(
    ULONG VAR_1,
    PVOID VAR_2,
    SIZE_T VAR_3,
    PVOID VAR_4,
    SIZE_T VAR_5)
{
    IO_STATUS_BLOCK VAR_6;
    NTSTATUS VAR_7;


    if (VAR_0 == ((void*)0))
    {

        VAR_7 = FUNC_0();
        if (!FUNC_1(VAR_7))
        {

            return VAR_7;
        }
    }


    VAR_7 = FUNC_2(VAR_0,
                                   ((void*)0),
                                   ((void*)0),
                                   ((void*)0),
                                   &VAR_6,
                                   VAR_1,
                                   VAR_2,
                                   VAR_3,
                                   VAR_4,
                                   VAR_5);

    return VAR_7;
}
