
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* scheme; int scheme_len; scalar_t__ scheme_type; char* host; char* username; int username_len; char* password; int password_len; scalar_t__ host_type; int host_len; scalar_t__ port_value; char* path; int path_len; char* query; int query_len; char* fragment; int fragment_len; int is_opaque; scalar_t__ has_port; } ;
typedef TYPE_1__ parse_data ;
typedef int WCHAR ;
struct TYPE_7__ {scalar_t__ scheme; scalar_t__ port; } ;
typedef int DWORD ;
typedef char* BSTR ;
typedef int BOOL ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,TYPE_1__ const*,char*,int,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*,int,char*,int*) ;
 int FUNC_3 (char*,int) ;
 TYPE_3__* VAR_6 ;
 int FUNC_4 (char*,char*,int) ;
 scalar_t__ FUNC_5 (char*,scalar_t__) ;

__attribute__((used)) static DWORD FUNC_6(const parse_data *VAR_7, BSTR VAR_8, DWORD VAR_9) {
    DWORD VAR_10 = 0;

    if(VAR_7->scheme) {
        if(VAR_8) {
            FUNC_4(VAR_8, VAR_7->scheme, VAR_7->scheme_len*sizeof(WCHAR));
            VAR_8[VAR_7->scheme_len] = ':';
        }
        VAR_10 += VAR_7->scheme_len+1;
    }

    if(!VAR_7->is_opaque) {

        if(VAR_8) {
            VAR_8[VAR_10] = '/';
            VAR_8[VAR_10+1] = '/';
        }
        VAR_10 += 2;




        if(VAR_9 & VAR_1 &&
           VAR_7->scheme_type == VAR_4 && VAR_7->host) {
            if(VAR_8) {
                VAR_8[VAR_10] = '\\';
                VAR_8[VAR_10+1] = '\\';
            }
            VAR_10 += 2;
        }
    }

    if(VAR_7->username) {
        if(VAR_8)
            FUNC_4(VAR_8+VAR_10, VAR_7->username, VAR_7->username_len*sizeof(WCHAR));
        VAR_10 += VAR_7->username_len;
    }

    if(VAR_7->password) {
        if(VAR_8) {
            VAR_8[VAR_10] = ':';
            FUNC_4(VAR_8+VAR_10+1, VAR_7->password, VAR_7->password_len*sizeof(WCHAR));
        }
        VAR_10 += VAR_7->password_len+1;
    }

    if(VAR_7->password || VAR_7->username) {
        if(VAR_8)
            VAR_8[VAR_10] = '@';
        ++VAR_10;
    }

    if(VAR_7->host) {



        const BOOL VAR_11 = VAR_7->host_type == VAR_5 && *(VAR_7->host) != '[';
        if(VAR_11) {
            if(VAR_8)
                VAR_8[VAR_10] = '[';
            ++VAR_10;
        }

        if(VAR_8)
            FUNC_4(VAR_8+VAR_10, VAR_7->host, VAR_7->host_len*sizeof(WCHAR));
        VAR_10 += VAR_7->host_len;

        if(VAR_11) {
            if(VAR_8)
                VAR_8[VAR_10] = ']';
            VAR_10++;
        }
    }

    if(VAR_7->has_port) {



        DWORD VAR_12;
        BOOL VAR_13 = VAR_0;

        for(VAR_12 = 0; VAR_12 < FUNC_0(VAR_6); ++VAR_12) {
            if(VAR_7->scheme_type == VAR_6[VAR_12].scheme &&
               VAR_7->port_value == VAR_6[VAR_12].port)
                VAR_13 = VAR_3;
        }

        if(!VAR_13 || VAR_9 & VAR_2) {
            if(VAR_8)
                VAR_8[VAR_10] = ':';
            ++VAR_10;

            if(VAR_8)
                VAR_10 += FUNC_5(VAR_8+VAR_10, VAR_7->port_value);
            else
                VAR_10 += FUNC_5(((void*)0), VAR_7->port_value);
        }
    }


    if(!VAR_7->is_opaque && VAR_7->path && *(VAR_7->path) != '/') {
        if(VAR_8)
            VAR_8[VAR_10] = '/';
        ++VAR_10;
    }

    if(VAR_7->path) {
        if(!VAR_7->is_opaque && VAR_7->scheme_type == VAR_4 &&
           VAR_9 & VAR_1) {
            DWORD VAR_14 = 0;

            if(VAR_8)
                FUNC_2(VAR_7->path, VAR_7->path_len, VAR_8+VAR_10, &VAR_14);
            else
                FUNC_2(VAR_7->path, VAR_7->path_len, ((void*)0), &VAR_14);

            VAR_10 += VAR_14;
        } else {
            if(VAR_8)
                FUNC_4(VAR_8+VAR_10, VAR_7->path, VAR_7->path_len*sizeof(WCHAR));
            VAR_10 += VAR_7->path_len;
        }
    }

    if(VAR_7->query) {
        if(VAR_8)
            FUNC_4(VAR_8+VAR_10, VAR_7->query, VAR_7->query_len*sizeof(WCHAR));
        VAR_10 += VAR_7->query_len;
    }

    if(VAR_7->fragment) {
        if(VAR_8)
            FUNC_4(VAR_8+VAR_10, VAR_7->fragment, VAR_7->fragment_len*sizeof(WCHAR));
        VAR_10 += VAR_7->fragment_len;
    }

    if(VAR_8)
        FUNC_1("(%p %p): Generated raw uri=%s len=%d\n", VAR_7, VAR_8, FUNC_3(VAR_8, VAR_10), VAR_10);
    else
        FUNC_1("(%p %p): Computed raw uri len=%d\n", VAR_7, VAR_8, VAR_10);

    return VAR_10;
}
