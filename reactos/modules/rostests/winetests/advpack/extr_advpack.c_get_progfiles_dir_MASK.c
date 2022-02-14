
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int *) ;
 int FUNC_2 (int ,char*,int *,int *,int ,int *) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(void)
{
    HKEY VAR_7;
    DWORD VAR_8 = VAR_3;

    FUNC_1(VAR_2, "Software\\Microsoft\\Windows\\CurrentVersion", &VAR_7);
    FUNC_2(VAR_7, "ProgramFilesDir", ((void*)0), ((void*)0), (LPBYTE)VAR_5, &VAR_8);
    FUNC_0(VAR_7);

    FUNC_4(VAR_4, VAR_5 + 3);
    FUNC_4(VAR_0, VAR_5);
    FUNC_3(VAR_0, VAR_6);
    VAR_1 = FUNC_5(VAR_0) + 1;
}
