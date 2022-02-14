
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* resp; int ids; int exts; } ;
struct TYPE_15__ {TYPE_4__* npn; TYPE_4__* tls13_cookie; TYPE_4__* alpn; TYPE_1__ ocsp; TYPE_4__* scts; TYPE_4__* peer_supportedgroups; TYPE_4__* supportedgroups; TYPE_4__* peer_ecpointformats; TYPE_4__* ecpointformats; TYPE_4__* hostname; } ;
struct TYPE_16__ {int lock; int srtp_profiles; TYPE_3__ ext; int waitctx; int ctx; TYPE_2__* method; int verified_chain; int client_ca_names; int ca_names; int pha_dgst; struct TYPE_16__* pha_context; struct TYPE_16__* clienthello; int scts; int session_ctx; struct TYPE_16__* shared_sigalgs; int cert; struct TYPE_16__* psksession_id; int * psksession; int * session; int peer_ciphers; int tls13_ciphersuites; int cipher_list_by_id; int cipher_list; int init_buf; int * rbio; int * wbio; int rlayer; int ex_data; int dane; int param; int references; } ;
struct TYPE_14__ {int (* ssl_free ) (TYPE_4__*) ;} ;
typedef TYPE_4__ SSL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int*,int ) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,TYPE_4__*,int *) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,TYPE_4__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_14 (int ) ;
 int VAR_4 ;
 int FUNC_15 (TYPE_4__*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int ) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (int ,int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (TYPE_4__*) ;
 int FUNC_25 (TYPE_4__*) ;
 int FUNC_26 (TYPE_4__*) ;

void FUNC_27(SSL *VAR_5)
{
    int VAR_6;

    if (VAR_5 == ((void*)0))
        return;
    FUNC_3(&VAR_5->references, &VAR_6, VAR_5->lock);
    FUNC_10("SSL", VAR_5);
    if (VAR_6 > 0)
        return;
    FUNC_9(VAR_6 < 0);

    FUNC_14(VAR_5->param);
    FUNC_16(&VAR_5->dane);
    FUNC_5(VAR_0, VAR_5, &VAR_5->ex_data);

    FUNC_8(&VAR_5->rlayer);


    FUNC_25(VAR_5);

    FUNC_1(VAR_5->wbio);
    VAR_5->wbio = ((void*)0);
    FUNC_1(VAR_5->rbio);
    VAR_5->rbio = ((void*)0);

    FUNC_2(VAR_5->init_buf);


    FUNC_19(VAR_5->cipher_list);
    FUNC_19(VAR_5->cipher_list_by_id);
    FUNC_19(VAR_5->tls13_ciphersuites);
    FUNC_19(VAR_5->peer_ciphers);


    if (VAR_5->session != ((void*)0)) {
        FUNC_24(VAR_5);
        FUNC_13(VAR_5->session);
    }
    FUNC_13(VAR_5->psksession);
    FUNC_7(VAR_5->psksession_id);

    FUNC_15(VAR_5);

    FUNC_23(VAR_5->cert);
    FUNC_7(VAR_5->shared_sigalgs);


    FUNC_7(VAR_5->ext.hostname);
    FUNC_12(VAR_5->session_ctx);

    FUNC_7(VAR_5->ext.ecpointformats);
    FUNC_7(VAR_5->ext.peer_ecpointformats);

    FUNC_7(VAR_5->ext.supportedgroups);
    FUNC_7(VAR_5->ext.peer_supportedgroups);
    FUNC_20(VAR_5->ext.ocsp.exts, VAR_2);

    FUNC_17(VAR_5->ext.ocsp.ids, VAR_1);


    FUNC_11(VAR_5->scts);
    FUNC_7(VAR_5->ext.scts);

    FUNC_7(VAR_5->ext.ocsp.resp);
    FUNC_7(VAR_5->ext.alpn);
    FUNC_7(VAR_5->ext.tls13_cookie);
    FUNC_7(VAR_5->clienthello);
    FUNC_7(VAR_5->pha_context);
    FUNC_6(VAR_5->pha_dgst);

    FUNC_21(VAR_5->ca_names, VAR_3);
    FUNC_21(VAR_5->client_ca_names, VAR_3);

    FUNC_22(VAR_5->verified_chain, VAR_4);

    if (VAR_5->method != ((void*)0))
        VAR_5->method->ssl_free(VAR_5);

    FUNC_12(VAR_5->ctx);

    FUNC_0(VAR_5->waitctx);


    FUNC_7(VAR_5->ext.npn);



    FUNC_18(VAR_5->srtp_profiles);


    FUNC_4(VAR_5->lock);

    FUNC_7(VAR_5);
}
