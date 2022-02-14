
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* scheme; int scheme_len; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const) ;

__attribute__((used)) static BOOL FUNC_2(const WCHAR **VAR_3, parse_data *VAR_4, DWORD VAR_5) {
    const WCHAR *VAR_6 = *VAR_3;

    VAR_4->scheme = ((void*)0);
    VAR_4->scheme_len = 0;

    while(**VAR_3) {
        if(**VAR_3 == '*' && *VAR_3 == VAR_6) {



            ++(*VAR_3);
            break;
        } else if(!FUNC_1(**VAR_3) && !FUNC_0(**VAR_3) && **VAR_3 != '+' &&
           **VAR_3 != '-' && **VAR_3 != '.')
            break;

        (*VAR_3)++;
    }

    if(*VAR_3 == VAR_6)
        return VAR_1;


    if(**VAR_3 != ':' && !((VAR_5 & VAR_0) && !**VAR_3)) {
        *VAR_3 = VAR_6;
        return VAR_1;
    }

    VAR_4->scheme = VAR_6;
    VAR_4->scheme_len = *VAR_3 - VAR_6;

    ++(*VAR_3);
    return VAR_2;
}
