
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef char* LPCSTR ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static LPCSTR FUNC_2(void)
{
    LPCSTR VAR_2;

    VAR_2 = "localui.dll";
    VAR_0 = FUNC_1(VAR_2);
    if (!VAR_0) return VAR_2;

    VAR_2 = "InitializePrintMonitorUI";
    VAR_1 = (VOID *) FUNC_0(VAR_0, VAR_2);
    if (!VAR_1) return VAR_2;

    return ((void*)0);
}
