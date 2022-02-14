
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ host_len; int host_type; int const* host; } ;
typedef TYPE_2__ parse_data ;
typedef int WCHAR ;
struct TYPE_11__ {scalar_t__ host_len; int modified_props; TYPE_1__* uri; int * host; } ;
typedef TYPE_3__ UriBuilder ;
struct TYPE_9__ {int host_start; scalar_t__ host_len; int * canon_uri; } ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,TYPE_3__ const*,TYPE_2__*,scalar_t__,int ,...) ;
 int VAR_5 ;
 int FUNC_1 (int const*,scalar_t__) ;
 scalar_t__ FUNC_2 (int const**,TYPE_2__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static HRESULT FUNC_3(const UriBuilder *VAR_6, parse_data *VAR_7, DWORD VAR_8) {
    const WCHAR *VAR_9;
    const WCHAR **VAR_10;
    DWORD VAR_11;

    if(VAR_6->host) {
        VAR_9 = VAR_6->host;
        VAR_11 = VAR_6->host_len;
    } else if(!(VAR_6->modified_props & VAR_5) && VAR_6->uri && VAR_6->uri->host_start > -1) {
        VAR_9 = VAR_6->uri->canon_uri + VAR_6->uri->host_start;
        VAR_11 = VAR_6->uri->host_len;
    } else
        VAR_9 = ((void*)0);

    if(VAR_9) {
        const WCHAR *VAR_12 = VAR_9;
        DWORD VAR_13 = VAR_0|VAR_1|VAR_3;
        VAR_10 = &VAR_9;

        if(FUNC_2(VAR_10, VAR_7, VAR_8, VAR_13) && VAR_7->host_len == VAR_11)
            FUNC_0("(%p %p %x): Found valid host name %s len=%d type=%d.\n", VAR_6, VAR_7, VAR_8,
                FUNC_1(VAR_7->host, VAR_7->host_len), VAR_7->host_len, VAR_7->host_type);
        else {
            FUNC_0("(%p %p %x): Invalid host name found %s.\n", VAR_6, VAR_7, VAR_8,
                FUNC_1(VAR_12, VAR_11));
            return VAR_2;
        }
    }

    return VAR_4;
}
