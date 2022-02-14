
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int *,int ,int*) ;
 int FUNC_1 (int *,int,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(HKEY VAR_3)
{
    DWORD VAR_4 = sizeof(RECT);

    if(!VAR_3 || FUNC_0(VAR_3, VAR_2, 0, ((void*)0), (LPBYTE)&VAR_1,
                     &VAR_4) != VAR_0 || VAR_4 != sizeof(RECT))
        FUNC_1(&VAR_1, 1757, 1417, 1757, 1417);
}
