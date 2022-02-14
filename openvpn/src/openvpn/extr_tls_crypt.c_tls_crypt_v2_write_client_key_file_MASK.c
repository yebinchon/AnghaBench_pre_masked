
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int timestamp ;
typedef int test_client_key2 ;
struct key_ctx_bi {int dummy; } ;
struct key_ctx {int member_0; } ;
struct key2 {int member_0; int * keys; } ;
struct gc_arena {int dummy; } ;
struct buffer {int member_0; } ;
typedef int int64_t ;
typedef int client_key ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct buffer*) ;
 char* FUNC_2 (struct buffer*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct buffer FUNC_3 (scalar_t__,struct gc_arena*) ;
 int FUNC_4 (struct buffer*) ;
 int FUNC_5 (struct buffer*,int) ;
 int FUNC_6 (struct buffer*,int *,int) ;
 int FUNC_7 (char const*,struct buffer*) ;
 int FUNC_8 (int ,struct buffer*,struct buffer*,struct gc_arena*) ;
 int FUNC_9 (struct buffer*) ;
 int FUNC_10 (struct key_ctx*) ;
 int FUNC_11 (struct key_ctx_bi*) ;
 int FUNC_12 (struct gc_arena*) ;
 struct gc_arena FUNC_13 () ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,...) ;
 scalar_t__ VAR_9 ;
 int FUNC_16 (char const*,char*,int ) ;
 int FUNC_17 (char*,char*) ;
 int FUNC_18 (void*,int) ;
 int FUNC_19 (struct key2*,int) ;
 scalar_t__ FUNC_20 (char const*,char*) ;
 scalar_t__ FUNC_21 (char const*) ;
 int VAR_10 ;
 int FUNC_22 (struct key_ctx_bi*,struct buffer*,char const*,char const*) ;
 int FUNC_23 (struct key_ctx*,int,char const*,char const*) ;
 int FUNC_24 (struct key2*,struct buffer*,struct buffer,struct key_ctx*) ;
 int FUNC_25 (struct buffer*,struct key2*,struct buffer*,struct key_ctx*,struct gc_arena*) ;

void
FUNC_26(const char *VAR_11,
                                   const char *VAR_12,
                                   const char *VAR_13,
                                   const char *VAR_14)
{
    struct gc_arena VAR_15 = FUNC_13();
    struct key_ctx VAR_16 = { 0 };
    struct buffer VAR_17 = { 0 };
    struct buffer VAR_18 = FUNC_3(VAR_5
                                     + VAR_8, &VAR_15);
    struct key2 VAR_19 = { 2 };

    if (!FUNC_18((void *)VAR_19.keys, sizeof(VAR_19.keys)))
    {
        FUNC_15(VAR_2, "ERROR: could not generate random key");
        goto cleanup;
    }
    FUNC_0(FUNC_6(&VAR_18, VAR_19.keys, sizeof(VAR_19.keys)));

    struct buffer VAR_20 = FUNC_3(VAR_7, &VAR_15);
    if (VAR_12)
    {
        if (VAR_6 < FUNC_21(VAR_12))
        {
            FUNC_15(VAR_2,
                "ERROR: metadata too long (%d bytes, max %u bytes)",
                (int)FUNC_21(VAR_12), VAR_6);
        }
        FUNC_0(FUNC_6(&VAR_20, &VAR_4, 1));
        int VAR_21 = FUNC_16(VAR_12, FUNC_2(&VAR_20),
                                                FUNC_1(&VAR_20));
        if (VAR_21 < 0)
        {
            FUNC_15(VAR_2, "ERROR: failed to base64 decode provided metadata");
            goto cleanup;
        }
        FUNC_0(FUNC_5(&VAR_20, VAR_21));
    }
    else
    {
        int64_t VAR_22 = FUNC_14((uint64_t)VAR_9);
        FUNC_0(FUNC_6(&VAR_20, &VAR_3, 1));
        FUNC_0(FUNC_6(&VAR_20, &VAR_22, sizeof(VAR_22)));
    }

    FUNC_23(&VAR_16, 1, VAR_13,
                                 VAR_14);
    if (!FUNC_25(&VAR_18, &VAR_19, &VAR_20, &VAR_16,
                                      &VAR_15))
    {
        FUNC_15(VAR_2, "ERROR: could not wrap generated client key");
        goto cleanup;
    }


    if (!FUNC_8(VAR_10, &VAR_17, &VAR_18,
                           &VAR_15))
    {
        FUNC_15(VAR_2, "ERROR: could not PEM-encode client key");
        goto cleanup;
    }

    const char *VAR_23 = VAR_11;
    const char *VAR_24 = ((void*)0);

    if (!VAR_11 || FUNC_20(VAR_11, ""))
    {
        FUNC_17("%s\n", FUNC_2(&VAR_17));
        VAR_23 = VAR_1;
        VAR_24 = (const char *)FUNC_2(&VAR_17);
    }
    else if (!FUNC_7(VAR_11, &VAR_17))
    {
        FUNC_15(VAR_2, "ERROR: could not write client key file");
        goto cleanup;
    }


    struct key_ctx_bi VAR_25;
    struct buffer VAR_26;
    FUNC_15(VAR_0, "Testing client-side key loading...");
    FUNC_22(&VAR_25, &VAR_26,
                                 VAR_23, VAR_24);
    FUNC_11(&VAR_25);


    struct buffer VAR_27 = FUNC_3(VAR_7,
                                               &VAR_15);
    struct key2 VAR_28 = { 0 };
    FUNC_10(&VAR_16);
    FUNC_23(&VAR_16, 0, VAR_13,
                                 VAR_14);
    FUNC_15(VAR_0, "Testing server-side key loading...");
    FUNC_0(FUNC_24(&VAR_28, &VAR_27,
                                          VAR_26, &VAR_16));
    FUNC_19(&VAR_28, sizeof(VAR_28));
    FUNC_9(&VAR_26);

cleanup:
    FUNC_19(&VAR_19, sizeof(VAR_19));
    FUNC_10(&VAR_16);
    FUNC_4(&VAR_17);
    FUNC_4(&VAR_18);

    FUNC_12(&VAR_15);
}
