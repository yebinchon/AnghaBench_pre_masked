
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int buf_len; int block_mask; unsigned char const* buf; TYPE_1__* cipher; } ;
struct TYPE_9__ {int block_size; int flags; int (* do_cipher ) (TYPE_2__*,unsigned char*,unsigned char const*,int) ;} ;
typedef TYPE_2__ EVP_CIPHER_CTX ;


 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char const*,int) ;
 int FUNC_4 (unsigned char const*,unsigned char const*,int) ;
 int FUNC_5 (TYPE_2__*,unsigned char*,unsigned char const*,int) ;
 int FUNC_6 (TYPE_2__*,unsigned char*,unsigned char const*,int) ;
 int FUNC_7 (TYPE_2__*,unsigned char*,unsigned char const*,int) ;
 int FUNC_8 (TYPE_2__*,unsigned char*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_9(EVP_CIPHER_CTX *VAR_4,
                                    unsigned char *VAR_5, int *VAR_6,
                                    const unsigned char *VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12 = VAR_8;

    if (FUNC_0(VAR_4, VAR_1))
        VAR_12 = (VAR_12 + 7) / 8;

    VAR_11 = VAR_4->cipher->block_size;

    if (VAR_4->cipher->flags & VAR_0) {

        if (VAR_11 == 1 && FUNC_3(VAR_5, VAR_7, VAR_12)) {
            FUNC_1(VAR_2, VAR_3);
            return 0;
        }

        VAR_9 = VAR_4->cipher->do_cipher(VAR_4, VAR_5, VAR_7, VAR_8);
        if (VAR_9 < 0)
            return 0;
        else
            *VAR_6 = VAR_9;
        return 1;
    }

    if (VAR_8 <= 0) {
        *VAR_6 = 0;
        return VAR_8 == 0;
    }
    if (FUNC_3(VAR_5 + VAR_4->buf_len, VAR_7, VAR_12)) {
        FUNC_1(VAR_2, VAR_3);
        return 0;
    }

    if (VAR_4->buf_len == 0 && (VAR_8 & (VAR_4->block_mask)) == 0) {
        if (VAR_4->cipher->do_cipher(VAR_4, VAR_5, VAR_7, VAR_8)) {
            *VAR_6 = VAR_8;
            return 1;
        } else {
            *VAR_6 = 0;
            return 0;
        }
    }
    VAR_9 = VAR_4->buf_len;
    FUNC_2(VAR_11 <= (int)sizeof(VAR_4->buf));
    if (VAR_9 != 0) {
        if (VAR_11 - VAR_9 > VAR_8) {
            FUNC_4(&(VAR_4->buf[VAR_9]), VAR_7, VAR_8);
            VAR_4->buf_len += VAR_8;
            *VAR_6 = 0;
            return 1;
        } else {
            VAR_10 = VAR_11 - VAR_9;
            FUNC_4(&(VAR_4->buf[VAR_9]), VAR_7, VAR_10);
            VAR_8 -= VAR_10;
            VAR_7 += VAR_10;
            if (!VAR_4->cipher->do_cipher(VAR_4, VAR_5, VAR_4->buf, VAR_11))
                return 0;
            VAR_5 += VAR_11;
            *VAR_6 = VAR_11;
        }
    } else
        *VAR_6 = 0;
    VAR_9 = VAR_8 & (VAR_11 - 1);
    VAR_8 -= VAR_9;
    if (VAR_8 > 0) {
        if (!VAR_4->cipher->do_cipher(VAR_4, VAR_5, VAR_7, VAR_8))
            return 0;
        *VAR_6 += VAR_8;
    }

    if (VAR_9 != 0)
        FUNC_4(VAR_4->buf, &(VAR_7[VAR_8]), VAR_9);
    VAR_4->buf_len = VAR_9;
    return 1;
}
