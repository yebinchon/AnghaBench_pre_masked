
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int ULONGLONG ;
typedef int * PUSHORT ;
typedef int * PULONGLONG ;
typedef int * PULONG ;
typedef int * PUCHAR ;
typedef int LONG ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static
ULONGLONG
FUNC_1(ULONG_PTR VAR_0, LONG VAR_1)
{
    ULONG_PTR VAR_2;
    ULONGLONG VAR_3 = 0;

    VAR_2 = FUNC_0(VAR_0, VAR_1);

    switch (VAR_1)
    {
    case 8:
        VAR_3 = *((PULONGLONG)VAR_2);
        break;
    case 4:
        VAR_3 = *((PULONG)VAR_2);
        break;
    case 2:
        VAR_3 = *((PUSHORT)VAR_2);
        break;
    case 1:
        VAR_3 = *((PUCHAR)VAR_2);
        break;
    }

    return VAR_3;
}
