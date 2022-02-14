
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* password; int password_len; scalar_t__ scheme_type; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
struct TYPE_6__ {int userinfo_split; int userinfo_start; size_t canon_len; char* canon_uri; } ;
typedef TYPE_2__ Uri ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 char FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const,char*) ;

__attribute__((used)) static BOOL FUNC_5(const parse_data *VAR_3, Uri *VAR_4, DWORD VAR_5, BOOL VAR_6) {
    const WCHAR *VAR_7;

    if(!VAR_3->password) {
        VAR_4->userinfo_split = -1;
        return VAR_0;
    }

    if(VAR_4->userinfo_start == -1)

        VAR_4->userinfo_start = VAR_4->canon_len;

    VAR_4->userinfo_split = VAR_4->canon_len - VAR_4->userinfo_start;


    if(!VAR_6)
        VAR_4->canon_uri[VAR_4->canon_len] = ':';
    ++VAR_4->canon_len;

    for(VAR_7 = VAR_3->password; VAR_7 < VAR_3->password+VAR_3->password_len; ++VAR_7) {
        if(*VAR_7 == '%') {

            if(VAR_3->scheme_type != VAR_1) {

                WCHAR VAR_8 = FUNC_0(VAR_7);
                if(FUNC_3(VAR_8)) {
                    if(!VAR_6)
                        VAR_4->canon_uri[VAR_4->canon_len] = VAR_8;

                    ++VAR_4->canon_len;


                    VAR_7 += 2;
                    continue;
                }
            }
        } else if(FUNC_1(*VAR_7) && !FUNC_2(*VAR_7) && !FUNC_3(*VAR_7) && *VAR_7 != '\\') {



            if(!(VAR_5 & VAR_2)) {
                if(!VAR_6)
                    FUNC_4(*VAR_7, VAR_4->canon_uri + VAR_4->canon_len);

                VAR_4->canon_len += 3;
                continue;
            }
        }

        if(!VAR_6)

            VAR_4->canon_uri[VAR_4->canon_len] = *VAR_7;
        ++VAR_4->canon_len;
    }

    return VAR_0;
}
