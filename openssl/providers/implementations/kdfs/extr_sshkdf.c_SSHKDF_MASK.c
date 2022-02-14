
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *,unsigned char*,unsigned int*) ;
 int FUNC_1 (int *,int const*,int *) ;
 int FUNC_2 (int *,...) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (unsigned char*,int) ;
 int FUNC_6 (unsigned char*,unsigned char*,unsigned int) ;

__attribute__((used)) static int FUNC_7(const EVP_MD *VAR_1,
                  const unsigned char *VAR_2, size_t VAR_3,
                  const unsigned char *VAR_4, size_t VAR_5,
                  const unsigned char *VAR_6, size_t VAR_7,
                  char VAR_8, unsigned char *VAR_9, size_t VAR_10)
{
    EVP_MD_CTX *VAR_11 = ((void*)0);
    unsigned char VAR_12[VAR_0];
    unsigned int VAR_13 = 0;
    size_t VAR_14 = 0;
    int VAR_15 = 0;

    VAR_11 = FUNC_4();
    if (VAR_11 == ((void*)0))
        return 0;

    if (!FUNC_1(VAR_11, VAR_1, ((void*)0)))
        goto out;

    if (!FUNC_2(VAR_11, VAR_2, VAR_3))
        goto out;

    if (!FUNC_2(VAR_11, VAR_4, VAR_5))
        goto out;

    if (!FUNC_2(VAR_11, &VAR_8, 1))
        goto out;

    if (!FUNC_2(VAR_11, VAR_6, VAR_7))
        goto out;

    if (!FUNC_0(VAR_11, VAR_12, &VAR_13))
        goto out;

    if (VAR_10 < VAR_13) {
        FUNC_6(VAR_9, VAR_12, VAR_10);
        VAR_15 = 1;
        goto out;
    }

    FUNC_6(VAR_9, VAR_12, VAR_13);

    for (VAR_14 = VAR_13; VAR_14 < VAR_10; VAR_14 += VAR_13) {

        if (!FUNC_1(VAR_11, VAR_1, ((void*)0)))
            goto out;

        if (!FUNC_2(VAR_11, VAR_2, VAR_3))
            goto out;

        if (!FUNC_2(VAR_11, VAR_4, VAR_5))
            goto out;

        if (!FUNC_2(VAR_11, VAR_9, VAR_14))
            goto out;

        if (!FUNC_0(VAR_11, VAR_12, &VAR_13))
            goto out;

        if (VAR_10 < VAR_14 + VAR_13) {
            FUNC_6(VAR_9 + VAR_14, VAR_12, VAR_10 - VAR_14);
            VAR_15 = 1;
            goto out;
        }

        FUNC_6(VAR_9 + VAR_14, VAR_12, VAR_13);
    }

    VAR_15 = 1;

out:
    FUNC_3(VAR_11);
    FUNC_5(VAR_12, VAR_0);
    return VAR_15;
}
