
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_type {int cipher_length; int hmac_length; scalar_t__ digest; scalar_t__ cipher; } ;
struct key_ctx {int hmac; int cipher; } ;
struct key {int hmac; int cipher; } ;
struct gc_arena {int dummy; } ;


 int FUNC_0 (struct key_ctx) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,scalar_t__,int) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ,char*,char const*,int,...) ;
 int FUNC_8 (int ,int,int ,struct gc_arena*) ;
 int FUNC_9 (struct gc_arena*) ;
 struct gc_arena FUNC_10 () ;
 int FUNC_11 (int ,int ,int,scalar_t__) ;
 int FUNC_12 () ;
 int FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int ) ;

void
FUNC_18(struct key_ctx *VAR_4, const struct key *VAR_5,
             const struct key_type *VAR_6, int VAR_7,
             const char *VAR_8)
{
    struct gc_arena VAR_9 = FUNC_10();
    FUNC_0(*VAR_4);
    if (VAR_6->cipher && VAR_6->cipher_length > 0)
    {

        VAR_4->cipher = FUNC_2();
        FUNC_1(VAR_4->cipher, VAR_5->cipher, VAR_6->cipher_length,
                        VAR_6->cipher, VAR_7);

        FUNC_16(VAR_1, "%s: Cipher '%s' initialized with %d bit key",
            VAR_8,
            FUNC_17(FUNC_6(VAR_6->cipher)),
            VAR_6->cipher_length *8);

        FUNC_7(VAR_2, "%s: CIPHER KEY: %s", VAR_8,
             FUNC_8(VAR_5->cipher, VAR_6->cipher_length, 0, &VAR_9));
        FUNC_7(VAR_0, "%s: CIPHER block_size=%d iv_size=%d",
             VAR_8, FUNC_3(VAR_6->cipher),
             FUNC_5(VAR_6->cipher));
        if (FUNC_4(VAR_6->cipher))
        {
            FUNC_16(VAR_3, "WARNING: INSECURE cipher with block size less than 128"
                " bit (%d bit).  This allows attacks like SWEET32.  Mitigate by "
                "using a --cipher with a larger block size (e.g. AES-256-CBC).",
                FUNC_3(VAR_6->cipher)*8);
        }
    }
    if (VAR_6->digest && VAR_6->hmac_length > 0)
    {
        VAR_4->hmac = FUNC_12();
        FUNC_11(VAR_4->hmac, VAR_5->hmac, VAR_6->hmac_length, VAR_6->digest);

        FUNC_16(VAR_1,
            "%s: Using %d bit message hash '%s' for HMAC authentication",
            VAR_8, FUNC_15(VAR_6->digest) * 8, FUNC_14(VAR_6->digest));

        FUNC_7(VAR_2, "%s: HMAC KEY: %s", VAR_8,
             FUNC_8(VAR_5->hmac, VAR_6->hmac_length, 0, &VAR_9));

        FUNC_7(VAR_0, "%s: HMAC size=%d block_size=%d",
             VAR_8,
             FUNC_15(VAR_6->digest),
             FUNC_13(VAR_4->hmac));

    }
    FUNC_9(&VAR_9);
}
