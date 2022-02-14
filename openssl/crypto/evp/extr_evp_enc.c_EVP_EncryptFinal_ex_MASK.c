
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int buf_len; int flags; int* buf; TYPE_1__* cipher; int provctx; int encrypt; } ;
struct TYPE_7__ {int (* cfinal ) (int ,unsigned char*,size_t*,int) ;int flags; int (* do_cipher ) (TYPE_2__*,unsigned char*,int*,unsigned int) ;unsigned int block_size; int * prov; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned char*,size_t*,int) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,int*,unsigned int) ;
 int FUNC_5 (TYPE_2__*,unsigned char*,int*,unsigned int) ;

int FUNC_6(EVP_CIPHER_CTX *VAR_8, unsigned char *VAR_9, int *VAR_10)
{
    int VAR_11, VAR_12;
    unsigned int VAR_13, VAR_14, VAR_15;
    size_t VAR_16;
    int VAR_17;


    if (!VAR_8->encrypt) {
        FUNC_1(VAR_2, VAR_5);
        return 0;
    }

    if (VAR_8->cipher == ((void*)0)) {
        FUNC_1(VAR_2, VAR_6);
        return 0;
    }
    if (VAR_8->cipher->prov == ((void*)0))
        goto legacy;

    VAR_17 = FUNC_0(VAR_8);

    if (VAR_17 < 1 || VAR_8->cipher->cfinal == ((void*)0)) {
        FUNC_1(VAR_2, VAR_4);
        return 0;
    }

    VAR_12 = VAR_8->cipher->cfinal(VAR_8->provctx, VAR_9, &VAR_16,
                              VAR_17 == 1 ? 0 : VAR_17);

    if (VAR_12) {
        if (VAR_16 > VAR_7) {
            FUNC_1(VAR_2, VAR_4);
            return 0;
        }
        *VAR_10 = VAR_16;
    }

    return VAR_12;


 legacy:

    if (VAR_8->cipher->flags & VAR_0) {
        VAR_12 = VAR_8->cipher->do_cipher(VAR_8, VAR_9, ((void*)0), 0);
        if (VAR_12 < 0)
            return 0;
        else
            *VAR_10 = VAR_12;
        return 1;
    }

    VAR_14 = VAR_8->cipher->block_size;
    FUNC_2(VAR_14 <= sizeof(VAR_8->buf));
    if (VAR_14 == 1) {
        *VAR_10 = 0;
        return 1;
    }
    VAR_15 = VAR_8->buf_len;
    if (VAR_8->flags & VAR_1) {
        if (VAR_15) {
            FUNC_1(VAR_2,
                   VAR_3);
            return 0;
        }
        *VAR_10 = 0;
        return 1;
    }

    VAR_11 = VAR_14 - VAR_15;
    for (VAR_13 = VAR_15; VAR_13 < VAR_14; VAR_13++)
        VAR_8->buf[VAR_13] = VAR_11;
    VAR_12 = VAR_8->cipher->do_cipher(VAR_8, VAR_9, VAR_8->buf, VAR_14);

    if (VAR_12)
        *VAR_10 = VAR_14;

    return VAR_12;
}
