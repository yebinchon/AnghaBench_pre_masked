
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int username_len; int const* username; } ;
typedef TYPE_2__ parse_data ;
typedef int WCHAR ;
struct TYPE_11__ {int username_len; int modified_props; TYPE_1__* uri; int * username; } ;
typedef TYPE_3__ UriBuilder ;
struct TYPE_9__ {int userinfo_start; int userinfo_split; int userinfo_len; int const* canon_uri; } ;
typedef int HRESULT ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_3__ const*,TYPE_2__*,int,int ,...) ;
 int VAR_3 ;
 int FUNC_1 (int const*,int) ;
 scalar_t__ FUNC_2 (int const**,TYPE_2__*,int,int ) ;

__attribute__((used)) static HRESULT FUNC_3(const UriBuilder *VAR_4, parse_data *VAR_5, DWORD VAR_6) {
    const WCHAR *VAR_7;
    const WCHAR **VAR_8;
    DWORD VAR_9;

    if(VAR_4->username) {
        VAR_7 = VAR_4->username;
        VAR_9 = VAR_4->username_len;
    } else if(!(VAR_4->modified_props & VAR_3) && VAR_4->uri &&
              VAR_4->uri->userinfo_start > -1 && VAR_4->uri->userinfo_split != 0) {

        VAR_5->username = VAR_4->uri->canon_uri+VAR_4->uri->userinfo_start;
        VAR_5->username_len = (VAR_4->uri->userinfo_split > -1) ?
                                        VAR_4->uri->userinfo_split : VAR_4->uri->userinfo_len;
        VAR_7 = ((void*)0);
    } else {
        VAR_7 = ((void*)0);
        VAR_9 = 0;
    }

    if(VAR_7) {
        const WCHAR *VAR_10 = VAR_7;
        VAR_8 = &VAR_7;
        if(FUNC_2(VAR_8, VAR_5, VAR_6, VAR_0) &&
           VAR_5->username_len == VAR_9)
            FUNC_0("(%p %p %x): Found valid username component %s len=%d.\n", VAR_4, VAR_5, VAR_6,
                FUNC_1(VAR_5->username, VAR_5->username_len), VAR_5->username_len);
        else {
            FUNC_0("(%p %p %x): Invalid username component found %s.\n", VAR_4, VAR_5, VAR_6,
                FUNC_1(VAR_10, VAR_9));
            return VAR_1;
        }
    }

    return VAR_2;
}
