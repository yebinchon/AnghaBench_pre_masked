
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int REGSAM ;
typedef int * LPCSTR ;
typedef int HKEY ;
typedef int DWORD ;
typedef int CHAR ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *) ;
 int FUNC_7 (int ,int *,int ) ;

__attribute__((used)) static UINT FUNC_8(HKEY VAR_2, LPCSTR VAR_3, REGSAM VAR_4)
{
    UINT VAR_5;
    CHAR *VAR_6 = ((void*)0);
    HKEY VAR_7;
    DWORD VAR_8;

    VAR_5 = FUNC_5(VAR_2, VAR_3, 0, VAR_4, &VAR_7);
    if (VAR_5 != VAR_1) return VAR_5;
    VAR_5 = FUNC_6(VAR_7, ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
    if (VAR_5 != VAR_1) return VAR_5;
    if (!(VAR_6 = FUNC_1(FUNC_0(), 0, ++VAR_8))) return VAR_0;

    while (FUNC_4(VAR_7, 0, VAR_6, VAR_8) == VAR_1)
        FUNC_8(VAR_7, VAR_6, VAR_4);

    FUNC_3(VAR_7);
    FUNC_2(FUNC_0(), 0, VAR_6);
    FUNC_7(VAR_2, VAR_3, VAR_4);
    return VAR_1;
}
