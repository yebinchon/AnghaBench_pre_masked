
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {int dummy; } ;
struct tls_wrap_ctx {struct buffer tls_crypt_v2_metadata; } ;
struct tls_options {int tls_crypt_v2_verify_script; int tmp_dir; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct argv {int dummy; } ;
typedef int metadata_type_str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct argv*,char*) ;
 struct argv FUNC_1 () ;
 int FUNC_2 (struct argv*,int ) ;
 int FUNC_3 (struct argv*) ;
 int FUNC_4 (struct buffer*) ;
 int FUNC_5 (char const*,struct buffer*) ;
 struct env_set* FUNC_6 (int *) ;
 int FUNC_7 (struct env_set*) ;
 int FUNC_8 (struct gc_arena*) ;
 struct gc_arena FUNC_9 () ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (struct argv*,struct env_set*,int ,char*) ;
 int FUNC_12 (char*,int,char*,int) ;
 char* FUNC_13 (int ,char*,struct gc_arena*) ;
 int FUNC_14 (char const*) ;
 int FUNC_15 (struct env_set*,char*,char const*) ;

__attribute__((used)) static bool
FUNC_16(const struct tls_wrap_ctx *VAR_3,
                             const struct tls_options *VAR_4)
{
    bool VAR_5 = 0;
    struct gc_arena VAR_6 = FUNC_9();
    const char *VAR_7 = ((void*)0);
    struct buffer VAR_8 = VAR_3->tls_crypt_v2_metadata;
    int VAR_9 = FUNC_4(&VAR_8);
    if (VAR_9 < 0)
    {
        FUNC_10(VAR_2, "ERROR: no metadata type");
        goto cleanup;
    }

    VAR_7 = FUNC_13(VAR_4->tmp_dir, "tls_crypt_v2_metadata_",
                                         &VAR_6);
    if (!VAR_7 || !FUNC_5(VAR_7, &VAR_8))
    {
        FUNC_10(VAR_2, "ERROR: could not write metadata to file");
        goto cleanup;
    }

    char VAR_10[4] = { 0 };
    FUNC_12(VAR_10, sizeof(VAR_10),
                     "%i", VAR_9);
    struct env_set *VAR_11 = FUNC_6(((void*)0));
    FUNC_15(VAR_11, "script_type", "tls-crypt-v2-verify");
    FUNC_15(VAR_11, "metadata_type", VAR_10);
    FUNC_15(VAR_11, "metadata_file", VAR_7);

    struct argv VAR_12 = FUNC_1();
    FUNC_2(&VAR_12, VAR_4->tls_crypt_v2_verify_script);
    FUNC_0(VAR_1, &VAR_12, "Executing tls-crypt-v2-verify");

    VAR_5 = FUNC_11(&VAR_12, VAR_11, 0, "--tls-crypt-v2-verify");

    FUNC_3(&VAR_12);
    FUNC_7(VAR_11);

    if (!FUNC_14(VAR_7))
    {
        FUNC_10(VAR_2, "WARNING: failed to remove temp file '%s", VAR_7);
    }

    if (VAR_5)
    {
        FUNC_10(VAR_0, "TLS CRYPT V2 VERIFY SCRIPT OK");
    }
    else
    {
        FUNC_10(VAR_0, "TLS CRYPT V2 VERIFY SCRIPT ERROR");
    }

cleanup:
    FUNC_8(&VAR_6);
    return VAR_5;
}
