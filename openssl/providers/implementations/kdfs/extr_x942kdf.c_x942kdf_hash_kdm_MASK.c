
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mac ;
typedef int EVP_MD_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,unsigned char*,int *) ;
 int FUNC_2 (int *,int const*) ;
 int FUNC_3 (int *,unsigned char const*,size_t) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int const*) ;
 int FUNC_8 (unsigned char*,int) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_9 (unsigned char*,unsigned char*,size_t) ;

__attribute__((used)) static int FUNC_10(const EVP_MD *VAR_4,
                            const unsigned char *VAR_5, size_t VAR_6,
                            const unsigned char *VAR_7, size_t VAR_8,
                            unsigned char *VAR_9,
                            unsigned char *VAR_10, size_t VAR_11)
{
    int VAR_12 = 0, VAR_13;
    size_t VAR_14, VAR_15, VAR_16 = VAR_11;
    unsigned char VAR_17[VAR_1];
    unsigned char *VAR_18 = VAR_10;
    EVP_MD_CTX *VAR_19 = ((void*)0), *VAR_20 = ((void*)0);

    if (VAR_6 > VAR_3 || VAR_8 > VAR_3
            || VAR_11 > VAR_3
            || VAR_11 == 0) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    VAR_13 = FUNC_7(VAR_4);
    if (VAR_13 <= 0)
        return 0;
    VAR_15 = (size_t)VAR_13;

    VAR_19 = FUNC_5();
    VAR_20 = FUNC_5();
    if (VAR_19 == ((void*)0) || VAR_20 == ((void*)0))
        goto end;

    if (!FUNC_2(VAR_20, VAR_4))
        goto end;

    for (VAR_14 = 1;; VAR_14++) {

        VAR_9[0] = (unsigned char)((VAR_14 >> 24) & 0xff);
        VAR_9[1] = (unsigned char)((VAR_14 >> 16) & 0xff);
        VAR_9[2] = (unsigned char)((VAR_14 >> 8) & 0xff);
        VAR_9[3] = (unsigned char)(VAR_14 & 0xff);

        if (!FUNC_4(VAR_19, VAR_20)
            || !FUNC_3(VAR_19, VAR_5, VAR_6)
            || !FUNC_3(VAR_19, VAR_7, VAR_8))
            goto end;
        if (VAR_16 >= VAR_15) {
            if (!FUNC_1(VAR_19, VAR_18, ((void*)0)))
                goto end;
            VAR_18 += VAR_15;
            VAR_16 -= VAR_15;
            if (VAR_16 == 0)
                break;
        } else {
            if (!FUNC_1(VAR_19, VAR_17, ((void*)0)))
                goto end;
            FUNC_9(VAR_18, VAR_17, VAR_16);
            break;
        }
    }
    VAR_12 = 1;
end:
    FUNC_6(VAR_19);
    FUNC_6(VAR_20);
    FUNC_8(VAR_17, sizeof(VAR_17));
    return VAR_12;
}
