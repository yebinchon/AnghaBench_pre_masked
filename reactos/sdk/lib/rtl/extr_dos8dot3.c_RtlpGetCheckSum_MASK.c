
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int USHORT ;
struct TYPE_3__ {int Length; int* Buffer; } ;
typedef int* PWCHAR ;
typedef TYPE_1__* PUNICODE_STRING ;



__attribute__((used)) static USHORT
FUNC_0(PUNICODE_STRING VAR_0)
{
    PWCHAR VAR_1;
    USHORT VAR_2;
    USHORT VAR_3;
    USHORT VAR_4;

    if (!VAR_0->Length)
        return 0;

    if (VAR_0->Length == sizeof(WCHAR))
        return VAR_0->Buffer[0];

    VAR_1 = VAR_0->Buffer;
    VAR_2 = (*VAR_1 << 8) + *(VAR_1 + 1);

    if (VAR_0->Length == 2 * sizeof(WCHAR))
        return VAR_2;

    VAR_3 = VAR_2;
    VAR_4 = 2;

    do
    {
        VAR_1 += 2;
        VAR_2 = (VAR_2 << 7) + *VAR_1;
        VAR_2 = (VAR_3 >> 1) + (VAR_2 << 8);

        if (VAR_4 + 1 < VAR_0->Length / sizeof(WCHAR))
        {
            VAR_2 += *(VAR_1 + 1);
        }

        VAR_3 = VAR_2;
        VAR_4 += 2;
    }
    while (VAR_4 < VAR_0->Length / sizeof(WCHAR));

    return VAR_2;
}
