
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CTX ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,char*,int ) ;
 scalar_t__ FUNC_4 (int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_5(SSL_CTX *VAR_2, char *VAR_3, char *VAR_4)
{
    if (VAR_3 != ((void*)0)) {
        if (FUNC_4(VAR_2, VAR_3,
                                         VAR_0) <= 0) {
            FUNC_0(VAR_1, "unable to get certificate from '%s'\n",
                       VAR_3);
            FUNC_1(VAR_1);
            return 0;
        }
        if (VAR_4 == ((void*)0))
            VAR_4 = VAR_3;
        if (FUNC_3(VAR_2, VAR_4, VAR_0) <= 0) {
            FUNC_0(VAR_1, "unable to get private key from '%s'\n",
                       VAR_4);
            FUNC_1(VAR_1);
            return 0;
        }
        if (!FUNC_2(VAR_2)) {
            FUNC_0(VAR_1,
                       "Private key does not match the certificate public key\n");
            return 0;
        }
    }
    return 1;
}
