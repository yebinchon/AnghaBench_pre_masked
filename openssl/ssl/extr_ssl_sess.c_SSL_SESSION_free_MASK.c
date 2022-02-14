
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int alpn_selected; int tick; int hostname; } ;
struct TYPE_8__ {int lock; int ticket_appdata; TYPE_1__ ext; int srp_username; int psk_identity; int psk_identity_hint; int peer_chain; int peer; int session_id; int master_key; int ex_data; int references; } ;
typedef TYPE_2__ SSL_SESSION ;


 int FUNC_0 (int *,int*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int (*) (int )) ;

void FUNC_10(SSL_SESSION *VAR_1)
{
    int VAR_2;

    if (VAR_1 == ((void*)0))
        return;
    FUNC_0(&VAR_1->references, &VAR_2, VAR_1->lock);
    FUNC_7("SSL_SESSION", VAR_1);
    if (VAR_2 > 0)
        return;
    FUNC_6(VAR_2 < 0);

    FUNC_2(VAR_0, VAR_1, &VAR_1->ex_data);

    FUNC_3(VAR_1->master_key, sizeof(VAR_1->master_key));
    FUNC_3(VAR_1->session_id, sizeof(VAR_1->session_id));
    FUNC_8(VAR_1->peer);
    FUNC_9(VAR_1->peer_chain, FUNC_8);
    FUNC_5(VAR_1->ext.hostname);
    FUNC_5(VAR_1->ext.tick);

    FUNC_5(VAR_1->psk_identity_hint);
    FUNC_5(VAR_1->psk_identity);


    FUNC_5(VAR_1->srp_username);

    FUNC_5(VAR_1->ext.alpn_selected);
    FUNC_5(VAR_1->ticket_appdata);
    FUNC_1(VAR_1->lock);
    FUNC_4(VAR_1, sizeof(*VAR_1));
}
