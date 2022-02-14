
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WHIRLPOOL_CTX ;


 int FUNC_0 (int *,unsigned char const*,size_t) ;

int FUNC_1(WHIRLPOOL_CTX *VAR_0, const void *VAR_1, size_t VAR_2)
{





    size_t VAR_3 = ((size_t)1) << (sizeof(size_t) * 8 - 4);
    const unsigned char *VAR_4 = VAR_1;

    while (VAR_2 >= VAR_3) {
        FUNC_0(VAR_0, VAR_4, VAR_3 * 8);
        VAR_2 -= VAR_3;
        VAR_4 += VAR_3;
    }
    if (VAR_2)
        FUNC_0(VAR_0, VAR_4, VAR_2 * 8);

    return 1;
}
