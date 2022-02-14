
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 scalar_t__ FUNC_0 (int const,char const*,int ,int const,int *) ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_2, const HKEY VAR_3, const char *VAR_4, const DWORD VAR_5, HKEY *VAR_6)
{
    LONG VAR_7;

    VAR_7 = FUNC_0(VAR_3, VAR_4, 0, VAR_1|VAR_5, VAR_6);
    FUNC_1(VAR_7 == VAR_0, "RegOpenKeyExA failed: %d\n", VAR_7);
}
