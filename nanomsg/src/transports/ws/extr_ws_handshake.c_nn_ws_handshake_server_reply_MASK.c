
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_ws_handshake {char* response; int response_code; int protocol_len; int version_len; int usock; int version; int protocol; int key_len; int key; } ;
struct nn_iovec {int iov_len; char** iov_base; } ;
typedef int accept_key ;


 int VAR_0 ;


 int VAR_1 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int) ;
 char* FUNC_2 (int,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,struct nn_iovec*,int) ;
 int FUNC_6 (int ,int ,char*,int) ;
 int FUNC_7 (char*,char*,char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int) ;

__attribute__((used)) static void FUNC_10 (struct nn_ws_handshake *VAR_2)
{
    struct nn_iovec VAR_3;
    char *VAR_4;
    char *VAR_5;
    char *VAR_6;
    int VAR_7;


    char VAR_8 [VAR_0 + 1];

    FUNC_1 (VAR_2->response, 0, sizeof (VAR_2->response));

    if (VAR_2->response_code == VAR_1) {


        VAR_7 = FUNC_6 (VAR_2->key, VAR_2->key_len,
            VAR_8, sizeof (VAR_8));
        FUNC_3 (VAR_7 >= 0);

        FUNC_3 (FUNC_8 (VAR_8) == VAR_0);

        VAR_6 = FUNC_2 (VAR_2->protocol_len + 1, "WebSocket protocol");
        FUNC_0 (VAR_6);
        FUNC_9 (VAR_6, VAR_2->protocol, VAR_2->protocol_len);
        VAR_6 [VAR_2->protocol_len] = '\0';

        FUNC_7 (VAR_2->response,
            "HTTP/1.1 101 Switching Protocols\r\n"
            "Upgrade: websocket\r\n"
            "Connection: Upgrade\r\n"
            "Sec-WebSocket-Accept: %s\r\n"
            "Sec-WebSocket-Protocol: %s\r\n\r\n",
            VAR_8, VAR_6);

        FUNC_4 (VAR_6);
    }
    else {

        switch (VAR_2->response_code) {
        case 131:
            VAR_4 = "400 Opening Handshake Too Long";
            break;
        case 129:
            VAR_4 = "400 Cannot Have Body";
            break;
        case 128:
            VAR_4 = "400 Unsupported WebSocket Version";
            break;
        case 133:
            VAR_4 = "400 Missing nanomsg Required Headers";
            break;
        case 132:
            VAR_4 = "400 Incompatible Socket Type";
            break;
        case 130:
            VAR_4 = "400 Unrecognized Socket Type";
            break;
        default:

            FUNC_3 (0);
            break;
        }

        VAR_5 = FUNC_2 (VAR_2->version_len + 1, "WebSocket version");
        FUNC_0 (VAR_5);
        FUNC_9 (VAR_5, VAR_2->version, VAR_2->version_len);
        VAR_5 [VAR_2->version_len] = '\0';


        FUNC_7 (VAR_2->response,
            "HTTP/1.1 %s\r\n"
            "Sec-WebSocket-Version: %s\r\n",
            VAR_4, VAR_5);

        FUNC_4 (VAR_5);
    }

    VAR_3.iov_len = FUNC_8 (VAR_2->response);
    VAR_3.iov_base = &VAR_2->response;

    FUNC_5 (VAR_2->usock, &VAR_3, 1);

    return;
}
