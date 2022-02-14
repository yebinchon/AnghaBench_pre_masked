
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int flags; int final_used; unsigned char* final; int buf_len; TYPE_1__* cipher; int provctx; scalar_t__ encrypt; } ;
struct TYPE_8__ {int (* cupdate ) (int ,unsigned char*,size_t*,int,unsigned char const*,size_t) ;unsigned int block_size; int flags; int (* do_cipher ) (TYPE_2__*,unsigned char*,unsigned char const*,int) ;int * prov; } ;
typedef scalar_t__ PTRDIFF_T ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 size_t VAR_8 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,unsigned char*,int*,unsigned char const*,int) ;
 scalar_t__ FUNC_5 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_6 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_7 (int ,unsigned char*,size_t*,int,unsigned char const*,size_t) ;
 int FUNC_8 (TYPE_2__*,unsigned char*,unsigned char const*,int) ;

int FUNC_9(EVP_CIPHER_CTX *VAR_9, unsigned char *VAR_10, int *VAR_11,
                      const unsigned char *VAR_12, int VAR_13)
{
    int VAR_14, VAR_15 = VAR_13, VAR_16;
    unsigned int VAR_17;
    size_t VAR_18;
    int VAR_19;


    if (VAR_9->encrypt) {
        FUNC_2(VAR_3, VAR_4);
        return 0;
    }

    if (VAR_9->cipher == ((void*)0)) {
        FUNC_2(VAR_3, VAR_5);
        return 0;
    }
    if (VAR_9->cipher->prov == ((void*)0))
        goto legacy;

    VAR_19 = FUNC_0(VAR_9);

    if (VAR_9->cipher->cupdate == ((void*)0) || VAR_19 < 1) {
        FUNC_2(VAR_3, VAR_7);
        return 0;
    }
    VAR_16 = VAR_9->cipher->cupdate(VAR_9->provctx, VAR_10, &VAR_18,
                               VAR_13 + (VAR_19 == 1 ? 0 : VAR_19), VAR_12,
                               (size_t)VAR_13);

    if (VAR_16) {
        if (VAR_18 > VAR_8) {
            FUNC_2(VAR_3, VAR_7);
            return 0;
        }
        *VAR_11 = VAR_18;
    }

    return VAR_16;


 legacy:

    VAR_17 = VAR_9->cipher->block_size;

    if (FUNC_1(VAR_9, VAR_1))
        VAR_15 = (VAR_15 + 7) / 8;

    if (VAR_9->cipher->flags & VAR_0) {
        if (VAR_17 == 1 && FUNC_5(VAR_10, VAR_12, VAR_15)) {
            FUNC_2(VAR_3, VAR_6);
            return 0;
        }

        VAR_14 = VAR_9->cipher->do_cipher(VAR_9, VAR_10, VAR_12, VAR_13);
        if (VAR_14 < 0) {
            *VAR_11 = 0;
            return 0;
        } else
            *VAR_11 = VAR_14;
        return 1;
    }

    if (VAR_13 <= 0) {
        *VAR_11 = 0;
        return VAR_13 == 0;
    }

    if (VAR_9->flags & VAR_2)
        return FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);

    FUNC_3(VAR_17 <= sizeof(VAR_9->final));

    if (VAR_9->final_used) {

        if (((PTRDIFF_T)VAR_10 == (PTRDIFF_T)VAR_12)
            || FUNC_5(VAR_10, VAR_12, VAR_17)) {
            FUNC_2(VAR_3, VAR_6);
            return 0;
        }
        FUNC_6(VAR_10, VAR_9->final, VAR_17);
        VAR_10 += VAR_17;
        VAR_14 = 1;
    } else
        VAR_14 = 0;

    if (!FUNC_4(VAR_9, VAR_10, VAR_11, VAR_12, VAR_13))
        return 0;





    if (VAR_17 > 1 && !VAR_9->buf_len) {
        *VAR_11 -= VAR_17;
        VAR_9->final_used = 1;
        FUNC_6(VAR_9->final, &VAR_10[*VAR_11], VAR_17);
    } else
        VAR_9->final_used = 0;

    if (VAR_14)
        *VAR_11 += VAR_17;

    return 1;
}
