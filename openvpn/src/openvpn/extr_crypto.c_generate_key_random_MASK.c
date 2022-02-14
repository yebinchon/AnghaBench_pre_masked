
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int cipher_length; int hmac_length; scalar_t__ digest; scalar_t__ cipher; } ;
struct key {int hmac; int cipher; } ;
struct gc_arena {int dummy; } ;


 int FUNC_0 (struct key) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct key*,struct key_type const*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct key*,struct key_type const*) ;
 int FUNC_4 (int ,int,int ,struct gc_arena*) ;
 int FUNC_5 (struct gc_arena*) ;
 struct gc_arena FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int) ;

void
FUNC_9(struct key *VAR_4, const struct key_type *VAR_5)
{
    int VAR_6 = VAR_1;
    int VAR_7 = VAR_2;

    struct gc_arena VAR_8 = FUNC_6();

    do
    {
        FUNC_0(*VAR_4);
        if (VAR_5)
        {
            if (VAR_5->cipher && VAR_5->cipher_length > 0 && VAR_5->cipher_length <= VAR_6)
            {
                VAR_6 = VAR_5->cipher_length;
            }

            if (VAR_5->digest && VAR_5->hmac_length > 0 && VAR_5->hmac_length <= VAR_7)
            {
                VAR_7 = VAR_5->hmac_length;
            }
        }
        if (!FUNC_8(VAR_4->cipher, VAR_6)
            || !FUNC_8(VAR_4->hmac, VAR_7))
        {
            FUNC_7(VAR_3, "ERROR: Random number generator cannot obtain entropy for key generation");
        }

        FUNC_2(VAR_0, "Cipher source entropy: %s", FUNC_4(VAR_4->cipher, VAR_6, 0, &VAR_8));
        FUNC_2(VAR_0, "HMAC source entropy: %s", FUNC_4(VAR_4->hmac, VAR_7, 0, &VAR_8));

        if (VAR_5)
        {
            FUNC_3(VAR_4, VAR_5);
        }
    } while (VAR_5 && !FUNC_1(VAR_4, VAR_5));

    FUNC_5(&VAR_8);
}
