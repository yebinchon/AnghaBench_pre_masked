
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tls_session {TYPE_3__* opt; struct key_state* key; } ;
struct TYPE_4__ {int encrypt; } ;
struct TYPE_5__ {TYPE_1__ key_ctx_bi; } ;
struct key_state {TYPE_2__ crypto_options; } ;
struct key {int dummy; } ;
struct buffer {int dummy; } ;
typedef int key ;
struct TYPE_6__ {int key_method; int key_type; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct buffer*,int ) ;
 int FUNC_2 (struct buffer*,char const*,int const) ;
 int FUNC_3 (struct key*,int *) ;
 int FUNC_4 (struct key*,int *) ;
 int FUNC_5 (int *,struct key*,int *,int ,char*) ;
 char* FUNC_6 (struct tls_session*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct key*,int) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct key*,int *,struct buffer*) ;

__attribute__((used)) static bool
FUNC_11(struct buffer *VAR_3, struct tls_session *VAR_4)
{
    struct key VAR_5;
    struct key_state *VAR_6 = &VAR_4->key[VAR_1];

    FUNC_0(VAR_4->opt->key_method == 1);
    FUNC_0(FUNC_1(VAR_3, 0));

    FUNC_4(&VAR_5, &VAR_4->opt->key_type);
    if (!FUNC_3(&VAR_5, &VAR_4->opt->key_type))
    {
        FUNC_7(VAR_0, "TLS Error: Bad encrypting key generated");
        return 0;
    }

    if (!FUNC_10(&VAR_5, &VAR_4->opt->key_type, VAR_3))
    {
        FUNC_7(VAR_0, "TLS Error: write_key failed");
        return 0;
    }

    FUNC_5(&VAR_6->crypto_options.key_ctx_bi.encrypt, &VAR_5,
                 &VAR_4->opt->key_type, VAR_2,
                 "Data Channel Encrypt");
    FUNC_8(&VAR_5, sizeof(VAR_5));


    {
        const char *VAR_7 = FUNC_6(VAR_4);
        const int VAR_8 = FUNC_9(VAR_7) + 1;
        if (!FUNC_2(VAR_3, VAR_7, VAR_8))
        {
            FUNC_7(VAR_0, "TLS Error: KM1 write options failed");
            return 0;
        }
    }

    return 1;
}
