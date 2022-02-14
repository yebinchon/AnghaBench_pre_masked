
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ws_handshake {char const* response; char* expected_accept_key; int accept_key_len; int * accept_key; int conn_len; int * conn; int upgrade_len; int * upgrade; int status_code_len; int * status_code; int extensions_len; int * extensions; int protocol_len; int * protocol; int version_len; int * version; int server_len; int * server; int reason_phrase_len; int * reason_phrase; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,char,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const**,int,int ) ;
 int FUNC_3 (char*,char const**,int,int,int **,int *) ;
 int FUNC_4 (char*,int *,int ,int) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*,int ) ;

__attribute__((used)) static int FUNC_7 (struct nn_ws_handshake *VAR_6)
{






    int VAR_7;
    const char *VAR_8;




    FUNC_1 (FUNC_0 (VAR_6->response, '\0', sizeof (VAR_6->response)));



    FUNC_1 (FUNC_5 (VAR_6->response) < sizeof (VAR_6->response));

    VAR_8 = VAR_6->response;


    if (!FUNC_6 (VAR_8, VAR_4))
        return VAR_3;

    VAR_6->status_code = ((void*)0);
    VAR_6->reason_phrase = ((void*)0);
    VAR_6->server = ((void*)0);
    VAR_6->accept_key = ((void*)0);
    VAR_6->upgrade = ((void*)0);
    VAR_6->conn = ((void*)0);
    VAR_6->version = ((void*)0);
    VAR_6->protocol = ((void*)0);

    VAR_6->status_code_len = 0;
    VAR_6->reason_phrase_len = 0;
    VAR_6->server_len = 0;
    VAR_6->accept_key_len = 0;
    VAR_6->upgrade_len = 0;
    VAR_6->conn_len = 0;
    VAR_6->version_len = 0;
    VAR_6->protocol_len = 0;


    if (!FUNC_2 ("HTTP/1.1\x20", &VAR_8, 0, 0))
        return VAR_3;


    if (!FUNC_3 ("\x20", &VAR_8, 0, 0, &VAR_6->status_code,
        &VAR_6->status_code_len))
        return VAR_3;


    if (!FUNC_3 (VAR_0, &VAR_8, 0, 0,
        &VAR_6->reason_phrase, &VAR_6->reason_phrase_len))
        return VAR_3;



    while (FUNC_5 (VAR_8))
    {
        if (FUNC_2 ("Server:", &VAR_8, 1, 0)) {
            VAR_7 = FUNC_3 (VAR_0, &VAR_8, 1, 1,
                &VAR_6->server, &VAR_6->server_len);
        }
        else if (FUNC_2 ("Sec-WebSocket-Accept:",
            &VAR_8, 1, 0) == VAR_2) {
            VAR_7 = FUNC_3 (VAR_0, &VAR_8, 1, 1,
                &VAR_6->accept_key, &VAR_6->accept_key_len);
        }
        else if (FUNC_2 ("Upgrade:",
            &VAR_8, 1, 0) == VAR_2) {
            VAR_7 = FUNC_3 (VAR_0, &VAR_8, 1, 1,
                &VAR_6->upgrade, &VAR_6->upgrade_len);
        }
        else if (FUNC_2 ("Connection:",
            &VAR_8, 1, 0) == VAR_2) {
            VAR_7 = FUNC_3 (VAR_0, &VAR_8, 1, 1,
                &VAR_6->conn, &VAR_6->conn_len);
        }
        else if (FUNC_2 ("Sec-WebSocket-Version-Server:",
            &VAR_8, 1, 0) == VAR_2) {
            VAR_7 = FUNC_3 (VAR_0, &VAR_8, 1, 1,
                &VAR_6->version, &VAR_6->version_len);
        }
        else if (FUNC_2 ("Sec-WebSocket-Protocol-Server:",
            &VAR_8, 1, 0) == VAR_2) {
            VAR_7 = FUNC_3 (VAR_0, &VAR_8, 1, 1,
                &VAR_6->protocol, &VAR_6->protocol_len);
        }
        else if (FUNC_2 ("Sec-WebSocket-Extensions:",
            &VAR_8, 1, 0) == VAR_2) {
            VAR_7 = FUNC_3 (VAR_0, &VAR_8, 1, 1,
                &VAR_6->extensions, &VAR_6->extensions_len);
        }
        else if (FUNC_2 (VAR_0,
            &VAR_8, 1, 0) == VAR_2) {

            break;
        }
        else {

            VAR_7 = FUNC_3 (VAR_0, &VAR_8, 1, 1,
                ((void*)0), ((void*)0));
        }

        if (VAR_7 != VAR_2)
            return VAR_3;
    }





    FUNC_1 (FUNC_5 (VAR_8) == 0);






    if (!VAR_6->status_code || !VAR_6->upgrade || !VAR_6->conn ||
        !VAR_6->accept_key)
        return VAR_1;




    if (FUNC_4 ("101", VAR_6->status_code,
        VAR_6->status_code_len, 1) != VAR_2)
        return VAR_1;


    if (FUNC_4 ("websocket", VAR_6->upgrade,
        VAR_6->upgrade_len, 1) != VAR_2)
        return VAR_1;


    if (FUNC_4 ("Upgrade", VAR_6->conn,
        VAR_6->conn_len, 1) != VAR_2)
        return VAR_1;


    if (FUNC_4 (VAR_6->expected_accept_key, VAR_6->accept_key,
        VAR_6->accept_key_len, 1) != VAR_2)
        return VAR_1;


    return VAR_5;
}
