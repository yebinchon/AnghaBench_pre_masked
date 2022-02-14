
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int info ;
struct TYPE_3__ {int SizeOfImage; int * lpBaseOfDll; } ;
typedef TYPE_1__ MODULEINFO ;
typedef int * HMODULE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,TYPE_1__*,int) ;
 int * FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int FUNC_6 (int,char*,scalar_t__,...) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void FUNC_8(void)
{
    HMODULE VAR_6 = FUNC_2(((void*)0));
    DWORD *VAR_7, VAR_8 = 0;
    MODULEINFO VAR_9;
    DWORD VAR_10;

    FUNC_5(0xdeadbeef);
    FUNC_3(((void*)0), VAR_6, &VAR_9, sizeof(VAR_9));
    FUNC_6(FUNC_1() == VAR_2, "expected error=ERROR_INVALID_HANDLE but got %d\n", FUNC_1());

    FUNC_5(0xdeadbeef);
    FUNC_3(VAR_4, VAR_6, &VAR_9, sizeof(VAR_9));
    FUNC_6(FUNC_1() == VAR_0, "expected error=ERROR_ACCESS_DENIED but got %d\n", FUNC_1());

    FUNC_5(0xdeadbeef);
    FUNC_3(VAR_5, VAR_3, &VAR_9, sizeof(VAR_9));
    FUNC_6(FUNC_1() == VAR_2, "expected error=ERROR_INVALID_HANDLE but got %d\n", FUNC_1());

    FUNC_5(0xdeadbeef);
    FUNC_3(VAR_5, VAR_6, &VAR_9, sizeof(VAR_9)-1);
    FUNC_6(FUNC_1() == VAR_1, "expected error=ERROR_INSUFFICIENT_BUFFER but got %d\n", FUNC_1());

    VAR_10 = FUNC_3(VAR_5, VAR_6, &VAR_9, sizeof(VAR_9));
    FUNC_6(VAR_10 == 1, "failed with %d\n", FUNC_1());
    FUNC_6(VAR_9.lpBaseOfDll == VAR_6, "lpBaseOfDll=%p hMod=%p\n", VAR_9.lpBaseOfDll, VAR_6);

    VAR_6 = FUNC_4("shell32.dll");
    FUNC_6(VAR_6 != ((void*)0), "Failed to load shell32.dll, error: %u\n", FUNC_1());

    VAR_10 = FUNC_3(VAR_5, VAR_6, &VAR_9, sizeof(VAR_9));
    FUNC_6(VAR_10 == 1, "failed with %d\n", FUNC_1());
    VAR_9.SizeOfImage /= sizeof(DWORD);
    for (VAR_7 = (DWORD *)VAR_6; VAR_9.SizeOfImage; VAR_9.SizeOfImage--)
        VAR_8 ^= *VAR_7++;
    FUNC_7("xor of shell32: %08x\n", VAR_8);

    FUNC_0(VAR_6);
}
