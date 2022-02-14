
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* username; scalar_t__ scheme_type; int username_len; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char const**) ;
 scalar_t__ FUNC_1 (char const,int) ;

__attribute__((used)) static BOOL FUNC_2(const WCHAR **VAR_4, parse_data *VAR_5, DWORD VAR_6, DWORD VAR_7) {
    VAR_5->username = *VAR_4;

    while(**VAR_4 != ':' && **VAR_4 != '@') {
        if(**VAR_4 == '%') {
            if(!FUNC_0(VAR_4)) {
                if(VAR_5->scheme_type != VAR_3) {
                    *VAR_4 = VAR_5->username;
                    VAR_5->username = ((void*)0);
                    return VAR_1;
                }
            } else
                continue;
        } else if(VAR_7 & VAR_0 && !**VAR_4)
            break;
        else if(FUNC_1(**VAR_4, VAR_5->scheme_type != VAR_3)) {
            *VAR_4 = VAR_5->username;
            VAR_5->username = ((void*)0);
            return VAR_1;
        }

        ++(*VAR_4);
    }

    VAR_5->username_len = *VAR_4 - VAR_5->username;
    return VAR_2;
}
