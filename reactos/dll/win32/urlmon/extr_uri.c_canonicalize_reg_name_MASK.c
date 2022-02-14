
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ scheme_type; scalar_t__ host_len; char* host; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
struct TYPE_8__ {int host_start; size_t host_len; char* canon_uri; size_t canon_len; int authority_start; int domain_offset; int host_type; } ;
typedef TYPE_2__ Uri ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*,char const*,scalar_t__) ;
 int FUNC_1 (char*,TYPE_1__ const*,TYPE_2__*,int,int,int ,size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (char*,size_t) ;
 char FUNC_3 (char const*) ;
 int FUNC_4 (char*,size_t,int *) ;
 scalar_t__ FUNC_5 (char const) ;
 int FUNC_6 (char const) ;
 scalar_t__ FUNC_7 (char const) ;
 scalar_t__ FUNC_8 (char) ;
 scalar_t__ FUNC_9 (char const*) ;
 int FUNC_10 (char const,char*) ;
 void* FUNC_11 (char const) ;

__attribute__((used)) static BOOL FUNC_12(const parse_data *VAR_7, Uri *VAR_8,
                                  DWORD VAR_9, BOOL VAR_10) {
    static const WCHAR VAR_11[] =
            {'l','o','c','a','l','h','o','s','t',0};
    const WCHAR *VAR_12;
    const BOOL VAR_13 = VAR_7->scheme_type != VAR_2;

    if(VAR_7->scheme_type == VAR_1 &&
       VAR_7->host_len == FUNC_9(VAR_11)) {
        if(!FUNC_0(VAR_7->host, VAR_11, VAR_7->host_len)) {
            VAR_8->host_start = -1;
            VAR_8->host_len = 0;
            VAR_8->host_type = VAR_6;
            return VAR_0;
        }
    }

    if(VAR_7->scheme_type == VAR_1 && VAR_9 & VAR_3) {
        if(!VAR_10) {
            VAR_8->canon_uri[VAR_8->canon_len] = '\\';
            VAR_8->canon_uri[VAR_8->canon_len+1] = '\\';
        }
        VAR_8->canon_len += 2;
        VAR_8->authority_start = VAR_8->canon_len;
    }

    VAR_8->host_start = VAR_8->canon_len;

    for(VAR_12 = VAR_7->host; VAR_12 < VAR_7->host+VAR_7->host_len; ++VAR_12) {
        if(*VAR_12 == '%' && VAR_13) {
            WCHAR VAR_14 = FUNC_3(VAR_12);
            if(FUNC_7(VAR_14)) {



                if(!(VAR_9 & VAR_4) && FUNC_8(VAR_14)) {
                    if(!VAR_10)
                        VAR_8->canon_uri[VAR_8->canon_len] = FUNC_11(VAR_14);
                } else {
                    if(!VAR_10)
                        VAR_8->canon_uri[VAR_8->canon_len] = VAR_14;
                }
                ++VAR_8->canon_len;


                VAR_12 += 2;
                continue;
            } else {

                if(!VAR_10)
                    VAR_8->canon_uri[VAR_8->canon_len] = *VAR_12;
                ++VAR_8->canon_len;
            }
        } else if(*VAR_12 == '\\') {

            if(!VAR_10)
                VAR_8->canon_uri[VAR_8->canon_len] = *VAR_12;
            ++VAR_8->canon_len;
        } else if(!(VAR_9 & VAR_5) && FUNC_5(*VAR_12) &&
                  !FUNC_7(*VAR_12) && !FUNC_6(*VAR_12) && VAR_13) {
            if(!VAR_10) {
                FUNC_10(*VAR_12, VAR_8->canon_uri+VAR_8->canon_len);


                if(!(VAR_9 & VAR_4)) {
                    VAR_8->canon_uri[VAR_8->canon_len+1] = FUNC_11(VAR_8->canon_uri[VAR_8->canon_len+1]);
                    VAR_8->canon_uri[VAR_8->canon_len+2] = FUNC_11(VAR_8->canon_uri[VAR_8->canon_len+2]);
                }
            }

            VAR_8->canon_len += 3;
        } else {
            if(!VAR_10) {
                if(!(VAR_9 & VAR_4) && VAR_13)
                    VAR_8->canon_uri[VAR_8->canon_len] = FUNC_11(*VAR_12);
                else
                    VAR_8->canon_uri[VAR_8->canon_len] = *VAR_12;
            }

            ++VAR_8->canon_len;
        }
    }

    VAR_8->host_len = VAR_8->canon_len - VAR_8->host_start;

    if(!VAR_10)
        FUNC_1("(%p %p %x %d): Canonicalize reg_name=%s len=%d\n", VAR_7, VAR_8, VAR_9,
            VAR_10, FUNC_2(VAR_8->canon_uri+VAR_8->host_start, VAR_8->host_len),
            VAR_8->host_len);

    if(!VAR_10)
        FUNC_4(VAR_8->canon_uri+VAR_8->host_start, VAR_8->host_len,
            &(VAR_8->domain_offset));

    return VAR_0;
}
