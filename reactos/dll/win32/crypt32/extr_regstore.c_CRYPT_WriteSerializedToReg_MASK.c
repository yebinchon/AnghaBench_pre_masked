
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int const*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int const*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static BOOL FUNC_5(HKEY VAR_5, DWORD VAR_6, const BYTE *VAR_7, const BYTE *VAR_8,
 DWORD VAR_9)
{
    WCHAR VAR_10[20 * 2 + 1];
    LONG VAR_11;
    HKEY VAR_12;
    BOOL VAR_13;

    FUNC_0(VAR_7, VAR_10);
    VAR_11 = FUNC_2(VAR_5, VAR_10, 0, ((void*)0), VAR_6, VAR_2, ((void*)0),
     &VAR_12, ((void*)0));
    if (!VAR_11)
    {
        VAR_11 = FUNC_3(VAR_12, VAR_0, 0, VAR_3, VAR_8, VAR_9);
        FUNC_1(VAR_12);
    }
    if (!VAR_11)
        VAR_13 = VAR_4;
    else
    {
        FUNC_4(VAR_11);
        VAR_13 = VAR_1;
    }
    return VAR_13;
}
