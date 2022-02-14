
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t (* absorb ) (TYPE_2__*,unsigned char const*,size_t const) ;} ;
struct TYPE_6__ {size_t block_size; size_t bufsz; unsigned char const* buf; TYPE_1__ meth; } ;
typedef TYPE_2__ KECCAK1600_CTX ;


 int FUNC_0 (unsigned char const*,unsigned char const*,size_t) ;
 size_t FUNC_1 (TYPE_2__*,unsigned char const*,size_t const) ;
 size_t FUNC_2 (TYPE_2__*,unsigned char const*,size_t) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
    KECCAK1600_CTX *VAR_3 = VAR_0;
    const size_t VAR_4 = VAR_3->block_size;
    size_t VAR_5, VAR_6;

    if (VAR_2 == 0)
        return 1;


    if ((VAR_5 = VAR_3->bufsz) != 0) {

        VAR_6 = VAR_4 - VAR_5;

        if (VAR_2 < VAR_6) {
            FUNC_0(VAR_3->buf + VAR_5, VAR_1, VAR_2);
            VAR_3->bufsz += VAR_2;
            return 1;
        }

        FUNC_0(VAR_3->buf + VAR_5, VAR_1, VAR_6);

        VAR_1 += VAR_6;
        VAR_2 -= VAR_6;
        VAR_3->meth.absorb(VAR_3, VAR_3->buf, VAR_4);
        VAR_3->bufsz = 0;
    }

    VAR_6 = VAR_3->meth.absorb(VAR_3, VAR_1, VAR_2);

    if (VAR_6) {
        FUNC_0(VAR_3->buf, VAR_1 + VAR_2 - VAR_6, VAR_6);
        VAR_3->bufsz = VAR_6;
    }
    return 1;
}
