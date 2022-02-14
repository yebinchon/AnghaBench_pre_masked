
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG_PTR ;
typedef void* ULONGLONG ;
typedef void** PUSHORT ;
typedef void** PULONGLONG ;
typedef void** PULONG ;
typedef void** PUCHAR ;
typedef int LONG ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static
VOID
FUNC_1(ULONG_PTR VAR_0, LONG VAR_1, ULONGLONG VAR_2)
{
    ULONG_PTR VAR_3;

    VAR_3 = FUNC_0(VAR_0, VAR_1);

    switch (VAR_1)
    {
    case 8:
        *((PULONGLONG)VAR_3) = VAR_2;
        break;
    case 4:
        *((PULONG)VAR_3) = VAR_2;
        break;
    case 2:
        *((PUSHORT)VAR_3) = VAR_2;
        break;
    case 1:
        *((PUCHAR)VAR_3) = VAR_2;
        break;
    }
}
