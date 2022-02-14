
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;
typedef int BIO ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,unsigned char*,int *) ;
 int FUNC_3 (int *,int const*) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 () ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (unsigned char*) ;
 unsigned char* FUNC_9 (char const*,long*) ;
 unsigned char* FUNC_10 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_11(BIO *VAR_1, const char *VAR_2, const EVP_MD *VAR_3,
                         unsigned char **VAR_4)
{
    int VAR_5;
    int VAR_6 = 0;
    EVP_MD_CTX *VAR_7 = ((void*)0);

    VAR_5 = FUNC_7(VAR_3);
    if (VAR_5 < 0)
        return 0;

    if (VAR_1 != ((void*)0)) {
        unsigned char VAR_8[4096];
        int VAR_9;

        VAR_7 = FUNC_6();
        if (VAR_7 == ((void*)0))
            return 0;
        *VAR_4 = FUNC_10(VAR_5, "digest buffer");
        if (!FUNC_3(VAR_7, VAR_3))
            goto err;
        while ((VAR_9 = FUNC_1(VAR_1, VAR_8, sizeof(VAR_8))) > 0) {
            if (!FUNC_4(VAR_7, VAR_8, VAR_9))
                goto err;
        }
        if (!FUNC_2(VAR_7, *VAR_4, ((void*)0)))
            goto err;
        VAR_5 = FUNC_7(VAR_3);
    } else {
        long VAR_10;

        *VAR_4 = FUNC_9(VAR_2, &VAR_10);
        if (*VAR_4 == ((void*)0) || VAR_5 != VAR_10) {
            FUNC_8(*VAR_4);
            *VAR_4 = ((void*)0);
            FUNC_0(VAR_0, "bad digest, %d bytes "
                       "must be specified\n", VAR_5);
            return 0;
        }
    }
    VAR_6 = VAR_5;
 err:
    FUNC_5(VAR_7);
    return VAR_6;
}
