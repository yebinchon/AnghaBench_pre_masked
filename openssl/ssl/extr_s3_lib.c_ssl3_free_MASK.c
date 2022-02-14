
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int peer_cert_sigalgs; int peer_sigalgs; int pmslen; int pms; int ciphers_raw; int peer_ca_names; int ctype; int * pkey; } ;
struct TYPE_10__ {int alpn_proposed; int alpn_selected; TYPE_1__ tmp; int * peer_tmp; } ;
struct TYPE_9__ {TYPE_6__ s3; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_6__*,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

void FUNC_8(SSL *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;

    FUNC_6(VAR_1);


    FUNC_0(VAR_1->s3.peer_tmp);
    VAR_1->s3.peer_tmp = ((void*)0);
    FUNC_0(VAR_1->s3.tmp.pkey);
    VAR_1->s3.tmp.pkey = ((void*)0);


    FUNC_2(VAR_1->s3.tmp.ctype);
    FUNC_5(VAR_1->s3.tmp.peer_ca_names, VAR_0);
    FUNC_2(VAR_1->s3.tmp.ciphers_raw);
    FUNC_1(VAR_1->s3.tmp.pms, VAR_1->s3.tmp.pmslen);
    FUNC_2(VAR_1->s3.tmp.peer_sigalgs);
    FUNC_2(VAR_1->s3.tmp.peer_cert_sigalgs);
    FUNC_7(VAR_1);
    FUNC_2(VAR_1->s3.alpn_selected);
    FUNC_2(VAR_1->s3.alpn_proposed);


    FUNC_3(VAR_1);

    FUNC_4(&VAR_1->s3, 0, sizeof(VAR_1->s3));
}
