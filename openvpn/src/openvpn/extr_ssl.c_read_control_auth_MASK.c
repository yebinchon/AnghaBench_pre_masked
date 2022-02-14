
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {scalar_t__ cipher; } ;
struct tls_wrap_ctx {scalar_t__ mode; TYPE_1__ tls_crypt_v2_server_key; int opt; } ;
struct tls_options {int dummy; } ;
struct link_socket_actual {int dummy; } ;
struct gc_arena {int dummy; } ;
struct buffer {int offset; int len; } ;


 int FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (struct buffer*) ;
 int VAR_0 ;
 scalar_t__ const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 struct buffer FUNC_2 (int ,struct gc_arena*) ;
 int FUNC_3 (struct buffer*,scalar_t__) ;
 int FUNC_4 (struct buffer*) ;
 int FUNC_5 (struct buffer*,struct buffer*) ;
 int FUNC_6 (struct buffer*) ;
 int FUNC_7 (struct buffer*,int ) ;
 struct buffer FUNC_8 () ;
 int FUNC_9 (struct gc_arena*) ;
 struct gc_arena FUNC_10 () ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (struct buffer*,struct buffer,int *,int *,scalar_t__*) ;
 int FUNC_13 (struct link_socket_actual const*,struct gc_arena*) ;
 int FUNC_14 (struct buffer*,int *,int) ;
 int FUNC_15 (struct buffer*,struct buffer*,int *) ;
 int FUNC_16 (struct buffer*,struct tls_wrap_ctx*,struct tls_options const*) ;

__attribute__((used)) static bool
FUNC_17(struct buffer *VAR_7,
                  struct tls_wrap_ctx *VAR_8,
                  const struct link_socket_actual *VAR_9,
                  const struct tls_options *VAR_10)
{
    struct gc_arena VAR_11 = FUNC_10();
    bool VAR_12 = 0;

    const uint8_t VAR_13 = *(FUNC_1(VAR_7)) >> VAR_2;
    if (VAR_13 == VAR_1
        && !FUNC_16(VAR_7, VAR_8, VAR_10))
    {
        FUNC_11(VAR_0,
            "TLS Error: can not extract tls-crypt-v2 client key from %s",
            FUNC_13(VAR_9, &VAR_11));
        goto cleanup;
    }

    if (VAR_8->mode == VAR_4)
    {
        struct buffer VAR_14 = FUNC_8();


        if (!FUNC_14(VAR_7, &VAR_8->opt, 1))
        {
            FUNC_11(VAR_0,
                "TLS Error: cannot locate HMAC in incoming packet from %s",
                FUNC_13(VAR_9, &VAR_11));
            FUNC_9(&VAR_11);
            return 0;
        }



        FUNC_12(VAR_7, VAR_14, &VAR_8->opt, ((void*)0), FUNC_1(VAR_7));
        if (!VAR_7->len)
        {
            FUNC_11(VAR_0,
                "TLS Error: incoming packet authentication failed from %s",
                FUNC_13(VAR_9, &VAR_11));
            goto cleanup;
        }

    }
    else if (VAR_8->mode == VAR_5)
    {
        struct buffer VAR_15 = FUNC_2(FUNC_6(VAR_7), &VAR_11);
        if (!FUNC_15(VAR_7, &VAR_15, &VAR_8->opt))
        {
            FUNC_11(VAR_0, "TLS Error: tls-crypt unwrapping failed from %s",
                FUNC_13(VAR_9, &VAR_11));
            goto cleanup;
        }
        FUNC_0(FUNC_7(VAR_7, VAR_7->offset));
        FUNC_0(FUNC_5(VAR_7, &VAR_15));
        FUNC_4(&VAR_15);
    }
    else if (VAR_8->tls_crypt_v2_server_key.cipher)
    {

        FUNC_11(VAR_0, "TLS Error: could not determine wrapping from %s",
            FUNC_13(VAR_9, &VAR_11));





        goto cleanup;
    }

    if (VAR_8->mode == VAR_6 || VAR_8->mode == VAR_4)
    {


        FUNC_3(VAR_7, VAR_3 + 1);
    }

    VAR_12 = 1;
cleanup:
    FUNC_9(&VAR_11);
    return VAR_12;
}
