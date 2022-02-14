
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t block_size; size_t bufsz; unsigned char const* buf; int A; } ;
typedef TYPE_1__ KECCAK1600_CTX ;


 size_t FUNC_0 (int ,unsigned char const*,size_t,size_t) ;
 int FUNC_1 (unsigned char const*,unsigned char const*,size_t) ;

int FUNC_2(KECCAK1600_CTX *VAR_0, const void *VAR_1, size_t VAR_2)
{
    const unsigned char *VAR_3 = VAR_1;
    size_t VAR_4 = VAR_0->block_size;
    size_t VAR_5, VAR_6;

    if (VAR_2 == 0)
        return 1;

    if ((VAR_5 = VAR_0->bufsz) != 0) {
        VAR_6 = VAR_4 - VAR_5;

        if (VAR_2 < VAR_6) {
            FUNC_1(VAR_0->buf + VAR_5, VAR_3, VAR_2);
            VAR_0->bufsz += VAR_2;
            return 1;
        }





        FUNC_1(VAR_0->buf + VAR_5, VAR_3, VAR_6);
        VAR_3 += VAR_6, VAR_2 -= VAR_6;
        (void)FUNC_0(VAR_0->A, VAR_0->buf, VAR_4, VAR_4);
        VAR_0->bufsz = 0;

    }

    if (VAR_2 >= VAR_4)
        VAR_6 = FUNC_0(VAR_0->A, VAR_3, VAR_2, VAR_4);
    else
        VAR_6 = VAR_2;

    if (VAR_6) {
        FUNC_1(VAR_0->buf, VAR_3 + VAR_2 - VAR_6, VAR_6);
        VAR_0->bufsz = VAR_6;
    }

    return 1;
}
