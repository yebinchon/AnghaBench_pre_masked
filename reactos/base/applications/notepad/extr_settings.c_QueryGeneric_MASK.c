
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPVOID ;
typedef int LPCTSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *,scalar_t__*,int ,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 int * FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *,scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_4(HKEY VAR_3, LPCTSTR VAR_4, DWORD VAR_5,
             LPVOID VAR_6, DWORD VAR_7)
{
    DWORD VAR_8, VAR_9;
    LPVOID *VAR_10 = FUNC_2(VAR_7);

    FUNC_1(VAR_10, VAR_7);

    VAR_9 = VAR_7;
    if (FUNC_0(VAR_3, VAR_4, ((void*)0), &VAR_8, (LPBYTE) VAR_10, &VAR_9) != VAR_0)
        return VAR_1;

    if (VAR_8 != VAR_5)
        return VAR_1;

    FUNC_3(VAR_6, VAR_10, VAR_9);
    return VAR_2;
}
