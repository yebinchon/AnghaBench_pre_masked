
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PHANDLE ;
typedef int * HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*,int ,int ,int **) ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static
void
FUNC_7(void)
{
    HKEY VAR_4, VAR_5;
    DWORD VAR_6;
    BOOL VAR_7;

    VAR_6 = FUNC_4(VAR_2, L"CLSID", 0, VAR_3, &VAR_4);
    FUNC_6(VAR_6, VAR_1);
    FUNC_5(FUNC_2(VAR_4), "\n");

    VAR_7 = FUNC_0(FUNC_1(), VAR_4, FUNC_1(), (PHANDLE)&VAR_5, 0, 0, VAR_0);
    FUNC_5(VAR_7, "\n");
    FUNC_5(VAR_5 != ((void*)0), "\n");
    FUNC_5(!FUNC_2(VAR_5), "\n");

    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
}
