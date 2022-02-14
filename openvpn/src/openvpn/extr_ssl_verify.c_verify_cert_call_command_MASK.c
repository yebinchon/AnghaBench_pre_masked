
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct argv {int dummy; } ;
typedef int result_t ;
typedef int openvpn_x509_cert_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct argv*,char*) ;
 struct argv FUNC_1 () ;
 int FUNC_2 (struct argv*,char const*) ;
 int FUNC_3 (struct argv*,char*,int,char*) ;
 int FUNC_4 (struct argv*) ;
 int FUNC_5 (struct gc_arena*) ;
 struct gc_arena FUNC_6 () ;
 int FUNC_7 (int ,char*,int,char*) ;
 int FUNC_8 (struct argv*,struct env_set*,int ,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (struct env_set*,char*,char const*) ;
 char* FUNC_11 (int *,char const*,struct gc_arena*) ;

__attribute__((used)) static result_t
FUNC_12(const char *VAR_4, struct env_set *VAR_5,
                         int VAR_6, openvpn_x509_cert_t *VAR_7, char *VAR_8, const char *VAR_9)
{
    const char *VAR_10 = ((void*)0);
    int VAR_11;
    struct gc_arena VAR_12 = FUNC_6();
    struct argv VAR_13 = FUNC_1();

    FUNC_10(VAR_5, "script_type", "tls-verify");

    if (VAR_9)
    {
        VAR_10 = FUNC_11(VAR_7, VAR_9, &VAR_12);
        if (!VAR_10)
        {
            VAR_11 = 0;
            goto cleanup;
        }
        FUNC_10(VAR_5, "peer_cert", VAR_10);
    }

    FUNC_2(&VAR_13, VAR_4);
    FUNC_3(&VAR_13, "%d %s", VAR_6, VAR_8);

    FUNC_0(VAR_1, &VAR_13, "TLS: executing verify command");
    VAR_11 = FUNC_8(&VAR_13, VAR_5, 0, "--tls-verify script");

    if (VAR_9)
    {
        if (VAR_10)
        {
            FUNC_9(VAR_10);
        }
    }

cleanup:
    FUNC_5(&VAR_12);
    FUNC_4(&VAR_13);

    if (VAR_11)
    {
        FUNC_7(VAR_0, "VERIFY SCRIPT OK: depth=%d, %s",
            VAR_6, VAR_8);
        return VAR_3;
    }

    FUNC_7(VAR_0, "VERIFY SCRIPT ERROR: depth=%d, %s",
        VAR_6, VAR_8);
    return VAR_2;
}
