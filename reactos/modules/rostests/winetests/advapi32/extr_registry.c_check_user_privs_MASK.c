
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,char*,int ,int,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    DWORD VAR_7;
    HKEY VAR_8 = (HKEY)0xdeadbeef;

    VAR_7 = FUNC_1( VAR_2, "Software", 0, VAR_3|VAR_4, &VAR_8);
    FUNC_2(VAR_7 == VAR_1 || VAR_7 == VAR_0, "expected success or access denied, got %i\n", VAR_7);
    if (VAR_7 == VAR_1)
    {
        FUNC_2(VAR_8 != ((void*)0), "RegOpenKeyExA succeeded but returned NULL hkey\n");
        FUNC_0(VAR_8);
    }
    else
    {
        FUNC_2(VAR_8 == ((void*)0), "RegOpenKeyExA failed but returned hkey %p\n", VAR_8);
        VAR_6 = VAR_5;
        FUNC_3("running as limited user\n");
    }
}
