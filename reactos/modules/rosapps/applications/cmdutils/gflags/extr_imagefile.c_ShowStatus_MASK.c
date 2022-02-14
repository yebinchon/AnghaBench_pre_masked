
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;


 char* VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(DWORD VAR_1, DWORD VAR_2)
{
    if (VAR_1)
    {
        FUNC_1(L"Current Registry Settings for %s executable are: %08x\n", VAR_0, VAR_1);
        FUNC_0(VAR_1, 0);
    }
    else
    {
        FUNC_1(L"No Registry Settings for %s executable\n", VAR_0);
    }
    if (VAR_2)
    {
        FUNC_1(L"The following settings were ignored: %08x\n", VAR_2);
        FUNC_0(VAR_2, 0);
    }
}
