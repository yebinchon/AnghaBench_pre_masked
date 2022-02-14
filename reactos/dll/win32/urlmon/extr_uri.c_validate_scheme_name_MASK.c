
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ scheme_len; int const* scheme; } ;
typedef TYPE_2__ parse_data ;
typedef int WCHAR ;
struct TYPE_11__ {scalar_t__ scheme_len; TYPE_1__* uri; int * scheme; } ;
typedef TYPE_3__ UriBuilder ;
struct TYPE_9__ {int scheme_start; scalar_t__ scheme_len; int * canon_uri; } ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_3__ const*,TYPE_2__*,scalar_t__,int ,...) ;
 int FUNC_1 (int const*,scalar_t__) ;
 scalar_t__ FUNC_2 (int const**,TYPE_2__*,scalar_t__,int ) ;

__attribute__((used)) static HRESULT FUNC_3(const UriBuilder *VAR_3, parse_data *VAR_4, DWORD VAR_5) {
    const WCHAR *VAR_6;
    const WCHAR *VAR_7;
    const WCHAR **VAR_8;
    DWORD VAR_9;

    if(VAR_3->scheme) {
        VAR_7 = VAR_3->scheme;
        VAR_9 = VAR_3->scheme_len;
    } else if(VAR_3->uri && VAR_3->uri->scheme_start > -1) {
        VAR_7 = VAR_3->uri->canon_uri+VAR_3->uri->scheme_start;
        VAR_9 = VAR_3->uri->scheme_len;
    } else {
        static const WCHAR VAR_10[] = {0};
        VAR_7 = VAR_10;
        VAR_9 = 0;
    }

    VAR_6 = VAR_7;
    VAR_8 = &VAR_7;
    if(FUNC_2(VAR_8, VAR_4, VAR_5, VAR_0) &&
       VAR_4->scheme_len == VAR_9) {
        if(VAR_4->scheme)
            FUNC_0("(%p %p %x): Found valid scheme component %s len=%d.\n", VAR_3, VAR_4, VAR_5,
               FUNC_1(VAR_4->scheme, VAR_4->scheme_len), VAR_4->scheme_len);
    } else {
        FUNC_0("(%p %p %x): Invalid scheme component found %s.\n", VAR_3, VAR_4, VAR_5,
            FUNC_1(VAR_6, VAR_9));
        return VAR_1;
   }

    return VAR_2;
}
