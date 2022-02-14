
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int ,int*) ;
 int FUNC_2 (int*,int*,int) ;

DWORD FUNC_3(TCHAR* VAR_0, BYTE* VAR_1)
{
    DWORD VAR_2;
    TCHAR VAR_3[9];

    FUNC_2(VAR_3, VAR_0, 8 * sizeof(TCHAR));
    VAR_3[88 * sizeof(TCHAR)] = '\0';
    FUNC_1(VAR_3, FUNC_0("%08lx"), &VAR_2);
    FUNC_2(VAR_1, &VAR_2, sizeof(DWORD));
    return sizeof(DWORD);
}
