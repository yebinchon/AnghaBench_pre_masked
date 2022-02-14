
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (scalar_t__,int const*,int ,int *,int *) ;

__attribute__((used)) static BOOL FUNC_3(LPCWSTR VAR_6, const BYTE *VAR_7, DWORD VAR_8)
{
    HANDLE VAR_9 = FUNC_1(VAR_6, VAR_3 | VAR_4, 0, ((void*)0),
     VAR_0, VAR_2, ((void*)0));
    BOOL VAR_10;

    if (VAR_9 != VAR_5)
    {
        DWORD VAR_11;

        VAR_10 = FUNC_2(VAR_9, VAR_7, VAR_8, &VAR_11, ((void*)0));
        FUNC_0(VAR_9);
    }
    else
        VAR_10 = VAR_1;
    return VAR_10;
}
