
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int VAR_3 ;

void FUNC_3(DWORD *VAR_4)
{
    HKEY VAR_5 = 0;
    DWORD VAR_6 = sizeof(DWORD);

    if(FUNC_2(&VAR_5, 0, VAR_2) != VAR_0 ||
       FUNC_1(VAR_5, VAR_3, 0, ((void*)0), (LPBYTE)VAR_4, &VAR_6) !=
       VAR_0 || VAR_6 != sizeof(DWORD))
    {
        *VAR_4 = VAR_1;
    }

    FUNC_0(VAR_5);
}
