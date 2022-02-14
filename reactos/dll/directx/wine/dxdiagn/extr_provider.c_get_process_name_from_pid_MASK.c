
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int module ;
typedef int WCHAR ;
typedef int HMODULE ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int,int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL FUNC_4(DWORD VAR_4, WCHAR *VAR_5, DWORD VAR_6)
{
    HANDLE VAR_7;
    HMODULE VAR_8;
    DWORD VAR_9;

    VAR_7 = FUNC_3(VAR_1 | VAR_2, VAR_0, VAR_4);
    if (!VAR_7)
        return VAR_0;

    if (!FUNC_1(VAR_7, &VAR_8, sizeof(VAR_8), &VAR_9))
    {
        FUNC_0(VAR_7);
        return VAR_0;
    }

    if (!FUNC_2(VAR_7, VAR_8, VAR_5, VAR_6))
    {
        FUNC_0(VAR_7);
        return VAR_0;
    }

    FUNC_0(VAR_7);
    return VAR_3;
}
