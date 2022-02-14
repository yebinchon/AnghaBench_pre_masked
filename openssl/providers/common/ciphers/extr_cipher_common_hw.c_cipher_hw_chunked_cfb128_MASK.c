
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PROV_CIPHER_CTX ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned char*,unsigned char const*,size_t) ;

int FUNC_1(PROV_CIPHER_CTX *VAR_1, unsigned char *VAR_2,
                             const unsigned char *VAR_3, size_t VAR_4)
{
    size_t VAR_5 = VAR_0;

    if (VAR_4 < VAR_5)
        VAR_5 = VAR_4;
    while (VAR_4 > 0 && VAR_4 >= VAR_5) {
        FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
        VAR_4 -= VAR_5;
        VAR_3 += VAR_5;
        VAR_2 += VAR_5;
        if (VAR_4 < VAR_5)
            VAR_5 = VAR_4;
    }
    return 1;
}
