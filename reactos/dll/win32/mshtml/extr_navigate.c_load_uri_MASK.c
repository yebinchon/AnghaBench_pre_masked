
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int IUri ;
typedef int HTMLOuterWindow ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ,int *,int ) ;

HRESULT FUNC_4(HTMLOuterWindow *VAR_0, IUri *VAR_1, DWORD VAR_2)
{
    BSTR VAR_3;
    HRESULT VAR_4;

    VAR_4 = FUNC_1(VAR_1, &VAR_3);
    if(FUNC_0(VAR_4))
        return VAR_4;

    VAR_4 = FUNC_3(VAR_0, VAR_1, VAR_3, ((void*)0), VAR_2);
    FUNC_2(VAR_3);
    return VAR_4;
}
