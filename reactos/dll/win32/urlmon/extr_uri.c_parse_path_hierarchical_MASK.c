
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ scheme_type; char const* path; int path_len; int must_have_path; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,char const**,TYPE_1__*,int,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (scalar_t__,char const) ;

__attribute__((used)) static BOOL FUNC_5(const WCHAR **VAR_7, parse_data *VAR_8, DWORD VAR_9) {
    const WCHAR *VAR_10 = *VAR_7;
    static const WCHAR VAR_11[] = {'/',0};
    const BOOL VAR_12 = VAR_8->scheme_type == VAR_2;

    if(FUNC_4(VAR_8->scheme_type, **VAR_7)) {
        if(VAR_8->scheme_type == VAR_4 && !VAR_8->must_have_path) {
            VAR_8->path = ((void*)0);
            VAR_8->path_len = 0;
        } else if(!(VAR_9 & VAR_6)) {

            VAR_8->path = VAR_11;
            VAR_8->path_len = 1;
        }
    } else {
        while(!FUNC_4(VAR_8->scheme_type, **VAR_7)) {
            if(**VAR_7 == '%' && VAR_8->scheme_type != VAR_3 && !VAR_12) {
                if(!FUNC_1(VAR_7)) {
                    *VAR_7 = VAR_10;
                    return VAR_0;
                } else
                    continue;
            } else if(FUNC_3(**VAR_7) && VAR_12 &&
                      (VAR_9 & VAR_5)) {



                *VAR_7 = VAR_10;
                return VAR_0;
            } else if(**VAR_7 == '\\') {



                if(VAR_9 & VAR_6) {
                    if(VAR_8->scheme_type != VAR_2 &&
                       VAR_8->scheme_type != VAR_3) {
                        *VAR_7 = VAR_10;
                        return VAR_0;
                    }
                }
            }

            ++(*VAR_7);
        }





        if(*VAR_7 == VAR_10) {
            VAR_8->path = ((void*)0);
            VAR_8->path_len = 0;
        } else {
            VAR_8->path = VAR_10;
            VAR_8->path_len = *VAR_7 - VAR_10;
        }
    }

    if(VAR_8->path)
        FUNC_0("(%p %p %x): Parsed path %s len=%d\n", VAR_7, VAR_8, VAR_9,
            FUNC_2(VAR_8->path, VAR_8->path_len), VAR_8->path_len);
    else
        FUNC_0("(%p %p %x): The URI contained no path\n", VAR_7, VAR_8, VAR_9);

    return VAR_1;
}
