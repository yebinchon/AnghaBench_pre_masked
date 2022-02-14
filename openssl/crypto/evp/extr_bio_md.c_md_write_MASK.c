
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*,int) ;
 int FUNC_6 (int *,unsigned char const*,unsigned int) ;

__attribute__((used)) static int FUNC_7(BIO *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    EVP_MD_CTX *VAR_4;
    BIO *VAR_5;

    if ((VAR_1 == ((void*)0)) || (VAR_2 <= 0))
        return 0;

    VAR_4 = FUNC_2(VAR_0);
    VAR_5 = FUNC_4(VAR_0);
    if ((VAR_4 != ((void*)0)) && (VAR_5 != ((void*)0)))
        VAR_3 = FUNC_5(VAR_5, VAR_1, VAR_2);

    if (FUNC_3(VAR_0)) {
        if (VAR_3 > 0) {
            if (!FUNC_6(VAR_4, (const unsigned char *)VAR_1,
                                  (unsigned int)VAR_3)) {
                FUNC_0(VAR_0);
                return 0;
            }
        }
    }
    if (VAR_5 != ((void*)0)) {
        FUNC_0(VAR_0);
        FUNC_1(VAR_0);
    }
    return VAR_3;
}
