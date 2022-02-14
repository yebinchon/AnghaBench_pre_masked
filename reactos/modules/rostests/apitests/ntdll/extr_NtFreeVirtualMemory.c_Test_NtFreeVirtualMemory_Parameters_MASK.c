
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long ULONG ;
typedef scalar_t__ NTSTATUS ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,int *,unsigned long) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(void)
{
    NTSTATUS VAR_3;
    ULONG VAR_4;
    int VAR_5;




    VAR_3 = FUNC_0(((void*)0), ((void*)0), ((void*)0), 0ul);
    FUNC_1(VAR_3 == VAR_2, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_3);



    for (VAR_5 = 0; VAR_5 < 32; ++VAR_5)
    {
        VAR_4 = 1 << VAR_5;
        if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
            continue;

        VAR_3 = FUNC_0(((void*)0), ((void*)0), ((void*)0), VAR_4);
        FUNC_1(VAR_3 == VAR_2, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_3);
    }


    VAR_3 = FUNC_0(((void*)0), ((void*)0), ((void*)0), ~(VAR_0 | VAR_1));
    FUNC_1(VAR_3 == VAR_2, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_3);
    VAR_3 = FUNC_0(((void*)0), ((void*)0), ((void*)0), ~VAR_0);
    FUNC_1(VAR_3 == VAR_2, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_3);
    VAR_3 = FUNC_0(((void*)0), ((void*)0), ((void*)0), ~VAR_1);
    FUNC_1(VAR_3 == VAR_2, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_3);
    VAR_3 = FUNC_0(((void*)0), ((void*)0), ((void*)0), ~0ul);
    FUNC_1(VAR_3 == VAR_2, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_3);


    VAR_3 = FUNC_0(((void*)0), ((void*)0), ((void*)0), VAR_0 | VAR_1);
    FUNC_1(VAR_3 == VAR_2, "NtFreeVirtualMemory returned status : 0x%08lx\n", VAR_3);
}
