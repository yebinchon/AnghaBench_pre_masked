
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cipher_ctx {size_t num; int* partial; int blocksize; } ;
typedef int EVP_CIPHER_CTX ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned char*,unsigned char const*,size_t) ;
 int FUNC_2 (int*,int ,size_t) ;

__attribute__((used)) static int FUNC_3(EVP_CIPHER_CTX *VAR_0, unsigned char *VAR_1,
                         const unsigned char *VAR_2, size_t VAR_3)
{
    struct cipher_ctx *VAR_4 =
        (struct cipher_ctx *)FUNC_0(VAR_0);
    size_t VAR_5, VAR_6;


    while (VAR_4->num && VAR_3) {
        (*VAR_1++) = *(VAR_2++) ^ VAR_4->partial[VAR_4->num];
        --VAR_3;
        VAR_4->num = (VAR_4->num + 1) % VAR_4->blocksize;
    }


    if (VAR_3 > (unsigned int) VAR_4->blocksize) {
        VAR_5 = VAR_3/VAR_4->blocksize;
        VAR_6 = VAR_5 * VAR_4->blocksize;
        if (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_6) < 1)
            return 0;
        VAR_3 -= VAR_6;
        VAR_1 += VAR_6;
        VAR_2 += VAR_6;
    }


    if (VAR_3) {
        FUNC_2(VAR_4->partial, 0, VAR_4->blocksize);
        if (FUNC_1(VAR_0, VAR_4->partial, VAR_4->partial,
            VAR_4->blocksize) < 1)
            return 0;
        while (VAR_3--) {
            VAR_1[VAR_4->num] = VAR_2[VAR_4->num]
                                   ^ VAR_4->partial[VAR_4->num];
            VAR_4->num++;
        }
    }

    return 1;
}
