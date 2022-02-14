
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mac ;
typedef int c ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int FUNC_0 (int *,unsigned char*,int *) ;
 int FUNC_1 (int *,int const*) ;
 scalar_t__ FUNC_2 (int *,unsigned char const*,size_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (unsigned char*,int) ;
 size_t VAR_1 ;
 int FUNC_8 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_9(const EVP_MD *VAR_2,
                          const unsigned char *VAR_3, size_t VAR_4,
                          const unsigned char *VAR_5, size_t VAR_6,
                          unsigned int VAR_7,
                          unsigned char *VAR_8, size_t VAR_9)
{
    int VAR_10 = 0, VAR_11;
    size_t VAR_12, VAR_13, VAR_14 = VAR_9;
    unsigned char VAR_15[4];
    unsigned char VAR_16[VAR_0];
    unsigned char *VAR_17 = VAR_8;
    EVP_MD_CTX *VAR_18 = ((void*)0), *VAR_19 = ((void*)0);

    if (VAR_4 > VAR_1 || VAR_6 > VAR_1
            || VAR_9 > VAR_1
            || VAR_9 == 0)
        return 0;

    VAR_11 = FUNC_6(VAR_2);
    if (VAR_11 <= 0)
        return 0;
    VAR_13 = (size_t)VAR_11;

    VAR_18 = FUNC_4();
    VAR_19 = FUNC_4();
    if (VAR_18 == ((void*)0) || VAR_19 == ((void*)0))
        goto end;

    if (!FUNC_1(VAR_19, VAR_2))
        goto end;

    for (VAR_12 = 1;; VAR_12++) {
        VAR_15[0] = (unsigned char)((VAR_12 >> 24) & 0xff);
        VAR_15[1] = (unsigned char)((VAR_12 >> 16) & 0xff);
        VAR_15[2] = (unsigned char)((VAR_12 >> 8) & 0xff);
        VAR_15[3] = (unsigned char)(VAR_12 & 0xff);

        if (!(FUNC_3(VAR_18, VAR_19)
                && (VAR_7 || FUNC_2(VAR_18, VAR_15, sizeof(VAR_15)))
                && FUNC_2(VAR_18, VAR_3, VAR_4)
                && (!VAR_7 || FUNC_2(VAR_18, VAR_15, sizeof(VAR_15)))
                && FUNC_2(VAR_18, VAR_5, VAR_6)))
            goto end;
        if (VAR_14 >= VAR_13) {
            if (!FUNC_0(VAR_18, VAR_17, ((void*)0)))
                goto end;
            VAR_17 += VAR_13;
            VAR_14 -= VAR_13;
            if (VAR_14 == 0)
                break;
        } else {
            if (!FUNC_0(VAR_18, VAR_16, ((void*)0)))
                goto end;
            FUNC_8(VAR_17, VAR_16, VAR_14);
            break;
        }
    }
    VAR_10 = 1;
end:
    FUNC_5(VAR_18);
    FUNC_5(VAR_19);
    FUNC_7(VAR_16, sizeof(VAR_16));
    return VAR_10;
}
