
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct options {int management_flags; int ssl_flags; int tmp_dir; int chroot_dir; int client_config_dir; int tls_export_cert; int status_file; int writepid; int auth_user_pass_file; int management_user_pass; int key_pass_file; int packet_id_file; int shared_secret_file; int genkey_filename; TYPE_1__* connection_list; int crl_file; int pkcs12_file; int priv_key_file; int extra_certs_file; int cert_file; int ca_path; int ca_file; int dh_file; } ;
struct connection_entry {int tls_crypt_v2_file; int tls_crypt_file; int tls_auth_file; } ;
struct TYPE_2__ {int len; struct connection_entry** array; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int,int ,int,char*) ;
 int FUNC_2 (int ,int,int ,int,char*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct options *VAR_12)
{
    bool VAR_13 = 0;


    VAR_13 |= FUNC_1(VAR_2|VAR_4, VAR_12->dh_file, VAR_8, "--dh");
    VAR_13 |= FUNC_1(VAR_2|VAR_4, VAR_12->ca_file, VAR_8, "--ca");
    VAR_13 |= FUNC_2(VAR_12->chroot_dir, VAR_2, VAR_12->ca_path, VAR_8, "--capath");
    VAR_13 |= FUNC_1(VAR_2|VAR_4, VAR_12->cert_file, VAR_8, "--cert");
    VAR_13 |= FUNC_1(VAR_2|VAR_4, VAR_12->extra_certs_file, VAR_8,
                              "--extra-certs");



    {
        VAR_13 |= FUNC_1(VAR_2|VAR_4|VAR_5,
                                  VAR_12->priv_key_file, VAR_8, "--key");
    }
    VAR_13 |= FUNC_1(VAR_2|VAR_4|VAR_5,
                              VAR_12->pkcs12_file, VAR_8, "--pkcs12");

    if (VAR_12->ssl_flags & VAR_9)
    {
        VAR_13 |= FUNC_2(VAR_12->chroot_dir, VAR_2, VAR_12->crl_file, VAR_8|VAR_11,
                                         "--crl-verify directory");
    }
    else
    {
        VAR_13 |= FUNC_2(VAR_12->chroot_dir, VAR_2|VAR_4,
                                         VAR_12->crl_file, VAR_8, "--crl-verify");
    }

    FUNC_0(VAR_12->connection_list);
    for (int VAR_14 = 0; VAR_14 < VAR_12->connection_list->len; ++VAR_14)
    {
        struct connection_entry *VAR_15 = VAR_12->connection_list->array[VAR_14];

        VAR_13 |= FUNC_1(VAR_2|VAR_4|VAR_5,
                                  VAR_15->tls_auth_file, VAR_8, "--tls-auth");

        VAR_13 |= FUNC_1(VAR_2|VAR_4|VAR_5,
                                  VAR_15->tls_crypt_file, VAR_8, "--tls-crypt");

        VAR_13 |= FUNC_1(VAR_2|VAR_4|VAR_5,
                                  VAR_15->tls_crypt_v2_file, VAR_8,
                                  "--tls-crypt-v2");
    }

    VAR_13 |= FUNC_1(VAR_2|VAR_4|VAR_5,
                              VAR_12->genkey_filename, VAR_8,
                              "--genkey");
    VAR_13 |= FUNC_1(VAR_2|VAR_4|VAR_5,
                              VAR_12->shared_secret_file, VAR_8, "--secret");

    VAR_13 |= FUNC_1(VAR_1|VAR_3,
                              VAR_12->packet_id_file, VAR_8|VAR_10, "--replay-persist");


    VAR_13 |= FUNC_1(VAR_2|VAR_0|VAR_5,
                              VAR_12->key_pass_file, VAR_8, "--askpass");
    VAR_13 |= FUNC_1(VAR_2, VAR_12->chroot_dir,
                              VAR_8|VAR_11, "--chroot directory");
    VAR_13 |= FUNC_1(VAR_1|VAR_3, VAR_12->writepid,
                              VAR_8|VAR_10, "--writepid");


    VAR_13 |= FUNC_1(VAR_1|VAR_3, VAR_12->status_file,
                              VAR_8|VAR_10, "--status");


    VAR_13 |= FUNC_2(VAR_12->chroot_dir, VAR_2, VAR_12->tls_export_cert,
                                     VAR_8|VAR_10|VAR_11, "--tls-export-cert");
    if (VAR_13)
    {
        FUNC_3(VAR_7, "Please correct these errors.");
    }
}
