
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPCWSTR ;
typedef int IMoniker ;
typedef int * HRESULT ;


 int * FUNC_0 (int *,int *,int **) ;
 int * VAR_0 ;
 int FUNC_1 (int *) ;
 int * VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 int * VAR_3 ;
 int FUNC_3 (int,char*,int *) ;

__attribute__((used)) static void FUNC_4(LPCWSTR VAR_4, LPCWSTR VAR_5)
{
    HRESULT VAR_6;
    IMoniker *VAR_7 = ((void*)0);
    IMoniker *VAR_8 = ((void*)0);

    VAR_6 = FUNC_0(((void*)0), ((void*)0), ((void*)0));
    FUNC_3(VAR_6 == VAR_0,
       "Expected CreateURLMoniker to return E_INVALIDARG, got 0x%08x\n", VAR_6);

    VAR_7 = (IMoniker *)0xdeadbeef;
    VAR_6 = FUNC_0(((void*)0), ((void*)0), &VAR_7);
    FUNC_3(VAR_6 == VAR_0,
       "Expected CreateURLMoniker to return E_INVALIDARG, got 0x%08x\n", VAR_6);
    FUNC_3(VAR_7 == ((void*)0), "Expected the output pointer to be NULL, got %p\n", VAR_7);

    VAR_6 = FUNC_0(((void*)0), VAR_3, ((void*)0));
    FUNC_3(VAR_6 == VAR_0,
       "Expected CreateURLMoniker to return E_INVALIDARG, got 0x%08x\n", VAR_6);

    VAR_6 = FUNC_0(((void*)0), VAR_3, &VAR_7);
    FUNC_3(VAR_6 == VAR_2 ||
       FUNC_2(VAR_6 == VAR_1),
       "Expected CreateURLMoniker to return S_OK, got 0x%08x\n", VAR_6);
    if(VAR_7) FUNC_1(VAR_7);

    VAR_6 = FUNC_0(((void*)0), VAR_4, &VAR_7);
    FUNC_3(VAR_6 == VAR_2, "failed to create moniker: 0x%08x\n", VAR_6);
    if(VAR_6 == VAR_2) {
        VAR_6 = FUNC_0(VAR_7, VAR_5, &VAR_8);
        FUNC_3(VAR_6 == VAR_2, "failed to create moniker: 0x%08x\n", VAR_6);
    }
    if(VAR_7) FUNC_1(VAR_7);
    if(VAR_8) FUNC_1(VAR_8);
}
