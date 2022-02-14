
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cipher; } ;
struct TYPE_4__ {TYPE_1__ encrypt; } ;
struct crypto_options {TYPE_2__ key_ctx_bi; } ;
struct buffer {scalar_t__ len; } ;
typedef int cipher_kt_t ;


 int * FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (struct buffer*,struct buffer,struct crypto_options*) ;
 int FUNC_3 (struct buffer*,struct buffer,struct crypto_options*) ;

void
FUNC_4(struct buffer *VAR_0, struct buffer VAR_1,
                struct crypto_options *VAR_2)
{
    if (VAR_0->len > 0 && VAR_2)
    {
        const cipher_kt_t *VAR_3 =
            FUNC_0(VAR_2->key_ctx_bi.encrypt.cipher);

        if (FUNC_1(VAR_3))
        {
            FUNC_2(VAR_0, VAR_1, VAR_2);
        }
        else
        {
            FUNC_3(VAR_0, VAR_1, VAR_2);
        }
    }
}
