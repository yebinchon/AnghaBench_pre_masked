
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int ULONG ;
typedef int PVOID ;
typedef int PCHAR ;
typedef int DWORD ;
ULONG
FUNC_0(ULONG VAR_0, PVOID VAR_1, ULONG VAR_2)
{
    switch (VAR_0)
    {
        case 132:

        case 134:
        case 133:
            return *(WORD*)((PCHAR)VAR_1 + VAR_2 * sizeof(WORD));

        case 130:
        case 131:
            return (*(DWORD*)((PCHAR)VAR_1 + VAR_2 * 3)) & 0xffffff;

        case 128:
        case 129:
            return *(DWORD*)((PCHAR)VAR_1 + VAR_2 * sizeof(DWORD));
    }
    return 0;
}
