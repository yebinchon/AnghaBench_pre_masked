
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * fsm; int src; } ;
struct nn_ws_handshake {int mode; char const* resource; char const* remote_host; int recv_len; int fsm; scalar_t__ retries; scalar_t__ recv_pos; int response; int opening_hs; struct nn_pipebase* pipebase; struct nn_usock* usock; TYPE_1__ usock_owner; } ;
struct nn_usock {int dummy; } ;
struct nn_pipebase {int dummy; } ;



 int VAR_0 ;

 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nn_usock*,TYPE_1__*) ;
 int FUNC_4 (char const*) ;

void FUNC_5 (struct nn_ws_handshake *VAR_1,
    struct nn_usock *VAR_2, struct nn_pipebase *VAR_3,
    int VAR_4, const char *VAR_5, const char *VAR_6)
{

    if (VAR_4 == 129)
        FUNC_1 (FUNC_4 (VAR_5) >= 1);


    FUNC_1 (VAR_1->usock == ((void*)0) && VAR_1->usock_owner.fsm == ((void*)0));
    VAR_1->usock_owner.src = VAR_0;
    VAR_1->usock_owner.fsm = &VAR_1->fsm;
    FUNC_3 (VAR_2, &VAR_1->usock_owner);
    VAR_1->usock = VAR_2;
    VAR_1->pipebase = VAR_3;
    VAR_1->mode = VAR_4;
    VAR_1->resource = VAR_5;
    VAR_1->remote_host = VAR_6;

    FUNC_0 (VAR_1->opening_hs, 0, sizeof (VAR_1->opening_hs));
    FUNC_0 (VAR_1->response, 0, sizeof (VAR_1->response));

    VAR_1->recv_pos = 0;
    VAR_1->retries = 0;




    switch (VAR_1->mode) {
    case 128:
        VAR_1->recv_len = FUNC_4 (
            "GET x HTTP/1.1\r\n"
            "Upgrade: websocket\r\n"
            "Connection: Upgrade\r\n"
            "Host: x\r\n"
            "Origin: x\r\n"
            "Sec-WebSocket-Key: xxxxxxxxxxxxxxxxxxxxxxxx\r\n"
            "Sec-WebSocket-Version: xx\r\n\r\n");
        break;
    case 129:

        VAR_1->recv_len = FUNC_4 ("HTTP/1.1 xxx\r\n\r\n");
        break;
    default:

        FUNC_1 (0);
        break;
    }


    FUNC_2 (&VAR_1->fsm);
}
