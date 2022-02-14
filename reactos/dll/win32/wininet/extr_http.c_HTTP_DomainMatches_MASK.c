
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; char const* str; } ;
typedef TYPE_1__ substr_t ;
typedef int localW ;
typedef char WCHAR ;
typedef char const* LPCWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int) ;

__attribute__((used)) static BOOL FUNC_3(LPCWSTR VAR_2, substr_t VAR_3)
{
    static const WCHAR VAR_4[] = { '<','l','o','c','a','l','>',0 };
    const WCHAR *VAR_5, *VAR_6;
    int VAR_7;

    if(VAR_3.len == sizeof(VAR_4)/sizeof(WCHAR)-1 && !FUNC_2(VAR_3.str, VAR_4, VAR_3.len) && !FUNC_0(VAR_2, '.' ))
        return VAR_1;

    if(VAR_3.len && *VAR_3.str != '*')
        return VAR_3.len == FUNC_1(VAR_2) && !FUNC_2(VAR_2, VAR_3.str, VAR_3.len);

    if(VAR_3.len < 2 || VAR_3.str[1] != '.')
        return VAR_0;





    VAR_5 = FUNC_0(VAR_2, '.');
    if(!VAR_5)
        return VAR_0;

    VAR_7 = FUNC_1(VAR_5 + 1);
    if(VAR_7 < VAR_3.len - 2)
        return VAR_0;





    VAR_6 = VAR_5 + 1 + VAR_7 - VAR_3.len + 2;
    if(!FUNC_2(VAR_6, VAR_3.str+2, VAR_3.len-2))





        return *(VAR_6 - 1) == '.';

    return VAR_7 == VAR_3.len-2 && !FUNC_2(VAR_5 + 1, VAR_3.str + 2, VAR_7);
}
