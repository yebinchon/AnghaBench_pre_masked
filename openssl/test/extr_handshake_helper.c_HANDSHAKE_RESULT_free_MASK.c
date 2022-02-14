
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* cipher; int client_ca_names; int server_ca_names; struct TYPE_4__* result_session_ticket_app_data; struct TYPE_4__* server_alpn_negotiated; struct TYPE_4__* client_alpn_negotiated; struct TYPE_4__* server_npn_negotiated; struct TYPE_4__* client_npn_negotiated; } ;
typedef TYPE_1__ HANDSHAKE_RESULT ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(HANDSHAKE_RESULT *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;
    FUNC_0(VAR_1->client_npn_negotiated);
    FUNC_0(VAR_1->server_npn_negotiated);
    FUNC_0(VAR_1->client_alpn_negotiated);
    FUNC_0(VAR_1->server_alpn_negotiated);
    FUNC_0(VAR_1->result_session_ticket_app_data);
    FUNC_1(VAR_1->server_ca_names, VAR_0);
    FUNC_1(VAR_1->client_ca_names, VAR_0);
    FUNC_0(VAR_1->cipher);
    FUNC_0(VAR_1);
}
