
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int SYSTEMTIME ;
typedef int LPWSTR ;
typedef int LPFILETIME ;
typedef int FILETIME ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ,int *,int *,int,scalar_t__) ;
 int FUNC_3 (int ,int ,int *,int *,int,scalar_t__) ;
 int VAR_2 ;
 int FUNC_4 (int,scalar_t__,char*,int*,size_t*,int ) ;
 int VAR_3 ;

BOOL
FUNC_5(LPFILETIME VAR_4, LPWSTR VAR_5, UINT VAR_6)
{
    FILETIME VAR_7;
    SYSTEMTIME VAR_8;
    int VAR_9;
    UINT VAR_10 = VAR_6;
    size_t VAR_11;
    LPWSTR VAR_12 = VAR_5;

    if (!FUNC_0(VAR_4, &VAR_7) || !FUNC_1(&VAR_7, &VAR_8))
        return VAR_1;

    VAR_9 = FUNC_2(VAR_2, VAR_0, &VAR_8, ((void*)0), VAR_12, VAR_10);
    if (VAR_9)
        --VAR_9;



    VAR_10 -= VAR_9;
    VAR_12 += VAR_9;

    FUNC_4(VAR_12, VAR_10, L", ", &VAR_12, &VAR_11, 0);
    VAR_10 = (UINT)VAR_11;

    VAR_9 = FUNC_3(VAR_2, 0, &VAR_8, ((void*)0), VAR_12, VAR_10);
    if (VAR_9)
        --VAR_9;



    return VAR_3;
}
