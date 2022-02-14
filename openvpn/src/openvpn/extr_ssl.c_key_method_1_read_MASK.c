
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tls_session {TYPE_3__* opt; int verified; struct key_state* key; } ;
struct TYPE_4__ {int decrypt; } ;
struct TYPE_5__ {TYPE_1__ key_ctx_bi; } ;
struct key_state {int authenticated; TYPE_2__ crypto_options; } ;
struct key {int dummy; } ;
struct buffer {int len; } ;
typedef int key ;
struct TYPE_6__ {int key_method; int key_type; int remote_options; int disable_occ; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buffer*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct buffer*) ;
 int FUNC_3 (struct key*,int *) ;
 int FUNC_4 (int *,struct key*,int *,int ,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (struct key*,int *,struct buffer*) ;
 int FUNC_9 (struct key*,int) ;

__attribute__((used)) static bool
FUNC_10(struct buffer *VAR_3, struct tls_session *VAR_4)
{
    int VAR_5;
    struct key VAR_6;
    struct key_state *VAR_7 = &VAR_4->key[VAR_1];

    FUNC_0(VAR_4->opt->key_method == 1);

    if (!VAR_4->verified)
    {
        FUNC_5(VAR_0,
            "TLS Error: Certificate verification failed (key-method 1)");
        goto error;
    }

    VAR_5 = FUNC_8(&VAR_6, &VAR_4->opt->key_type, VAR_3);
    if (VAR_5 != 1)
    {
        FUNC_5(VAR_0,
            "TLS Error: Error reading data channel key from plaintext buffer");
        goto error;
    }

    if (!FUNC_3(&VAR_6, &VAR_4->opt->key_type))
    {
        FUNC_5(VAR_0, "TLS Error: Bad decrypting key received from peer");
        goto error;
    }

    if (VAR_3->len < 1)
    {
        FUNC_5(VAR_0, "TLS Error: Missing options string");
        goto error;
    }
    FUNC_2(VAR_3);

    FUNC_4(&VAR_7->crypto_options.key_ctx_bi.decrypt, &VAR_6,
                 &VAR_4->opt->key_type, VAR_2,
                 "Data Channel Decrypt");
    FUNC_9(&VAR_6, sizeof(VAR_6));
    VAR_7->authenticated = 1;
    return 1;

error:
    FUNC_2(VAR_3);
    FUNC_9(&VAR_6, sizeof(VAR_6));
    return 0;
}
