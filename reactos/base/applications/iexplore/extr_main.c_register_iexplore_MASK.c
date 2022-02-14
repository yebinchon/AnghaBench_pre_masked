
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static DWORD FUNC_4(BOOL VAR_0)
{
    HRESULT VAR_1;

    if (FUNC_3()) {
        FUNC_2("Native IE detected, not doing registration\n");
        return 0;
    }

    VAR_1 = FUNC_1(((void*)0), VAR_0 ? "RegisterIE" : "UnregisterIE", ((void*)0));
    return FUNC_0(VAR_1);
}
