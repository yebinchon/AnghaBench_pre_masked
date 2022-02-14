
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef scalar_t__ LPCWSTR ;
typedef int IInternetProtocolInfo ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (int *,scalar_t__,int ,int ,int ,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *,int ) ;
 int FUNC_5 (scalar_t__) ;
 int * FUNC_6 (scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_7(LPCWSTR VAR_1, DWORD VAR_2, LPWSTR VAR_3, DWORD VAR_4, DWORD *VAR_5)
{
    IInternetProtocolInfo *VAR_6;
    DWORD VAR_7;
    HRESULT VAR_8;

    FUNC_3("(%s %08x %p %d %p)\n", FUNC_5(VAR_1), VAR_2, VAR_3, VAR_4, VAR_5);

    VAR_6 = FUNC_6(VAR_1);

    if(VAR_6) {
        VAR_8 = FUNC_0(VAR_6, VAR_1, VAR_0,
                VAR_2, VAR_3, VAR_4, VAR_5, 0);
        FUNC_1(VAR_6);
        if(FUNC_2(VAR_8))
            return VAR_8;
    }

    VAR_7 = VAR_4;
    VAR_8 = FUNC_4((LPWSTR)VAR_1, VAR_3, &VAR_7, VAR_2);

    if(VAR_5)
        *VAR_5 = VAR_7;

    return VAR_8;
}
