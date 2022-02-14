
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ scheme_type; size_t host_len; char* host; scalar_t__ has_implicit_ip; } ;
typedef TYPE_1__ parse_data ;
typedef int WCHAR ;
struct TYPE_8__ {size_t host_start; size_t canon_len; char* canon_uri; size_t host_len; } ;
typedef TYPE_2__ Uri ;
typedef size_t DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_1__ const*,TYPE_2__*,size_t,scalar_t__) ;
 int FUNC_2 (char*,size_t) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static BOOL FUNC_4(const parse_data *VAR_3, Uri *VAR_4, DWORD VAR_5, BOOL VAR_6) {
    if(VAR_3->has_implicit_ip)
        return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
    else {
        VAR_4->host_start = VAR_4->canon_len;


        if(VAR_3->scheme_type != VAR_2) {

            DWORD VAR_7, VAR_8 = 0, VAR_9 = 0;
            BOOL VAR_10 = VAR_0;

            for(VAR_7 = 0; VAR_7 < VAR_3->host_len; ++VAR_7) {
                if(VAR_3->host[VAR_7] == '0' && !VAR_10) {





                    if(VAR_8 == 2 ||
                       VAR_7+1 == VAR_3->host_len ||
                       VAR_3->host[VAR_7+1] == '.') {
                        if(!VAR_6)
                            VAR_4->canon_uri[VAR_4->canon_len] = VAR_3->host[VAR_7];
                        ++VAR_4->canon_len;
                        FUNC_0("Adding zero\n");
                    }
                } else if(VAR_3->host[VAR_7] == '.') {
                    if(!VAR_6)
                        VAR_4->canon_uri[VAR_4->canon_len] = VAR_3->host[VAR_7];
                    ++VAR_4->canon_len;

                    VAR_8 = 0;
                    VAR_10 = VAR_0;
                    ++VAR_9;
                } else {
                    if(!VAR_6)
                        VAR_4->canon_uri[VAR_4->canon_len] = VAR_3->host[VAR_7];
                    ++VAR_4->canon_len;

                    ++VAR_8;
                    VAR_10 = VAR_1;
                }
            }




            for( ; VAR_9 < 3; ++VAR_9) {
                if(!VAR_6) {
                    VAR_4->canon_uri[VAR_4->canon_len] = '.';
                    VAR_4->canon_uri[VAR_4->canon_len+1] = '0';
                }

                VAR_4->canon_len += 2;
            }
        } else {

            if(!VAR_6)
                FUNC_3(VAR_4->canon_uri+VAR_4->canon_len, VAR_3->host, VAR_3->host_len*sizeof(WCHAR));
            VAR_4->canon_len += VAR_3->host_len;
        }

        VAR_4->host_len = VAR_4->canon_len - VAR_4->host_start;
        if(!VAR_6)
            FUNC_0("(%p %p %x %d): Canonicalized IPv4 address, ip=%s len=%d\n",
                VAR_3, VAR_4, VAR_5, VAR_6,
                FUNC_2(VAR_4->canon_uri+VAR_4->host_start, VAR_4->host_len),
                VAR_4->host_len);
    }

    return VAR_1;
}
