
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int DWORD ;


 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int ) ;

__attribute__((used)) static void FUNC_2(WCHAR **VAR_0, DWORD *VAR_1)
{
    static const WCHAR VAR_2[] = {'d','w','o','r','d',':','%','0','8','x',0};

    *VAR_0 = FUNC_0(15 * sizeof(WCHAR));
    FUNC_1(*VAR_0, VAR_2, *VAR_1);
}
