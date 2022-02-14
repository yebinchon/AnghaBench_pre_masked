
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IHTMLSelectElement ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int,char*,scalar_t__) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void FUNC_3(IHTMLSelectElement *VAR_2)
{
    HRESULT VAR_3;

    VAR_3 = FUNC_0(VAR_2, 3);
    FUNC_1(VAR_3 == VAR_1, "remove failed: %08x, expected S_OK\n", VAR_3);
    FUNC_2(VAR_2, 2);

    VAR_3 = FUNC_0(VAR_2, -1);
    FUNC_1(VAR_3 == VAR_0, "remove failed: %08x, expected E_INVALIDARG\n", VAR_3);
    FUNC_2(VAR_2, 2);

    VAR_3 = FUNC_0(VAR_2, 0);
    FUNC_1(VAR_3 == VAR_1, "remove failed:%08x\n", VAR_3);
    FUNC_2(VAR_2, 1);
}
