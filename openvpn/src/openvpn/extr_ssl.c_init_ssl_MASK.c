
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_root_ctx {int dummy; } ;
struct options {int ssl_flags; int management_flags; char* cert_file_inline; int ecdh_curve; int tls_server; int crl_file_inline; int crl_file; int extra_certs_file_inline; int extra_certs_file; int ca_path; int ca_file_inline; scalar_t__ ca_file; int priv_key_file_inline; int priv_key_file; int cert_file; int management_certificate; int cryptoapi_cert; int pkcs11_id; int pkcs11_id_management; scalar_t__* pkcs11_providers; int pkcs12_file_inline; int pkcs12_file; int cipher_list_tls13; int cipher_list; int tls_cert_profile; int dh_file_inline; int dh_file; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 char* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (struct tls_root_ctx*) ;
 int FUNC_6 (struct tls_root_ctx*) ;
 int FUNC_7 (struct tls_root_ctx*) ;
 int FUNC_8 (struct tls_root_ctx*,scalar_t__,int ,int ,int ) ;
 int FUNC_9 (struct tls_root_ctx*,int ,char*) ;
 int FUNC_10 (struct tls_root_ctx*,int ) ;
 int FUNC_11 (struct tls_root_ctx*,int ,int ) ;
 int FUNC_12 (struct tls_root_ctx*,int ) ;
 int FUNC_13 (struct tls_root_ctx*,int ,int ) ;
 scalar_t__ FUNC_14 (struct tls_root_ctx*,int ,int ,int) ;
 scalar_t__ FUNC_15 (struct tls_root_ctx*,int ,int ) ;
 int FUNC_16 (struct tls_root_ctx*) ;
 int FUNC_17 (struct tls_root_ctx*,int ,int ) ;
 int FUNC_18 (struct tls_root_ctx*,int ) ;
 int FUNC_19 (struct tls_root_ctx*,int ) ;
 int FUNC_20 (struct tls_root_ctx*) ;
 int FUNC_21 (struct tls_root_ctx*,int ) ;
 int FUNC_22 (struct tls_root_ctx*,int) ;
 scalar_t__ FUNC_23 (struct tls_root_ctx*) ;
 int FUNC_24 (struct tls_root_ctx*,int ,int ) ;

void
FUNC_25(const struct options *VAR_6, struct tls_root_ctx *VAR_7)
{
    FUNC_0(((void*)0) != VAR_7);

    FUNC_4();

    if (VAR_6->tls_server)
    {
        FUNC_20(VAR_7);

        if (VAR_6->dh_file)
        {
            FUNC_11(VAR_7, VAR_6->dh_file,
                                   VAR_6->dh_file_inline);
        }
    }
    else
    {
        FUNC_6(VAR_7);
    }


    FUNC_21(VAR_7, VAR_6->tls_cert_profile);




    FUNC_18(VAR_7, VAR_6->cipher_list);
    FUNC_19(VAR_7, VAR_6->cipher_list_tls13);

    if (!FUNC_22(VAR_7, VAR_6->ssl_flags))
    {
        goto err;
    }

    if (VAR_6->pkcs12_file)
    {
        if (0 != FUNC_14(VAR_7, VAR_6->pkcs12_file,
                                     VAR_6->pkcs12_file_inline, !VAR_6->ca_file))
        {
            goto err;
        }
    }
    else if (VAR_6->cert_file)
    {
        FUNC_9(VAR_7, VAR_6->cert_file, VAR_6->cert_file_inline);
    }

    if (VAR_6->priv_key_file)
    {
        if (0 != FUNC_15(VAR_7, VAR_6->priv_key_file,
                                        VAR_6->priv_key_file_inline))
        {
            goto err;
        }
    }
    if (VAR_6->ca_file || VAR_6->ca_path)
    {
        FUNC_8(VAR_7, VAR_6->ca_file, VAR_6->ca_file_inline,
                        VAR_6->ca_path, VAR_6->tls_server);
    }



    if (VAR_6->extra_certs_file)
    {
        FUNC_13(VAR_7, VAR_6->extra_certs_file, VAR_6->extra_certs_file_inline);
    }


    FUNC_5(VAR_7);


    if (VAR_6->crl_file && !(VAR_6->ssl_flags & VAR_4))
    {
        FUNC_17(VAR_7, VAR_6->crl_file, VAR_6->crl_file_inline);
    }


    if (VAR_6->tls_server)
    {
        FUNC_12(VAR_7, VAR_6->ecdh_curve);
    }






    FUNC_4();
    return;

err:
    FUNC_4();
    FUNC_7(VAR_7);
    return;
}
