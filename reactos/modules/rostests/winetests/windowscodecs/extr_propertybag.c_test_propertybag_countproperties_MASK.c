
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int IPropertyBag2 ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(IPropertyBag2 *VAR_2, ULONG VAR_3)
{
    ULONG VAR_4 = (ULONG)-1;
    HRESULT VAR_5;

    VAR_5 = FUNC_1(VAR_2, ((void*)0));
    FUNC_2(VAR_5 == VAR_0, "CountProperties returned unexpected result, hr=%x\n", VAR_5);

    VAR_5 = FUNC_1(VAR_2, &VAR_4);
    FUNC_2(VAR_5 == VAR_1, "CountProperties failed, hr=%x\n", VAR_5);

    if (FUNC_0(VAR_5))
        return;

    FUNC_2(VAR_4 == VAR_3, "CountProperties returned invalid value, count=%i\n", VAR_4);
}
