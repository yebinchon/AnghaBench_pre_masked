
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPWSTR ;
typedef int LPCWSTR ;
typedef int IInternetProtocolInfo ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int ,int ,int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,int ,int ,int ,int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_5 (int ,int ,int *,int ,int ) ;
 int FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;

__attribute__((used)) static HRESULT FUNC_8(LPCWSTR VAR_6, DWORD VAR_7, LPWSTR VAR_8,
        DWORD VAR_9, DWORD *VAR_10)
{
    IInternetProtocolInfo *VAR_11;
    HRESULT VAR_12;

    FUNC_4("(%s %08x %p %d %p)\n", FUNC_6(VAR_6), VAR_7, VAR_8, VAR_9, VAR_10);

    VAR_11 = FUNC_7(VAR_6);

    if(VAR_11) {
        VAR_12 = FUNC_1(VAR_11, VAR_6, VAR_2,
                VAR_7, VAR_8, VAR_9, VAR_10, 0);
        FUNC_2(VAR_11);
        if(FUNC_3(VAR_12))
            return VAR_12;
    }

    VAR_12 = FUNC_5(VAR_6, VAR_8, &VAR_9, VAR_5, VAR_7);
    if(VAR_10)
        *VAR_10 = VAR_9;

    if(VAR_12 == VAR_1)
        return VAR_3;

    if(FUNC_0(VAR_12))
        return VAR_0;
    return VAR_4;
}
