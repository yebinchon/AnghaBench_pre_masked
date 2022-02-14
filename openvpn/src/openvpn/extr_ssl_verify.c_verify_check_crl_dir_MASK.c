
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gc_arena {int dummy; } ;
typedef int result_t ;
typedef int openvpn_x509_cert_t ;
typedef int fn ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int *,struct gc_arena*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gc_arena*) ;
 struct gc_arena FUNC_3 () ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (char*,int,char*,char const*,int ,char*) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static result_t
FUNC_7(const char *VAR_5, openvpn_x509_cert_t *VAR_6)
{
    result_t VAR_7 = VAR_1;
    char VAR_8[256];
    int VAR_9 = -1;
    struct gc_arena VAR_10 = FUNC_3();

    char *VAR_11 = FUNC_0(VAR_6, &VAR_10);

    if (!FUNC_5(VAR_8, sizeof(VAR_8), "%s%c%s", VAR_5, VAR_2, VAR_11))
    {
        FUNC_4(VAR_0, "VERIFY CRL: filename overflow");
        goto cleanup;
    }
    VAR_9 = FUNC_6(VAR_8, VAR_3, 0);
    if (VAR_9 >= 0)
    {
        FUNC_4(VAR_0, "VERIFY CRL: certificate serial number %s is revoked", VAR_11);
        goto cleanup;
    }

    VAR_7 = VAR_4;

cleanup:

    if (VAR_9 != -1)
    {
        FUNC_1(VAR_9);
    }
    FUNC_2(&VAR_10);
    return VAR_7;
}
