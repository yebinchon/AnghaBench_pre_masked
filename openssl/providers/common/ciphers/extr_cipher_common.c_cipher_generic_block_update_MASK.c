
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t blocksize; unsigned char const* buf; size_t bufsz; TYPE_1__* hw; scalar_t__ pad; scalar_t__ enc; } ;
struct TYPE_5__ {int (* cipher ) (TYPE_2__*,unsigned char*,unsigned char const*,size_t) ;} ;
typedef TYPE_2__ PROV_CIPHER_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (unsigned char const*,size_t*,size_t,unsigned char const**,size_t*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,unsigned char const*,size_t) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,unsigned char const*,size_t) ;
 int FUNC_5 (unsigned char const*,size_t*,size_t,unsigned char const**,size_t*) ;

int FUNC_6(void *VAR_3, unsigned char *VAR_4, size_t *VAR_5,
                                size_t VAR_6, const unsigned char *VAR_7,
                                size_t VAR_8)
{
    size_t VAR_9 = 0;
    PROV_CIPHER_CTX *VAR_10 = (PROV_CIPHER_CTX *)VAR_3;
    size_t VAR_11 = VAR_10->blocksize;
    size_t VAR_12 = FUNC_1(VAR_10->buf, &VAR_10->bufsz, VAR_11, &VAR_7, &VAR_8);






    if (VAR_10->bufsz == VAR_11 && (VAR_10->enc || VAR_8 > 0 || !VAR_10->pad)) {
        if (VAR_6 < VAR_11) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        if (!VAR_10->hw->cipher(VAR_10, VAR_4, VAR_10->buf, VAR_11)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        VAR_10->bufsz = 0;
        VAR_9 = VAR_11;
        VAR_4 += VAR_11;
    }
    if (VAR_12 > 0) {
        if (!VAR_10->enc && VAR_10->pad && VAR_12 == VAR_8) {
            if (!FUNC_2(VAR_8 >= VAR_11)) {
                FUNC_0(VAR_0, VAR_2);
                return 0;
            }
            VAR_12 -= VAR_11;
        }
        VAR_9 += VAR_12;
        if (VAR_6 < VAR_9) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        if (!VAR_10->hw->cipher(VAR_10, VAR_4, VAR_7, VAR_12)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        VAR_7 += VAR_12;
        VAR_8 -= VAR_12;
    }
    if (!FUNC_5(VAR_10->buf, &VAR_10->bufsz, VAR_11, &VAR_7, &VAR_8)) {

        return 0;
    }

    *VAR_5 = VAR_9;
    return VAR_8 == 0;
}
