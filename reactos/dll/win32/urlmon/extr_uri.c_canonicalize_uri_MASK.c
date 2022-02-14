
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {char* uri; int scheme_type; } ;
typedef TYPE_1__ parse_data ;
typedef char WCHAR ;
struct TYPE_19__ {char* canon_uri; int canon_size; int canon_len; int scheme_type; } ;
typedef TYPE_2__ Uri ;
typedef int INT ;
typedef int HRESULT ;
typedef int DWORD ;


 int FUNC_0 (char*,TYPE_1__ const*,TYPE_2__*,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_4 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_5 (TYPE_1__ const*,TYPE_2__*,int ,int ) ;
 int FUNC_6 (TYPE_1__ const*,int ) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (int) ;
 char* FUNC_9 (char*,int) ;

__attribute__((used)) static HRESULT FUNC_10(const parse_data *VAR_4, Uri *VAR_5, DWORD VAR_6) {
    INT VAR_7;

    VAR_5->canon_uri = ((void*)0);
    VAR_5->canon_size = VAR_5->canon_len = 0;

    FUNC_1("(%p %p %x): beginning to canonicalize URI %s.\n", VAR_4, VAR_5, VAR_6, FUNC_7(VAR_4->uri));


    VAR_7 = FUNC_6(VAR_4, VAR_6);
    if(VAR_7 == -1) {
        FUNC_0("(%p %p %x): Could not compute the canonicalized length of %s.\n", VAR_4, VAR_5, VAR_6,
                FUNC_7(VAR_4->uri));
        return VAR_0;
    }

    VAR_5->canon_uri = FUNC_8((VAR_7+1)*sizeof(WCHAR));
    if(!VAR_5->canon_uri)
        return VAR_1;

    VAR_5->canon_size = VAR_7;
    if(!FUNC_5(VAR_4, VAR_5, VAR_6, VAR_2)) {
        FUNC_0("(%p %p %x): Unable to canonicalize the scheme of the URI.\n", VAR_4, VAR_5, VAR_6);
        return VAR_0;
    }
    VAR_5->scheme_type = VAR_4->scheme_type;

    if(!FUNC_3(VAR_4, VAR_5, VAR_6, VAR_2)) {
        FUNC_0("(%p %p %x): Unable to canonicalize the heirpart of the URI\n", VAR_4, VAR_5, VAR_6);
        return VAR_0;
    }

    if(!FUNC_4(VAR_4, VAR_5, VAR_6, VAR_2)) {
        FUNC_0("(%p %p %x): Unable to canonicalize query string of the URI.\n",
            VAR_4, VAR_5, VAR_6);
        return VAR_0;
    }

    if(!FUNC_2(VAR_4, VAR_5, VAR_6, VAR_2)) {
        FUNC_0("(%p %p %x): Unable to canonicalize fragment of the URI.\n",
            VAR_4, VAR_5, VAR_6);
        return VAR_0;
    }




    if(VAR_5->canon_len < VAR_5->canon_size) {



        WCHAR *VAR_8 = FUNC_9(VAR_5->canon_uri, (VAR_5->canon_len+1)*sizeof(WCHAR));
        if(!VAR_8)
            return VAR_1;

        VAR_5->canon_uri = VAR_8;
        VAR_5->canon_size = VAR_5->canon_len;
    }

    VAR_5->canon_uri[VAR_5->canon_len] = '\0';
    FUNC_1("(%p %p %x): finished canonicalizing the URI. uri=%s\n", VAR_4, VAR_5, VAR_6, FUNC_7(VAR_5->canon_uri));

    return VAR_3;
}
