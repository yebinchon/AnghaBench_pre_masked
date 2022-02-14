
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ITextServices ;
typedef int ITextHost ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int **,int **) ;
 int FUNC_5 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(void)
{
    ITextServices *VAR_1;
    ITextHost *VAR_2;
    HRESULT VAR_3;
    BSTR VAR_4;

    if (!FUNC_4(&VAR_1, &VAR_2))
        return;

    VAR_3 = FUNC_2(VAR_1, &VAR_4);
    FUNC_5(VAR_3 == VAR_0, "ITextServices_TxGetText failed (result = %x)\n", VAR_3);
    FUNC_3(VAR_4);

    FUNC_1(VAR_1);
    FUNC_0(VAR_2);
}
