
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int * PVOID ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void FUNC_2(void)
{
    DWORD VAR_2;
    HANDLE VAR_3 = (HANDLE)(ULONG_PTR)0xdeadbeefdeadbeef;


    VAR_2 = FUNC_0(VAR_3, (PVOID) 1);
    FUNC_1(VAR_2 == VAR_1, "expected failure\n");


    VAR_2 = FUNC_0(((void*)0), ((void*)0));
    FUNC_1(VAR_2 == VAR_1, "expected failure\n");


    VAR_2 = FUNC_0(VAR_3, ((void*)0));
    FUNC_1(VAR_2 == VAR_0, "expected failure\n");
}
