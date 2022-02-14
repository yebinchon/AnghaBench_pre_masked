
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {size_t scheme_len; int * scheme; int uri; int is_relative; } ;
typedef TYPE_1__ parse_data ;
struct TYPE_10__ {int scheme_start; size_t scheme_len; size_t canon_len; char* canon_uri; } ;
typedef TYPE_2__ Uri ;
typedef size_t INT ;
typedef size_t DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (char*,TYPE_1__ const*,TYPE_2__*,size_t,int ) ;
 int FUNC_1 (char*,TYPE_1__ const*,TYPE_2__*,size_t,int ,size_t) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,size_t) ;
 char FUNC_4 (int ) ;

__attribute__((used)) static BOOL FUNC_5(const parse_data *VAR_2, Uri *VAR_3, DWORD VAR_4, BOOL VAR_5) {
    VAR_3->scheme_start = -1;
    VAR_3->scheme_len = 0;

    if(!VAR_2->scheme) {



        if(!VAR_2->is_relative) {
            FUNC_0("(%p %p %x): Unable to determine the scheme type of %s.\n", VAR_2,
                    VAR_3, VAR_4, FUNC_2(VAR_2->uri));
            return VAR_0;
        }
    } else {
        if(!VAR_5) {
            DWORD VAR_6;
            INT VAR_7 = VAR_3->canon_len;

            for(VAR_6 = 0; VAR_6 < VAR_2->scheme_len; ++VAR_6) {

                VAR_3->canon_uri[VAR_6 + VAR_7] = FUNC_4(VAR_2->scheme[VAR_6]);
            }

            VAR_3->canon_uri[VAR_6 + VAR_7] = ':';
            VAR_3->scheme_start = VAR_7;

            FUNC_1("(%p %p %x): Canonicalized scheme=%s, len=%d.\n", VAR_2, VAR_3, VAR_4,
                    FUNC_3(VAR_3->canon_uri+VAR_3->scheme_start, VAR_2->scheme_len), VAR_2->scheme_len);
        }


        VAR_3->canon_len += VAR_2->scheme_len + 1;
        VAR_3->scheme_len = VAR_2->scheme_len;
    }
    return VAR_1;
}
