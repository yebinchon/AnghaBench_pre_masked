
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct key_ctx {int * hmac; int * cipher; } ;
struct key2 {scalar_t__ keys; } ;
struct gc_arena {int dummy; } ;
struct buffer {int dummy; } ;
typedef int net_len ;
typedef int hmac_ctx_t ;
typedef int cipher_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer*) ;
 int FUNC_2 (struct buffer const*) ;
 void* FUNC_3 (struct buffer const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct buffer FUNC_4 (scalar_t__,struct gc_arena*) ;
 int FUNC_5 (struct buffer*,struct buffer*) ;
 scalar_t__ FUNC_6 (struct buffer*) ;
 int FUNC_7 (struct buffer*,int) ;
 int FUNC_8 (struct buffer*,int *,int) ;
 int * FUNC_9 (struct buffer*,int ) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int ,int*) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int ,int*,void*,int) ;
 int FUNC_14 (int ,char*,int ) ;
 int FUNC_15 (int *,int ,int ,struct gc_arena*) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,void*,int) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int ,char*) ;

__attribute__((used)) static bool
FUNC_21(struct buffer *VAR_5,
                             const struct key2 *VAR_6,
                             const struct buffer *VAR_7,
                             struct key_ctx *VAR_8, struct gc_arena *VAR_9)
{
    cipher_ctx_t *VAR_10 = VAR_8->cipher;
    struct buffer VAR_11 = FUNC_4(VAR_3
                                      + FUNC_10(VAR_10), VAR_9);


    uint8_t *VAR_12 = FUNC_9(&VAR_11, VAR_2);
    if (!VAR_12)
    {
        FUNC_20(VAR_1, "ERROR: could not write tag");
        return 0;
    }
    uint16_t VAR_13 = FUNC_19(sizeof(VAR_6->keys) + FUNC_2(VAR_7)
                             + VAR_4 + sizeof(uint16_t));
    hmac_ctx_t *VAR_14 = VAR_8->hmac;
    FUNC_17(VAR_14);
    FUNC_18(VAR_14, (void *)&VAR_13, sizeof(VAR_13));
    FUNC_18(VAR_14, (void *)VAR_6->keys, sizeof(VAR_6->keys));
    FUNC_18(VAR_14, FUNC_3(VAR_7), FUNC_2(VAR_7));
    FUNC_16(VAR_14, VAR_12);

    FUNC_14(VAR_0, "TLS-CRYPT WRAP TAG: %s",
         FUNC_15(VAR_12, VAR_2, 0, VAR_9));


    FUNC_0(FUNC_12(VAR_10, VAR_12));


    if (FUNC_6(&VAR_11) < (sizeof(VAR_6->keys)
                                       + FUNC_2(VAR_7)
                                       + sizeof(VAR_13)
                                       + FUNC_10(VAR_10)))
    {
        FUNC_20(VAR_1, "ERROR: could not crypt: insufficient space in dst");
        return 0;
    }


    int VAR_15 = 0;
    FUNC_0(FUNC_13(VAR_10, FUNC_1(&VAR_11), &VAR_15,
                             (void *)VAR_6->keys, sizeof(VAR_6->keys)));
    FUNC_0(FUNC_7(&VAR_11, VAR_15));
    FUNC_0(FUNC_13(VAR_10, FUNC_1(&VAR_11), &VAR_15,
                             FUNC_3(VAR_7), FUNC_2(VAR_7)));
    FUNC_0(FUNC_7(&VAR_11, VAR_15));
    FUNC_0(FUNC_11(VAR_10, FUNC_1(&VAR_11), &VAR_15));
    FUNC_0(FUNC_7(&VAR_11, VAR_15));
    FUNC_0(FUNC_8(&VAR_11, &VAR_13, sizeof(VAR_13)));

    return FUNC_5(VAR_5, &VAR_11);
}
