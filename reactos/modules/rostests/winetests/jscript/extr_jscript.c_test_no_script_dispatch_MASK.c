
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IDispatch ;
typedef int IActiveScript ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,int **) ;
 int FUNC_1 (int,char*,...) ;

__attribute__((used)) static void FUNC_2(IActiveScript *VAR_1)
{
    IDispatch *VAR_2;
    HRESULT VAR_3;

    VAR_2 = (void*)0xdeadbeef;
    VAR_3 = FUNC_0(VAR_1, ((void*)0), &VAR_2);
    FUNC_1(VAR_3 == VAR_0, "hres = %08x, expected E_UNEXPECTED\n", VAR_3);
    FUNC_1(!VAR_2, "disp != NULL\n");
}
