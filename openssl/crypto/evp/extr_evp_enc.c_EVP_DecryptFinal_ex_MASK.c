
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int flags; int* final; TYPE_1__* cipher; int final_used; scalar_t__ buf_len; int provctx; scalar_t__ encrypt; } ;
struct TYPE_6__ {int (* cfinal ) (int ,unsigned char*,size_t*,int) ;int flags; int (* do_cipher ) (TYPE_2__*,unsigned char*,int *,int ) ;unsigned int block_size; int * prov; } ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 size_t VAR_9 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,unsigned char*,size_t*,int) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,int *,int ) ;

int FUNC_5(EVP_CIPHER_CTX *VAR_10, unsigned char *VAR_11, int *VAR_12)
{
    int VAR_13, VAR_14;
    unsigned int VAR_15;
    size_t VAR_16;
    int VAR_17;
    int VAR_18;


    if (VAR_10->encrypt) {
        FUNC_1(VAR_2, VAR_6);
        return 0;
    }

    if (VAR_10->cipher == ((void*)0)) {
        FUNC_1(VAR_2, VAR_7);
        return 0;
    }

    if (VAR_10->cipher->prov == ((void*)0))
        goto legacy;

    VAR_18 = FUNC_0(VAR_10);

    if (VAR_18 < 1 || VAR_10->cipher->cfinal == ((void*)0)) {
        FUNC_1(VAR_2, VAR_5);
        return 0;
    }

    VAR_17 = VAR_10->cipher->cfinal(VAR_10->provctx, VAR_11, &VAR_16,
                              VAR_18 == 1 ? 0 : VAR_18);

    if (VAR_17) {
        if (VAR_16 > VAR_9) {
            FUNC_1(VAR_2, VAR_5);
            return 0;
        }
        *VAR_12 = VAR_16;
    }

    return VAR_17;


 legacy:

    *VAR_12 = 0;
    if (VAR_10->cipher->flags & VAR_0) {
        VAR_13 = VAR_10->cipher->do_cipher(VAR_10, VAR_11, ((void*)0), 0);
        if (VAR_13 < 0)
            return 0;
        else
            *VAR_12 = VAR_13;
        return 1;
    }

    VAR_15 = VAR_10->cipher->block_size;
    if (VAR_10->flags & VAR_1) {
        if (VAR_10->buf_len) {
            FUNC_1(VAR_2,
                   VAR_4);
            return 0;
        }
        *VAR_12 = 0;
        return 1;
    }
    if (VAR_15 > 1) {
        if (VAR_10->buf_len || !VAR_10->final_used) {
            FUNC_1(VAR_2, VAR_8);
            return 0;
        }
        FUNC_2(VAR_15 <= sizeof(VAR_10->final));





        VAR_14 = VAR_10->final[VAR_15 - 1];
        if (VAR_14 == 0 || VAR_14 > (int)VAR_15) {
            FUNC_1(VAR_2, VAR_3);
            return 0;
        }
        for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
            if (VAR_10->final[--VAR_15] != VAR_14) {
                FUNC_1(VAR_2, VAR_3);
                return 0;
            }
        }
        VAR_14 = VAR_10->cipher->block_size - VAR_14;
        for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++)
            VAR_11[VAR_13] = VAR_10->final[VAR_13];
        *VAR_12 = VAR_14;
    } else
        *VAR_12 = 0;
    return 1;
}
