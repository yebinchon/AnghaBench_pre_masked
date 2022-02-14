
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int HKEY ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char) ;

__attribute__((used)) static HKEY FUNC_2(WCHAR *VAR_0, WCHAR **VAR_1)
{
    if (!VAR_0) return 0;

    *VAR_1 = FUNC_1(VAR_0, '\\');
    if (*VAR_1) (*VAR_1)++;

    return FUNC_0(VAR_0);
}
