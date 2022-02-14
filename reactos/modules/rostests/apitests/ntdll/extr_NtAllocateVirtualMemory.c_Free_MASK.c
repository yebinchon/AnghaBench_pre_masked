
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef size_t ULONG ;
typedef scalar_t__ SIZE_T ;
typedef int * PVOID ;
typedef scalar_t__ PUCHAR ;
typedef scalar_t__* PSIZE_T ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int) ;
 int ** VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,int **,scalar_t__*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,scalar_t__,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 () ;

__attribute__((used)) static
VOID
FUNC_5(
    PVOID VAR_5)
{
    NTSTATUS VAR_6;
    PVOID VAR_7;
    SIZE_T VAR_8 = 0;
    SIZE_T VAR_9;
    SIZE_T VAR_10;
    ULONG VAR_11;

    VAR_9 = ((PSIZE_T)VAR_5)[-2];
    VAR_10 = ((PSIZE_T)VAR_5)[-1];
    FUNC_0(VAR_10 != 0);

    VAR_7 = (PUCHAR)VAR_5 + VAR_10 + VAR_3 - VAR_9;
    FUNC_0((SIZE_T)VAR_7 % VAR_3 == 0);

    FUNC_3(VAR_5, VAR_10, 0xbe);
    ((PSIZE_T)VAR_5)[-1] = 0;
    ((PSIZE_T)VAR_5)[-2] = 0xFAFBFCFD;

    for (VAR_11 = 0; VAR_11 < VAR_1; ++VAR_11)
        if (VAR_0[VAR_11] == VAR_5)
        {
            VAR_0[VAR_11] = ((void*)0);
            break;
        }
    FUNC_4();

    VAR_6 = FUNC_2(FUNC_1(), &VAR_7, &VAR_8, VAR_2);
    FUNC_0(VAR_6 == VAR_4);
}
