
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int IUri ;
typedef int HTMLOuterWindow ;
typedef int HRESULT ;
typedef int DWORD ;
typedef int BSTR ;


 int FUNC_0 (int *,int const*,int,int **,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int const*,int ,int **) ;
 int FUNC_5 (int *,int *,int ,int *,int ) ;
 int FUNC_6 (int *,int *,int *,int **) ;

HRESULT FUNC_7(HTMLOuterWindow *VAR_2, const WCHAR *VAR_3, IUri *VAR_4, DWORD VAR_5)
{
    IUri *VAR_6, *VAR_7;
    BSTR VAR_8;
    HRESULT VAR_9;

    if(VAR_3 && VAR_4)
        VAR_9 = FUNC_0(VAR_4, VAR_3, VAR_1|VAR_0,
                &VAR_7, 0);
    else
        VAR_9 = FUNC_4(VAR_3, 0, &VAR_7);
    if(FUNC_1(VAR_9))
        return VAR_9;

    VAR_9 = FUNC_6(VAR_2, VAR_7, &VAR_8, &VAR_6);
    FUNC_2(VAR_7);
    if(FUNC_1(VAR_9))
        return VAR_9;

    VAR_9 = FUNC_5(VAR_2, VAR_6, VAR_8, ((void*)0), VAR_5);
    FUNC_2(VAR_6);
    FUNC_3(VAR_8);
    return VAR_9;
}
