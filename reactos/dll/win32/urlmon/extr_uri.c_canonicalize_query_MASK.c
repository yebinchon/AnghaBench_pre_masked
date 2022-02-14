
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ scheme_type; char* query; int query_len; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
struct TYPE_8__ {int query_start; size_t query_len; size_t canon_len; char* canon_uri; } ;
typedef TYPE_2__ Uri ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,TYPE_1__ const*,TYPE_2__*,int,int,int ,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,size_t) ;
 char FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const) ;
 int FUNC_4 (char const) ;
 scalar_t__ FUNC_5 (char const) ;
 int FUNC_6 (char const,char*) ;

__attribute__((used)) static BOOL FUNC_7(const parse_data *VAR_4, Uri *VAR_5, DWORD VAR_6, BOOL VAR_7) {
    const WCHAR *VAR_8, *VAR_9;
    const BOOL VAR_10 = VAR_4->scheme_type != VAR_1;

    if(!VAR_4->query) {
        VAR_5->query_start = -1;
        VAR_5->query_len = 0;
        return VAR_0;
    }

    VAR_5->query_start = VAR_5->canon_len;

    VAR_9 = VAR_4->query+VAR_4->query_len;
    for(VAR_8 = VAR_4->query; VAR_8 < VAR_9; ++VAR_8) {
        if(*VAR_8 == '%') {
            if(VAR_10 && !(VAR_6 & VAR_2)) {
                WCHAR VAR_11 = FUNC_2(VAR_8);
                if(FUNC_5(VAR_11)) {
                    if(!VAR_7)
                        VAR_5->canon_uri[VAR_5->canon_len] = VAR_11;
                    ++VAR_5->canon_len;

                    VAR_8 += 2;
                    continue;
                }
            }
        } else if(VAR_10 && FUNC_3(*VAR_8) && !FUNC_5(*VAR_8) && !FUNC_4(*VAR_8)) {
            if(!(VAR_6 & VAR_3) &&
               !(VAR_6 & VAR_2)) {
                if(!VAR_7)
                    FUNC_6(*VAR_8, VAR_5->canon_uri+VAR_5->canon_len);
                VAR_5->canon_len += 3;
                continue;
            }
        }

        if(!VAR_7)
            VAR_5->canon_uri[VAR_5->canon_len] = *VAR_8;
        ++VAR_5->canon_len;
    }

    VAR_5->query_len = VAR_5->canon_len - VAR_5->query_start;

    if(!VAR_7)
        FUNC_0("(%p %p %x %d): Canonicalized query string %s len=%d\n", VAR_4, VAR_5, VAR_6,
            VAR_7, FUNC_1(VAR_5->canon_uri+VAR_5->query_start, VAR_5->query_len),
            VAR_5->query_len);
    return VAR_0;
}
