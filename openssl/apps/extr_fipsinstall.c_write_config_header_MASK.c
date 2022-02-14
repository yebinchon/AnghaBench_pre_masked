
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 scalar_t__ FUNC_0 (int *,char*,...) ;

__attribute__((used)) static int FUNC_1(BIO *VAR_0, const char *VAR_1,
                               const char *VAR_2)
{
    return FUNC_0(VAR_0, "openssl_conf = openssl_init\n\n")
           && FUNC_0(VAR_0, "[openssl_init]\n")
           && FUNC_0(VAR_0, "providers = provider_section\n\n")
           && FUNC_0(VAR_0, "[provider_section]\n")
           && FUNC_0(VAR_0, "%s = %s\n\n", VAR_1, VAR_2);
}
