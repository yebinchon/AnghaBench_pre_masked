
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x509_track {int dummy; } ;
struct gc_arena {int dummy; } ;
struct env_set {int dummy; } ;
struct buffer {int dummy; } ;
typedef int openvpn_x509_cert_t ;
typedef int envname ;


 int FUNC_0 (struct buffer*) ;
 int FUNC_1 (struct buffer*) ;
 char* FUNC_2 (int *,struct gc_arena*) ;
 char* FUNC_3 (int *,struct gc_arena*) ;
 char* FUNC_4 (int ,int ,int ,int,char*,struct gc_arena*) ;
 int FUNC_5 (struct gc_arena*) ;
 struct gc_arena FUNC_6 () ;
 int FUNC_7 (char*,int,char*,int) ;
 int FUNC_8 (struct env_set*,char*,char const*) ;
 struct buffer FUNC_9 (int *,struct gc_arena*) ;
 struct buffer FUNC_10 (int *,struct gc_arena*) ;
 int FUNC_11 (struct env_set*,int,int *) ;
 int FUNC_12 (struct x509_track const*,struct env_set*,int,int *) ;

__attribute__((used)) static void
FUNC_13(struct env_set *VAR_0, openvpn_x509_cert_t *VAR_1, int VAR_2,
                    const char *VAR_3, const char *VAR_4,
                    const struct x509_track *VAR_5)
{
    char VAR_6[64];
    char *VAR_7 = ((void*)0);
    struct gc_arena VAR_8 = FUNC_6();


    if (VAR_5)
    {
        FUNC_12(VAR_5, VAR_0, VAR_2, VAR_1);
    }
    else
    {
        FUNC_11(VAR_0, VAR_2, VAR_1);
    }


    FUNC_7(VAR_6, sizeof(VAR_6), "tls_id_%d", VAR_2);
    FUNC_8(VAR_0, VAR_6, VAR_3);
    {
        struct buffer VAR_9 = FUNC_9(VAR_1, &VAR_8);
        struct buffer VAR_10 = FUNC_10(VAR_1, &VAR_8);

        FUNC_7(VAR_6, sizeof(VAR_6), "tls_digest_%d", VAR_2);
        FUNC_8(VAR_0, VAR_6,
                   FUNC_4(FUNC_1(&VAR_9), FUNC_0(&VAR_9), 0, 1, ":", &VAR_8));

        FUNC_7(VAR_6, sizeof(VAR_6), "tls_digest_sha256_%d",
                         VAR_2);
        FUNC_8(VAR_0, VAR_6,
                   FUNC_4(FUNC_1(&VAR_10), FUNC_0(&VAR_10), 0, 1, ":", &VAR_8));
    }


    VAR_7 = FUNC_2(VAR_1, &VAR_8);
    FUNC_7(VAR_6, sizeof(VAR_6), "tls_serial_%d", VAR_2);
    FUNC_8(VAR_0, VAR_6, VAR_7);


    VAR_7 = FUNC_3(VAR_1, &VAR_8);
    FUNC_7(VAR_6, sizeof(VAR_6), "tls_serial_hex_%d", VAR_2);
    FUNC_8(VAR_0, VAR_6, VAR_7);

    FUNC_5(&VAR_8);
}
