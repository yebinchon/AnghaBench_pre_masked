
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int fragment_len; int const* fragment; } ;
typedef TYPE_2__ parse_data ;
typedef int WCHAR ;
struct TYPE_11__ {int modified_props; TYPE_1__* uri; int fragment_len; int * fragment; } ;
typedef TYPE_3__ UriBuilder ;
struct TYPE_9__ {int fragment_start; int fragment_len; int * canon_uri; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,TYPE_3__ const*,TYPE_2__*,int ,int ,...) ;
 int VAR_2 ;
 int FUNC_1 (int const*,int ) ;
 scalar_t__ FUNC_2 (int const**,TYPE_2__*,int ) ;

__attribute__((used)) static HRESULT FUNC_3(const UriBuilder *VAR_3, parse_data *VAR_4, DWORD VAR_5) {
    const WCHAR *VAR_6 = ((void*)0);
    const WCHAR **VAR_7;
    DWORD VAR_8;

    if(VAR_3->fragment) {
        VAR_6 = VAR_3->fragment;
        VAR_8 = VAR_3->fragment_len;
    } else if(!(VAR_3->modified_props & VAR_2) && VAR_3->uri &&
              VAR_3->uri->fragment_start > -1) {
        VAR_6 = VAR_3->uri->canon_uri+VAR_3->uri->fragment_start;
        VAR_8 = VAR_3->uri->fragment_len;
    }

    if(VAR_6) {
        const WCHAR *VAR_9 = VAR_6;
        VAR_7 = &VAR_6;

        if(FUNC_2(VAR_7, VAR_4, VAR_5) && VAR_8 == VAR_4->fragment_len)
            FUNC_0("(%p %p %x): Valid fragment component %s len=%d.\n", VAR_3, VAR_4, VAR_5,
                FUNC_1(VAR_4->fragment, VAR_4->fragment_len), VAR_4->fragment_len);
        else {
            FUNC_0("(%p %p %x): Invalid fragment component %s.\n", VAR_3, VAR_4, VAR_5,
                FUNC_1(VAR_9, VAR_8));
            return VAR_0;
        }
    }

    return VAR_1;
}
