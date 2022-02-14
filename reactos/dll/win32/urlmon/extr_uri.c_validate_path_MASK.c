
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int path_len; int const* path; scalar_t__ is_opaque; } ;
typedef TYPE_2__ parse_data ;
typedef int WCHAR ;
struct TYPE_12__ {int path_len; int modified_props; TYPE_1__* uri; int * path; } ;
typedef TYPE_3__ UriBuilder ;
struct TYPE_10__ {int path_start; int path_len; int * canon_uri; } ;
typedef int HRESULT ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,TYPE_3__ const*,TYPE_2__*,int,int ,...) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int const*,int) ;
 scalar_t__ FUNC_2 (int const**,TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (int const**,TYPE_2__*,int) ;

__attribute__((used)) static HRESULT FUNC_4(const UriBuilder *VAR_5, parse_data *VAR_6, DWORD VAR_7) {
    const WCHAR *VAR_8 = ((void*)0);
    const WCHAR *VAR_9;
    const WCHAR **VAR_10;
    DWORD VAR_11;
    BOOL VAR_12 = VAR_3;
    BOOL VAR_13 = VAR_0;

    if(VAR_5->path) {
        VAR_8 = VAR_5->path;
        VAR_11 = VAR_5->path_len;
    } else if(!(VAR_5->modified_props & VAR_4) &&
              VAR_5->uri && VAR_5->uri->path_start > -1) {
        VAR_8 = VAR_5->uri->canon_uri+VAR_5->uri->path_start;
        VAR_11 = VAR_5->uri->path_len;
    } else {
        static const WCHAR VAR_14[] = {0};
        VAR_8 = VAR_14;
        VAR_12 = VAR_0;
        VAR_11 = -1;
    }

    VAR_9 = VAR_8;
    VAR_10 = &VAR_8;




    VAR_13 = VAR_6->is_opaque ?
        FUNC_3(VAR_10, VAR_6, VAR_7) : FUNC_2(VAR_10, VAR_6, VAR_7);

    if(!VAR_13 || (VAR_12 && VAR_11 != VAR_6->path_len)) {
        FUNC_0("(%p %p %x): Invalid path component %s.\n", VAR_5, VAR_6, VAR_7,
            FUNC_1(VAR_9, VAR_11) );
        return VAR_1;
    }

    FUNC_0("(%p %p %x): Valid path component %s len=%d.\n", VAR_5, VAR_6, VAR_7,
        FUNC_1(VAR_6->path, VAR_6->path_len), VAR_6->path_len);

    return VAR_2;
}
