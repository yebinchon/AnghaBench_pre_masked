
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int ID3DXBuffer ;
typedef int HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (scalar_t__,void*,int ,int *,int *) ;

HRESULT FUNC_7(const WCHAR *VAR_5, ID3DXBuffer *VAR_6)
{
    HRESULT VAR_7 = VAR_4;
    void *VAR_8;
    DWORD VAR_9;
    DWORD VAR_10;
    HANDLE VAR_11 = FUNC_1(VAR_5, VAR_2, 0, ((void*)0), VAR_0, VAR_1, ((void*)0));
    if (VAR_11 == VAR_3)
        return FUNC_3(FUNC_2());

    VAR_8 = FUNC_4(VAR_6);
    VAR_9 = FUNC_5(VAR_6);

    if (!FUNC_6(VAR_11, VAR_8, VAR_9, &VAR_10, ((void*)0)))
        VAR_7 = FUNC_3(FUNC_2());

    FUNC_0(VAR_11);
    return VAR_7;
}
