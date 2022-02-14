
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ scheme_type; char const* path; void* is_opaque; void* must_have_path; int has_implicit_scheme; int path_len; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
typedef int DWORD ;
typedef void* BOOL ;


 void* VAR_0 ;
 int FUNC_0 (char*,char const**,TYPE_1__*,int) ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (char const**,TYPE_1__*) ;
 int FUNC_2 (char const**,TYPE_1__*,int) ;
 void* FUNC_3 (char const**,TYPE_1__*,int) ;
 int FUNC_4 (char const**,TYPE_1__*,int) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static BOOL FUNC_6(const WCHAR **VAR_6, parse_data *VAR_7, DWORD VAR_8) {
    const WCHAR *VAR_9 = *VAR_6;

    VAR_7->must_have_path = VAR_0;


    if(VAR_7->scheme_type == VAR_2) {
        VAR_7->path = *VAR_6;
        VAR_7->path_len = FUNC_5(*VAR_6);
        VAR_7->is_opaque = VAR_1;
        *VAR_6 += VAR_7->path_len;
        return VAR_1;
    }


    if(FUNC_1(VAR_6, VAR_7)) {



        if(VAR_7->scheme_type != VAR_3 ||
           !(VAR_8 & VAR_5)) {
            FUNC_0("(%p %p %x): Treating URI as an hierarchical URI.\n", VAR_6, VAR_7, VAR_8);
            VAR_7->is_opaque = VAR_0;

            if(VAR_7->scheme_type == VAR_4 && !VAR_7->has_implicit_scheme) {
                if(**VAR_6 == '/' && *(*VAR_6+1) == '/') {
                    VAR_7->must_have_path = VAR_1;
                    *VAR_6 += 2;
                }
            }


            if(!FUNC_2(VAR_6, VAR_7, VAR_8))
                return VAR_0;

            return FUNC_3(VAR_6, VAR_7, VAR_8);
        } else



            *VAR_6 = VAR_9;
    }





    FUNC_0("(%p %p %x): Treating URI as an opaque URI.\n", VAR_6, VAR_7, VAR_8);

    VAR_7->is_opaque = VAR_1;
    if(!FUNC_4(VAR_6, VAR_7, VAR_8))
        return VAR_0;

    return VAR_1;
}
