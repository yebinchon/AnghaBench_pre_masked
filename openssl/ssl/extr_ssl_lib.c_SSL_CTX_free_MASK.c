
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int secure; TYPE_2__* alpn; TYPE_2__* supportedgroups; TYPE_2__* ecpointformats; } ;
struct TYPE_10__ {int lock; TYPE_1__ ext; int client_cert_engine; int srtp_profiles; int * comp_methods; int extra_certs; int client_ca_names; int ca_names; int cert; int tls13_ciphersuites; int cipher_list_by_id; int cipher_list; int ctlog_store; int cert_store; int * sessions; int ex_data; int dane; int param; int references; } ;
typedef TYPE_2__ SSL_CTX ;


 int FUNC_0 (int *,int*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_2 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;
 int FUNC_19 (int ) ;

void FUNC_20(SSL_CTX *VAR_3)
{
    int VAR_4;

    if (VAR_3 == ((void*)0))
        return;

    FUNC_0(&VAR_3->references, &VAR_4, VAR_3->lock);
    FUNC_8("SSL_CTX", VAR_3);
    if (VAR_4 > 0)
        return;
    FUNC_7(VAR_4 < 0);

    FUNC_12(VAR_3->param);
    FUNC_13(&VAR_3->dane);
    if (VAR_3->sessions != ((void*)0))
        FUNC_10(VAR_3, 0);

    FUNC_2(VAR_0, VAR_3, &VAR_3->ex_data);
    FUNC_14(VAR_3->sessions);
    FUNC_11(VAR_3->cert_store);

    FUNC_3(VAR_3->ctlog_store);

    FUNC_16(VAR_3->cipher_list);
    FUNC_16(VAR_3->cipher_list_by_id);
    FUNC_16(VAR_3->tls13_ciphersuites);
    FUNC_19(VAR_3->cert);
    FUNC_17(VAR_3->ca_names, VAR_1);
    FUNC_17(VAR_3->client_ca_names, VAR_1);
    FUNC_18(VAR_3->extra_certs, VAR_2);
    VAR_3->comp_methods = ((void*)0);

    FUNC_15(VAR_3->srtp_profiles);


    FUNC_9(VAR_3);


    FUNC_4(VAR_3->client_cert_engine);



    FUNC_5(VAR_3->ext.ecpointformats);

    FUNC_5(VAR_3->ext.supportedgroups);
    FUNC_5(VAR_3->ext.alpn);
    FUNC_6(VAR_3->ext.secure);

    FUNC_1(VAR_3->lock);

    FUNC_5(VAR_3);
}
