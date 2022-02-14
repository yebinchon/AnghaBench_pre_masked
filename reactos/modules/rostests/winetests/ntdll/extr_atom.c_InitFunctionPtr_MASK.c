
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int,char*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;

__attribute__((used)) static void FUNC_3(void)
{
    VAR_0 = FUNC_1("ntdll.dll");
    FUNC_2(VAR_0 != 0, "Unable to load ntdll.dll\n");

    if (VAR_0)
    {
        VAR_4 = (void *)FUNC_0(VAR_0, "RtlCreateAtomTable");
        VAR_6 = (void *)FUNC_0(VAR_0, "RtlDestroyAtomTable");
        VAR_7 = (void *)FUNC_0(VAR_0, "RtlEmptyAtomTable");
        VAR_3 = (void *)FUNC_0(VAR_0, "RtlAddAtomToAtomTable");
        VAR_5 = (void *)FUNC_0(VAR_0, "RtlDeleteAtomFromAtomTable");
        VAR_8 = (void *)FUNC_0(VAR_0, "RtlLookupAtomInAtomTable");
        VAR_9 = (void *)FUNC_0(VAR_0, "RtlPinAtomInAtomTable");
        VAR_10 = (void *)FUNC_0(VAR_0, "RtlQueryAtomInAtomTable");

        VAR_1 = (void *)FUNC_0(VAR_0, "NtAddAtom");
        VAR_2 = (void *)FUNC_0(VAR_0, "NtQueryInformationAtom");
    }
}
