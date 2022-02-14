
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PWLAN_INTERFACE_INFO_LIST ;
typedef int * PVOID ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void FUNC_2(void)
{
    DWORD VAR_1;
    PWLAN_INTERFACE_INFO_LIST VAR_2;


    VAR_1 = FUNC_0((HANDLE) -1, (PVOID) 1, &VAR_2);
    FUNC_1(VAR_1 == VAR_0, "expected failure\n");


    VAR_1 = FUNC_0((HANDLE) -1, ((void*)0), ((void*)0));
    FUNC_1(VAR_1 == VAR_0, "expected failure\n");
}
