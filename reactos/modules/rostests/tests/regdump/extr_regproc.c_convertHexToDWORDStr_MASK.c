
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int TCHAR ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,int *,int) ;

TCHAR* FUNC_5(BYTE* VAR_0, ULONG VAR_1)
{
    TCHAR* VAR_2;
    DWORD VAR_3;

    if (VAR_1 != sizeof(DWORD)) return ((void*)0);
    VAR_2 = FUNC_1(FUNC_0(), 0, ((VAR_1*2)+1)*sizeof(TCHAR));
    FUNC_4(&VAR_3, VAR_0, sizeof(DWORD));
    FUNC_3(VAR_2, FUNC_2("%08lx"), VAR_3);

    return VAR_2;
}
