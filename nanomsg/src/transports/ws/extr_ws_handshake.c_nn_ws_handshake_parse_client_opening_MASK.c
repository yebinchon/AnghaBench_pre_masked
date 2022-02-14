
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nn_ws_handshake {char const* opening_hs; char const* host; char const* origin; char const* key; char const* upgrade; char const* conn; char const* version; char const* protocol; char const* uri; size_t host_len; size_t origin_len; size_t key_len; size_t upgrade_len; size_t conn_len; size_t version_len; size_t protocol_len; size_t uri_len; char const* extensions; size_t extensions_len; void* response_code; TYPE_3__* pipebase; } ;
struct TYPE_8__ {char* ws_sp; scalar_t__ server; } ;
struct TYPE_7__ {TYPE_2__* sock; } ;
struct TYPE_6__ {TYPE_1__* socktype; } ;
struct TYPE_5__ {scalar_t__ protocol; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 TYPE_4__* VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char const*,char,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int ) ;
 char const* FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*,char const**,int,int ) ;
 int FUNC_5 (char*,char const**,int,int,char const**,size_t*) ;
 int FUNC_6 (char*,char const*,size_t,int) ;
 scalar_t__ FUNC_7 (char const*) ;
 int FUNC_8 (char const*,int ) ;

__attribute__((used)) static int FUNC_9 (struct nn_ws_handshake *VAR_15)
{






    int VAR_16;
    const char *VAR_17;
    unsigned VAR_18;



    FUNC_1 (FUNC_0 (VAR_15->opening_hs, '\0', sizeof (VAR_15->opening_hs)));



    FUNC_1 (FUNC_7 (VAR_15->opening_hs) < sizeof (VAR_15->opening_hs));

    VAR_17 = VAR_15->opening_hs;


    if (!FUNC_8 (VAR_17, VAR_13))
        return VAR_4;

    VAR_15->host = ((void*)0);
    VAR_15->origin = ((void*)0);
    VAR_15->key = ((void*)0);
    VAR_15->upgrade = ((void*)0);
    VAR_15->conn = ((void*)0);
    VAR_15->version = ((void*)0);
    VAR_15->protocol = ((void*)0);
    VAR_15->uri = ((void*)0);

    VAR_15->host_len = 0;
    VAR_15->origin_len = 0;
    VAR_15->key_len = 0;
    VAR_15->upgrade_len = 0;
    VAR_15->conn_len = 0;
    VAR_15->version_len = 0;
    VAR_15->protocol_len = 0;
    VAR_15->uri_len = 0;
    VAR_15->response_code = VAR_6;



    if (!FUNC_4 ("GET\x20", &VAR_17, 0, 0))
        return VAR_2;


    if (!FUNC_5 ("\x20", &VAR_17, 0, 0, &VAR_15->uri, &VAR_15->uri_len))
        return VAR_2;


    if (!FUNC_4 ("HTTP/1.1", &VAR_17, 0, 0))
        return VAR_2;

    if (!FUNC_4 (VAR_0, &VAR_17, 0, 0))
        return VAR_2;



    while (FUNC_7 (VAR_17))
    {
        const char *VAR_19 = ((void*)0);
        size_t VAR_20 = 0;
        if (FUNC_4 ("Host:", &VAR_17, 1, 0)) {
            VAR_16 = FUNC_5 (VAR_0, &VAR_17, 1, 1,
                &VAR_15->host, &VAR_15->host_len);
        }
        else if (FUNC_4 ("Origin:",
            &VAR_17, 1, 0) == VAR_3) {
            VAR_16 = FUNC_5 (VAR_0, &VAR_17, 1, 1,
                &VAR_15->origin, &VAR_15->origin_len);
        }
        else if (FUNC_4 ("Sec-WebSocket-Key:",
            &VAR_17, 1, 0) == VAR_3) {
            VAR_16 = FUNC_5 (VAR_0, &VAR_17, 1, 1,
                &VAR_15->key, &VAR_15->key_len);
        }
        else if (FUNC_4 ("Upgrade:",
            &VAR_17, 1, 0) == VAR_3) {
            VAR_16 = FUNC_5 (VAR_0, &VAR_17, 1, 1,
                &VAR_15->upgrade, &VAR_15->upgrade_len);
        }
        else if (FUNC_4 ("Connection:",
            &VAR_17, 1, 0) == VAR_3) {

            VAR_16 = FUNC_5 (VAR_0, &VAR_17, 1, 1, &VAR_19, &VAR_20);







            VAR_15->conn = FUNC_3 (VAR_19, "upgrade");
            if (VAR_15->conn != ((void*)0)) {
                VAR_15->conn_len = FUNC_7 ("upgrade");
            }
        }
        else if (FUNC_4 ("Sec-WebSocket-Version:",
            &VAR_17, 1, 0) == VAR_3) {
            VAR_16 = FUNC_5 (VAR_0, &VAR_17, 1, 1,
                &VAR_15->version, &VAR_15->version_len);
        }
        else if (FUNC_4 ("Sec-WebSocket-Protocol:",
            &VAR_17, 1, 0) == VAR_3) {
            VAR_16 = FUNC_5 (VAR_0, &VAR_17, 1, 1,
                &VAR_15->protocol, &VAR_15->protocol_len);
        }
        else if (FUNC_4 ("Sec-WebSocket-Extensions:",
            &VAR_17, 1, 0) == VAR_3) {
            VAR_16 = FUNC_5 (VAR_0, &VAR_17, 1, 1,
                &VAR_15->extensions, &VAR_15->extensions_len);
        }
        else if (FUNC_4 (VAR_0,
            &VAR_17, 1, 0) == VAR_3) {

            break;
        }
        else {

            VAR_16 = FUNC_5 (VAR_0, &VAR_17, 1, 1,
                ((void*)0), ((void*)0));
        }

        if (VAR_16 != VAR_3)
            return VAR_2;
    }





    FUNC_1 (FUNC_7 (VAR_17) == 0);






    if (!VAR_15->host || !VAR_15->upgrade || !VAR_15->conn ||
        !VAR_15->key || !VAR_15->version) {
        VAR_15->response_code = VAR_9;
        return VAR_2;
    }


    if (FUNC_6 ("13", VAR_15->version,
        VAR_15->version_len, 1) != VAR_3) {
        VAR_15->response_code = VAR_10;
        return VAR_2;
    }


    if (FUNC_6 ("websocket", VAR_15->upgrade,
        VAR_15->upgrade_len, 1) != VAR_3) {
        VAR_15->response_code = VAR_9;
        return VAR_2;
    }


    if (FUNC_6 ("Upgrade", VAR_15->conn,
        VAR_15->conn_len, 1) != VAR_3) {
        VAR_15->response_code = VAR_9;
        return VAR_2;
    }



    if (VAR_15->protocol) {

        for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
            if (FUNC_6 (VAR_11 [VAR_18].ws_sp,
                VAR_15->protocol, VAR_15->protocol_len, 1)) {

                if (VAR_15->pipebase->sock->socktype->protocol ==
                    VAR_11 [VAR_18].server) {
                    VAR_15->response_code = VAR_7;
                    return VAR_14;
                }
                else {
                    VAR_15->response_code = VAR_5;
                    return VAR_2;
                }
                break;
            }
        }

        VAR_15->response_code = VAR_8;
        return VAR_2;
    }
    else {







        if (FUNC_2 (VAR_15->pipebase, VAR_1)) {
            VAR_15->response_code = VAR_7;
            return VAR_14;
        }
        else {
            VAR_15->response_code = VAR_5;
            return VAR_2;
        }
    }
}
