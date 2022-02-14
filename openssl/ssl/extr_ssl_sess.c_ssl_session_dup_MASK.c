
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int * alpn_selected; scalar_t__ alpn_selected_len; scalar_t__ ticklen; scalar_t__ tick_lifetime_hint; int * tick; int * hostname; } ;
struct TYPE_11__ {int references; int * ticket_appdata; scalar_t__ ticket_appdata_len; int * srp_username; TYPE_1__ ext; int ex_data; int * psk_identity; int * psk_identity_hint; int * peer_chain; int * peer; int * lock; int * next; int * prev; } ;
typedef TYPE_2__ SSL_SESSION ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,TYPE_2__*,int *) ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int) ;
 void* FUNC_4 (int *,scalar_t__) ;
 void* FUNC_5 (int *) ;
 int VAR_2 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int ,int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_2__*,TYPE_2__ const*,int) ;
 int FUNC_11 (int *,int ,int) ;

SSL_SESSION *FUNC_12(const SSL_SESSION *VAR_3, int VAR_4)
{
    SSL_SESSION *VAR_5;

    VAR_5 = FUNC_3(sizeof(*VAR_3));
    if (VAR_5 == ((void*)0)) {
        goto err;
    }
    FUNC_10(VAR_5, VAR_3, sizeof(*VAR_5));






    VAR_5->psk_identity_hint = ((void*)0);
    VAR_5->psk_identity = ((void*)0);

    VAR_5->ext.hostname = ((void*)0);
    VAR_5->ext.tick = ((void*)0);
    VAR_5->ext.alpn_selected = ((void*)0);

    VAR_5->srp_username = ((void*)0);

    VAR_5->peer_chain = ((void*)0);
    VAR_5->peer = ((void*)0);
    VAR_5->ticket_appdata = ((void*)0);
    FUNC_11(&VAR_5->ex_data, 0, sizeof(VAR_5->ex_data));


    VAR_5->prev = ((void*)0);
    VAR_5->next = ((void*)0);

    VAR_5->references = 1;

    VAR_5->lock = FUNC_0();
    if (VAR_5->lock == ((void*)0))
        goto err;

    if (!FUNC_2(VAR_0, VAR_5, &VAR_5->ex_data))
        goto err;

    if (VAR_3->peer != ((void*)0)) {
        if (!FUNC_9(VAR_3->peer))
            goto err;
        VAR_5->peer = VAR_3->peer;
    }

    if (VAR_3->peer_chain != ((void*)0)) {
        VAR_5->peer_chain = FUNC_8(VAR_3->peer_chain);
        if (VAR_5->peer_chain == ((void*)0))
            goto err;
    }

    if (VAR_3->psk_identity_hint) {
        VAR_5->psk_identity_hint = FUNC_5(VAR_3->psk_identity_hint);
        if (VAR_5->psk_identity_hint == ((void*)0)) {
            goto err;
        }
    }
    if (VAR_3->psk_identity) {
        VAR_5->psk_identity = FUNC_5(VAR_3->psk_identity);
        if (VAR_5->psk_identity == ((void*)0)) {
            goto err;
        }
    }


    if (!FUNC_1(VAR_0,
                            &VAR_5->ex_data, &VAR_3->ex_data)) {
        goto err;
    }

    if (VAR_3->ext.hostname) {
        VAR_5->ext.hostname = FUNC_5(VAR_3->ext.hostname);
        if (VAR_5->ext.hostname == ((void*)0)) {
            goto err;
        }
    }

    if (VAR_4 != 0 && VAR_3->ext.tick != ((void*)0)) {
        VAR_5->ext.tick =
            FUNC_4(VAR_3->ext.tick, VAR_3->ext.ticklen);
        if (VAR_5->ext.tick == ((void*)0))
            goto err;
    } else {
        VAR_5->ext.tick_lifetime_hint = 0;
        VAR_5->ext.ticklen = 0;
    }

    if (VAR_3->ext.alpn_selected != ((void*)0)) {
        VAR_5->ext.alpn_selected = FUNC_4(VAR_3->ext.alpn_selected,
                                                 VAR_3->ext.alpn_selected_len);
        if (VAR_5->ext.alpn_selected == ((void*)0))
            goto err;
    }


    if (VAR_3->srp_username) {
        VAR_5->srp_username = FUNC_5(VAR_3->srp_username);
        if (VAR_5->srp_username == ((void*)0)) {
            goto err;
        }
    }


    if (VAR_3->ticket_appdata != ((void*)0)) {
        VAR_5->ticket_appdata =
            FUNC_4(VAR_3->ticket_appdata, VAR_3->ticket_appdata_len);
        if (VAR_5->ticket_appdata == ((void*)0))
            goto err;
    }

    return VAR_5;
 err:
    FUNC_7(VAR_2, VAR_1);
    FUNC_6(VAR_5);
    return ((void*)0);
}
