
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,char const*,int ,int ,int const*,size_t) ;
 int FUNC_1 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned VAR_1, HKEY VAR_2, const char *VAR_3, DWORD VAR_4,
                       const void *VAR_5, size_t VAR_6)
{
    LONG VAR_7;

    VAR_7 = FUNC_0(VAR_2, VAR_3, 0, VAR_4, (const BYTE *)VAR_5, VAR_6);
    FUNC_1(VAR_7 == VAR_0, "RegSetValueExA failed: %d\n", VAR_7);
}
