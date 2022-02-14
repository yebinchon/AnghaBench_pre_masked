
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tls_session {char* common_name; TYPE_1__* opt; struct cert_hash_set* cert_hash_set; struct key_state* key; } ;
struct tls_multi {char* locked_cn; scalar_t__ locked_cert_hash_set; } ;
struct key_state {int authenticated; } ;
struct gc_arena {int dummy; } ;
struct cert_hash_set {int dummy; } ;
struct TYPE_2__ {scalar_t__ client_config_dir_exclusive; } ;


 char* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct cert_hash_set const*,scalar_t__) ;
 int FUNC_1 (struct gc_arena*) ;
 struct gc_arena FUNC_2 () ;
 int FUNC_3 (int ,char*,char*,...) ;
 char* FUNC_4 (scalar_t__,char const*,struct gc_arena*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (struct tls_session*,char*) ;
 scalar_t__ FUNC_7 (char const*,char*) ;
 int FUNC_8 (struct tls_multi*) ;
 int FUNC_9 (struct tls_multi*) ;

void
FUNC_10(struct tls_multi *VAR_3, struct tls_session *VAR_4)
{
    struct key_state *VAR_5 = &VAR_4->key[VAR_2];


    if (!VAR_4->common_name)
    {
        FUNC_6(VAR_4, "");
    }


    if (VAR_5->authenticated && VAR_3->locked_cn)
    {
        const char *VAR_6 = VAR_4->common_name;
        if (VAR_6 && FUNC_7(VAR_6, VAR_3->locked_cn))
        {
            FUNC_3(VAR_1, "TLS Auth Error: TLS object CN attempted to change from '%s' to '%s' -- tunnel disabled",
                VAR_3->locked_cn,
                VAR_6);


            FUNC_6(VAR_4, VAR_3->locked_cn);
            FUNC_8(VAR_3);
        }
    }


    if (VAR_5->authenticated && VAR_3->locked_cert_hash_set)
    {
        const struct cert_hash_set *VAR_7 = VAR_4->cert_hash_set;
        if (VAR_7 && !FUNC_0(VAR_7, VAR_3->locked_cert_hash_set))
        {
            FUNC_3(VAR_1, "TLS Auth Error: TLS object CN=%s client-provided SSL certs unexpectedly changed during mid-session reauth",
                VAR_4->common_name);


            FUNC_8(VAR_3);
        }
    }


    if (VAR_5->authenticated && VAR_4->opt->client_config_dir_exclusive)
    {
        struct gc_arena VAR_8 = FUNC_2();

        const char *VAR_9 = VAR_4->common_name;
        const char *VAR_10 = FUNC_4(VAR_4->opt->client_config_dir_exclusive,
                                             VAR_9, &VAR_8);
        if (!VAR_9 || !FUNC_7(VAR_9, VAR_0) || !FUNC_5(VAR_10))
        {
            VAR_5->authenticated = 0;
            FUNC_9(VAR_3);
            FUNC_3(VAR_1, "TLS Auth Error: --client-config-dir authentication failed for common name '%s' file='%s'",
                VAR_4->common_name,
                VAR_10 ? VAR_10 : "UNDEF");
        }

        FUNC_1(&VAR_8);
    }
}
