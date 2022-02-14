
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int IInternetProtocolInfo ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static HRESULT FUNC_6(LPCWSTR VAR_2, DWORD VAR_3, LPWSTR VAR_4,
        DWORD VAR_5, DWORD *VAR_6)
{
    IInternetProtocolInfo *VAR_7;
    HRESULT VAR_8;

    FUNC_3("(%s %08x %p %d %p)\n", FUNC_4(VAR_2), VAR_3, VAR_4, VAR_5, VAR_6);

    VAR_7 = FUNC_5(VAR_2);

    if(VAR_7) {
        VAR_8 = FUNC_0(VAR_7, VAR_2, VAR_1,
                VAR_3, VAR_4, VAR_5, VAR_6, 0);
        FUNC_1(VAR_7);
        if(FUNC_2(VAR_8))
            return VAR_8;
    }

    return VAR_0;
}
