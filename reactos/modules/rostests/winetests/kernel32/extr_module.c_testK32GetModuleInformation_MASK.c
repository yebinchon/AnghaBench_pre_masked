
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int info ;
struct TYPE_4__ {scalar_t__ lpBaseOfDll; int * EntryPoint; } ;
typedef TYPE_1__ MODULEINFO ;
typedef scalar_t__ HMODULE ;
typedef int BOOL ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int ,scalar_t__,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_5(void)
{
    MODULEINFO VAR_0;
    HMODULE VAR_1;
    BOOL VAR_2;

    VAR_1 = FUNC_1(((void*)0));
    FUNC_2(&VAR_0, 0xAA, sizeof(VAR_0));
    VAR_2 = FUNC_4(FUNC_0(), VAR_1, &VAR_0, sizeof(VAR_0));
    FUNC_3(VAR_2, "K32GetModuleInformation failed for main module\n");
    FUNC_3(VAR_0.lpBaseOfDll == VAR_1, "Wrong info.lpBaseOfDll = %p, expected %p\n", VAR_0.lpBaseOfDll, VAR_1);
    FUNC_3(VAR_0.EntryPoint != ((void*)0), "Expected nonzero entrypoint\n");

    VAR_1 = FUNC_1("kernel32.dll");
    FUNC_2(&VAR_0, 0xAA, sizeof(VAR_0));
    VAR_2 = FUNC_4(FUNC_0(), VAR_1, &VAR_0, sizeof(VAR_0));
    FUNC_3(VAR_2, "K32GetModuleInformation failed for kernel32 module\n");
    FUNC_3(VAR_0.lpBaseOfDll == VAR_1, "Wrong info.lpBaseOfDll = %p, expected %p\n", VAR_0.lpBaseOfDll, VAR_1);
    FUNC_3(VAR_0.EntryPoint != ((void*)0), "Expected nonzero entrypoint\n");
}
