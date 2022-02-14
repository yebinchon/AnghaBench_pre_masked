
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int UINT ;
typedef int TIME_ZONE_INFORMATION ;
typedef int SYSTEMTIME ;
typedef int LPCWSTR ;
typedef int HANDLE ;
typedef int FILETIME ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int ,int ,int *,int *,int*,int) ;
 int FUNC_4 (int ,int *,int *,int *) ;
 int FUNC_5 (int ,int ,int *,int *,int*,int) ;
 int FUNC_6 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int *,int *,int *) ;
 int VAR_5 ;

BOOL
FUNC_8(LPCWSTR VAR_6, WCHAR * VAR_7, int VAR_8)
{
    HANDLE VAR_9;
    FILETIME VAR_10;
    SYSTEMTIME VAR_11, VAR_12;
    UINT VAR_13;
    TIME_ZONE_INFORMATION VAR_14;

    VAR_9 = FUNC_1(VAR_6, VAR_2, 0, ((void*)0), VAR_4, 0, ((void*)0));
    if (!VAR_9)
        return VAR_1;

    if (!FUNC_4(VAR_9, ((void*)0), ((void*)0), &VAR_10))
    {
        FUNC_0(VAR_9);
        return VAR_1;
    }
    FUNC_0(VAR_9);

    if(!FUNC_6(&VAR_14))
        return VAR_1;

    if (!FUNC_2(&VAR_10, &VAR_11))
        return VAR_1;

    if (!FUNC_7(&VAR_14, &VAR_11, &VAR_12))
        return VAR_1;

    VAR_13 = FUNC_3(VAR_3, VAR_0, &VAR_12, ((void*)0), VAR_7, VAR_8);
    VAR_7[VAR_13-1] = L' ';
    return FUNC_5(VAR_3, VAR_5, &VAR_12, ((void*)0), &VAR_7[VAR_13], VAR_8-VAR_13);
}
