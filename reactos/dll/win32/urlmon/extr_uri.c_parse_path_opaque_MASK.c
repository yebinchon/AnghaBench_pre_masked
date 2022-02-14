
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ scheme_type; char const* path; int path_len; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,char const**,TYPE_1__*,int,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char const**) ;
 int FUNC_2 (char const*,int) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (scalar_t__,char const) ;

__attribute__((used)) static BOOL FUNC_5(const WCHAR **VAR_6, parse_data *VAR_7, DWORD VAR_8) {
    const BOOL VAR_9 = VAR_7->scheme_type != VAR_4;
    const BOOL VAR_10 = VAR_7->scheme_type == VAR_2;
    const BOOL VAR_11 = VAR_7->scheme_type == VAR_3;

    if (VAR_11 && (*VAR_6)[0] == '/' && (*VAR_6)[1] == '/')
    {
        if ((*VAR_6)[2]) VAR_7->path = *VAR_6 + 2;
        else VAR_7->path = ((void*)0);
    }
    else
        VAR_7->path = *VAR_6;

    while(!FUNC_4(VAR_7->scheme_type, **VAR_6)) {
        if(**VAR_6 == '%' && VAR_9) {
            if(!FUNC_1(VAR_6)) {
                *VAR_6 = VAR_7->path;
                VAR_7->path = ((void*)0);
                return VAR_0;
            } else
                continue;
        } else if(FUNC_3(**VAR_6) && VAR_10 &&
                  (VAR_8 & VAR_5)) {
            *VAR_6 = VAR_7->path;
            VAR_7->path = ((void*)0);
            return VAR_0;
        }

        ++(*VAR_6);
    }

    if (VAR_7->path) VAR_7->path_len = *VAR_6 - VAR_7->path;
    FUNC_0("(%p %p %x): Parsed opaque URI path %s len=%d\n", VAR_6, VAR_7, VAR_8,
        FUNC_2(VAR_7->path, VAR_7->path_len), VAR_7->path_len);
    return VAR_1;
}
