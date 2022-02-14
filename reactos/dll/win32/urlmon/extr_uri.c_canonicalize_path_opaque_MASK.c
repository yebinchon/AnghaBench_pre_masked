
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ scheme_type; char* path; int path_len; scalar_t__ is_relative; scalar_t__ scheme; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
struct TYPE_8__ {int path_start; int path_len; int canon_len; char* canon_uri; } ;
typedef TYPE_2__ Uri ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__ const*,TYPE_2__*,int,int,int ,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (char*,int) ;
 char FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 int FUNC_6 (char*,char*,int) ;
 int FUNC_7 (char const,char*) ;
 int FUNC_8 (char*,size_t) ;

__attribute__((used)) static BOOL FUNC_9(const parse_data *VAR_9, Uri *VAR_10, DWORD VAR_11, BOOL VAR_12) {
    const WCHAR *VAR_13;
    const BOOL VAR_14 = VAR_9->scheme_type != VAR_5;
    const BOOL VAR_15 = VAR_9->scheme_type == VAR_2;
    const BOOL VAR_16 = VAR_9->scheme_type == VAR_4;

    if(!VAR_9->path) {
        VAR_10->path_start = -1;
        VAR_10->path_len = 0;
        return VAR_1;
    }

    VAR_10->path_start = VAR_10->canon_len;

    if(VAR_16){


        VAR_11 |= VAR_6;
    }


    if(VAR_9->scheme_type == VAR_3) {
        if(!VAR_12)
            FUNC_6(VAR_10->canon_uri+VAR_10->canon_len, VAR_9->path, VAR_9->path_len*sizeof(WCHAR));
        VAR_10->path_len = VAR_9->path_len;
        VAR_10->canon_len += VAR_9->path_len;
        return VAR_1;
    }




    if(VAR_9->scheme && *(VAR_9->path) == '/' && *(VAR_9->path+1) == '/') {

        if(!VAR_12) {
            VAR_10->canon_uri[VAR_10->canon_len] = '/';
            VAR_10->canon_uri[VAR_10->canon_len+1] = '.';
        }

        VAR_10->canon_len += 2;
    }

    for(VAR_13 = VAR_9->path; VAR_13 < VAR_9->path+VAR_9->path_len; ++VAR_13) {
        BOOL VAR_17 = VAR_1;

        if(*VAR_13 == '%' && VAR_14) {
            WCHAR VAR_18 = FUNC_2(VAR_13);

            if(FUNC_5(VAR_18)) {
                if(!VAR_12)
                    VAR_10->canon_uri[VAR_10->canon_len] = VAR_18;
                ++VAR_10->canon_len;

                VAR_13 += 2;
                continue;
            }
        } else if(*VAR_13 == '/' && VAR_15 && (VAR_11 & VAR_6)) {
            if(!VAR_12)
                VAR_10->canon_uri[VAR_10->canon_len] = '\\';
            ++VAR_10->canon_len;
            VAR_17 = VAR_0;
        } else if(*VAR_13 == '\\') {
            if((VAR_9->is_relative || VAR_16 || VAR_15) && !(VAR_11 & VAR_6)) {

                if(!VAR_12)
                    VAR_10->canon_uri[VAR_10->canon_len] = '/';
                ++VAR_10->canon_len;
                VAR_17 = VAR_0;
            }
        } else if(VAR_16 && *VAR_13 == ':' && VAR_13 + 1 < VAR_9->path + VAR_9->path_len && *(VAR_13 + 1) == ':') {
            VAR_11 &= ~VAR_6;
        } else if(VAR_14 && FUNC_3(*VAR_13) && !FUNC_5(*VAR_13) && !FUNC_4(*VAR_13) &&
                  !(VAR_11 & VAR_8)) {
            if(!(VAR_15 && (VAR_11 & VAR_6))) {
                if(!VAR_12)
                    FUNC_7(*VAR_13, VAR_10->canon_uri+VAR_10->canon_len);
                VAR_10->canon_len += 3;
                VAR_17 = VAR_0;
            }
        }

        if(VAR_17) {
            if(!VAR_12)
                VAR_10->canon_uri[VAR_10->canon_len] = *VAR_13;
            ++VAR_10->canon_len;
        }
    }

    if(VAR_16 && !VAR_12 && !(VAR_11 & VAR_7)) {
        DWORD VAR_19 = FUNC_8(VAR_10->canon_uri + VAR_10->path_start,
                                            VAR_10->canon_len - VAR_10->path_start);
        VAR_10->canon_len = VAR_10->path_start + VAR_19;
    }

    VAR_10->path_len = VAR_10->canon_len - VAR_10->path_start;

    if(!VAR_12)
        FUNC_0("(%p %p %x %d): Canonicalized opaque URI path %s len=%d\n", VAR_9, VAR_10, VAR_11, VAR_12,
            FUNC_1(VAR_10->canon_uri+VAR_10->path_start, VAR_10->path_len), VAR_10->path_len);
    return VAR_1;
}
