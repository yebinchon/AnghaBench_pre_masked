
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
typedef int VOID ;
typedef int USHORT ;
struct TYPE_5__ {int* Buffer; int Length; int MaximumLength; } ;
typedef int* PWCHAR ;
typedef TYPE_1__* PUNICODE_STRING ;


 int FUNC_0 (int) ;

VOID
FUNC_1(
    PUNICODE_STRING VAR_0,
    PUNICODE_STRING VAR_1,
    PUNICODE_STRING VAR_2)
{
    PWCHAR VAR_3;
    USHORT VAR_4 = 0;
    VAR_3 = VAR_0->Buffer + VAR_0->Length / sizeof(WCHAR) - 1;
    while (*VAR_3 != L'\\' && VAR_3 >= VAR_0->Buffer)
    {
        VAR_3--;
        VAR_4++;
    }
    FUNC_0(*VAR_3 == L'\\' || VAR_3 < VAR_0->Buffer);
    if (VAR_2)
    {
        VAR_2->Buffer = VAR_3 + 1;
        VAR_2->Length = VAR_2->MaximumLength = VAR_4 * sizeof(WCHAR);
    }
    if (VAR_1)
    {
        VAR_1->Buffer = VAR_0->Buffer;
        VAR_1->Length = (VAR_3 + 1 - VAR_0->Buffer) * sizeof(WCHAR);
        VAR_1->MaximumLength = VAR_1->Length;
    }
}
