
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t blocksize; unsigned char* buf; size_t bufsz; scalar_t__ pad; TYPE_1__* hw; scalar_t__ enc; } ;
struct TYPE_5__ {int (* cipher ) (TYPE_2__*,unsigned char*,unsigned char*,size_t) ;} ;
typedef TYPE_2__ PROV_CIPHER_CTX ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned char*,unsigned char*,size_t) ;
 int FUNC_2 (unsigned char*,size_t*,size_t) ;
 int FUNC_3 (TYPE_2__*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,unsigned char*,size_t) ;
 int FUNC_5 (unsigned char*,size_t*,size_t) ;

int FUNC_6(void *VAR_4, unsigned char *VAR_5, size_t *VAR_6,
                               size_t VAR_7)
{
    PROV_CIPHER_CTX *VAR_8 = (PROV_CIPHER_CTX *)VAR_4;
    size_t VAR_9 = VAR_8->blocksize;

    if (VAR_8->enc) {
        if (VAR_8->pad) {
            FUNC_2(VAR_8->buf, &VAR_8->bufsz, VAR_9);
        } else if (VAR_8->bufsz == 0) {
            *VAR_6 = 0;
            return 1;
        } else if (VAR_8->bufsz != VAR_9) {
            FUNC_0(VAR_0, VAR_3);
            return 0;
        }

        if (VAR_7 < VAR_9) {
            FUNC_0(VAR_0, VAR_2);
            return 0;
        }
        if (!VAR_8->hw->cipher(VAR_8, VAR_5, VAR_8->buf, VAR_9)) {
            FUNC_0(VAR_0, VAR_1);
            return 0;
        }
        VAR_8->bufsz = 0;
        *VAR_6 = VAR_9;
        return 1;
    }


    if (VAR_8->bufsz != VAR_9) {
        if (VAR_8->bufsz == 0 && !VAR_8->pad) {
            *VAR_6 = 0;
            return 1;
        }
        FUNC_0(VAR_0, VAR_3);
        return 0;
    }

    if (!VAR_8->hw->cipher(VAR_8, VAR_8->buf, VAR_8->buf, VAR_9)) {
        FUNC_0(VAR_0, VAR_1);
        return 0;
    }

    if (VAR_8->pad && !FUNC_5(VAR_8->buf, &VAR_8->bufsz, VAR_9)) {

        return 0;
    }

    if (VAR_7 < VAR_8->bufsz) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }
    FUNC_1(VAR_5, VAR_8->buf, VAR_8->bufsz);
    *VAR_6 = VAR_8->bufsz;
    VAR_8->bufsz = 0;
    return 1;
}
