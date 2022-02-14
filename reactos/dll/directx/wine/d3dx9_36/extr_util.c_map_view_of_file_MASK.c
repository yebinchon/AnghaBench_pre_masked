
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HRESULT ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int *,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int const*,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_6 (scalar_t__,int ,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

HRESULT FUNC_7(const WCHAR *VAR_8, void **VAR_9, DWORD *VAR_10)
{
    HANDLE VAR_11, VAR_12 = ((void*)0);

    VAR_11 = FUNC_2(VAR_8, VAR_2, VAR_1, 0, VAR_5, 0, 0);
    if(VAR_11 == VAR_4) goto error;

    *VAR_10 = FUNC_3(VAR_11, ((void*)0));
    if(*VAR_10 == VAR_3) goto error;

    VAR_12 = FUNC_1(VAR_11, ((void*)0), VAR_6, 0, 0, ((void*)0));
    if(!VAR_12) goto error;

    *VAR_9 = FUNC_6(VAR_12, VAR_0, 0, 0, 0);
    if(*VAR_9 == ((void*)0)) goto error;

    FUNC_0(VAR_12);
    FUNC_0(VAR_11);

    return VAR_7;

error:
    FUNC_0(VAR_12);
    FUNC_0(VAR_11);
    return FUNC_5(FUNC_4());
}
