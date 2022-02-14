
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RECT ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int*) ;
 int FUNC_2 (int *,int ,int ,int,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int *,int ,int ) ;
 int VAR_2 ;

void FUNC_4(RECT* VAR_3)
{
    HKEY VAR_4 = 0;
    DWORD VAR_5 = sizeof(RECT);

    if(FUNC_3(&VAR_4, 0, VAR_1) != VAR_0 ||
       FUNC_1(VAR_4, VAR_2, 0, ((void*)0), (LPBYTE)VAR_3, &VAR_5) !=
       VAR_0 || VAR_5 != sizeof(RECT))
        FUNC_2(VAR_3, 0, 0, 600, 300);

    FUNC_0(VAR_4);
}
