
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pem_pass_data {int dummy; } ;
typedef int UI_METHOD ;
typedef int EVP_CIPHER_INFO ;
typedef int BIO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char*,long*,int ,struct pem_pass_data*) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int *,char**,char**,unsigned char**,long*) ;
 int FUNC_3 (int *,char**,char**,unsigned char**,long*,int) ;
 int FUNC_4 (struct pem_pass_data*,char*,int const*,void*) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(BIO *VAR_3, char **VAR_4, char **VAR_5,
                         unsigned char **VAR_6, long *VAR_7,
                         const UI_METHOD *VAR_8,
                         void *VAR_9, int VAR_10)
{
    int VAR_11 = VAR_10
        ? FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7,
                          VAR_1 | VAR_0)
        : FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);

    if (VAR_11 <= 0)
        return 0;







    if (FUNC_5(*VAR_5) > 10) {
        EVP_CIPHER_INFO VAR_12;
        struct pem_pass_data VAR_13;

        if (!FUNC_1(*VAR_5, &VAR_12)
            || !FUNC_4(&VAR_13, "PEM", VAR_8, VAR_9)
            || !FUNC_0(&VAR_12, *VAR_6, VAR_7, VAR_2,
                              &VAR_13)) {
            return 0;
        }
    }
    return 1;
}
