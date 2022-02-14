
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int user ;
struct TYPE_5__ {int len; char* str; } ;
typedef TYPE_1__ substr_t ;
typedef int cookie_prefix ;
typedef char WCHAR ;
typedef int DWORD ;


 char* VAR_0 ;
 int FUNC_0 (char*,int*) ;
 int VAR_1 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 char FUNC_3 (char) ;

__attribute__((used)) static WCHAR *FUNC_4(substr_t VAR_2, substr_t VAR_3, substr_t *VAR_4)
{
    WCHAR VAR_5[VAR_1], *VAR_6, *VAR_7;
    DWORD VAR_8, VAR_9, VAR_10;

    static const WCHAR VAR_11[] = {'C','o','o','k','i','e',':'};

    VAR_9 = sizeof(VAR_5)/sizeof(WCHAR);
    if(!FUNC_0(VAR_5, &VAR_9))
        return VAR_0;
    VAR_9--;

    VAR_8 = sizeof(VAR_11)/sizeof(WCHAR) + VAR_9 + 1 + VAR_2.len + VAR_3.len;
    VAR_7 = FUNC_1((VAR_8+1) * sizeof(WCHAR));
    if(!VAR_7)
        return ((void*)0);

    FUNC_2(VAR_7, VAR_11, sizeof(VAR_11));
    VAR_6 = VAR_7 + sizeof(VAR_11)/sizeof(WCHAR);

    FUNC_2(VAR_6, VAR_5, VAR_9*sizeof(WCHAR));
    VAR_6 += VAR_9;

    *VAR_6++ = '@';

    FUNC_2(VAR_6, VAR_2.str, VAR_2.len*sizeof(WCHAR));
    VAR_6 += VAR_2.len;

    for(VAR_10=0; VAR_10 < VAR_3.len; VAR_10++)
        VAR_6[VAR_10] = FUNC_3(VAR_3.str[VAR_10]);
    VAR_6[VAR_3.len] = 0;

    VAR_4->str = VAR_6;
    VAR_4->len = VAR_3.len;
    return VAR_7;
}
