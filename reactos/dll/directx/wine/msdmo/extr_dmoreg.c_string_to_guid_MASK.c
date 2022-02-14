
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HRESULT ;
typedef int GUID ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (char*,char const*) ;

__attribute__((used)) static HRESULT FUNC_2(const WCHAR *VAR_0, GUID *VAR_1)
{
    WCHAR VAR_2[39];
    VAR_2[0] = '{';
    FUNC_1(VAR_2 + 1, VAR_0);
    VAR_2[37] = '}';
    VAR_2[38] = 0;
    return FUNC_0(VAR_2, VAR_1);
}
