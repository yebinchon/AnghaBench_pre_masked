
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef scalar_t__ ULONG64 ;
typedef scalar_t__ PVOID ;
typedef int KGDTENTRY ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;

VOID
FUNC_7(void)
{
    FUNC_2("WinLdrSetProcessorContext\n");


    FUNC_6();


    FUNC_5(0);


    FUNC_4((ULONG64)VAR_5);


    VAR_0 = (PVOID)((ULONG64)VAR_0 + VAR_2);


    FUNC_0(VAR_0, VAR_2 | (VAR_6 << VAR_3));


    FUNC_1((PVOID)((ULONG64)VAR_0 + VAR_4 * sizeof(KGDTENTRY)));





    FUNC_3(VAR_1);

    FUNC_2("leave WinLdrSetProcessorContext\n");
}
