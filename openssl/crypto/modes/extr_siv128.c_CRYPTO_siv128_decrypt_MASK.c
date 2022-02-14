
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {unsigned char* byte; } ;
struct TYPE_11__ {scalar_t__ crypto_ok; scalar_t__ final_ret; TYPE_1__ tag; int cipher_ctx; } ;
struct TYPE_10__ {int* byte; int* word; } ;
typedef TYPE_2__ SIV_BLOCK ;
typedef TYPE_3__ SIV128_CONTEXT ;


 int FUNC_0 (unsigned char*,size_t) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*,unsigned char*,int) ;
 int FUNC_2 (int ,unsigned char*,unsigned char const*,size_t,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*,unsigned char*,size_t) ;

int FUNC_4(SIV128_CONTEXT *VAR_1,
                          const unsigned char *VAR_2, unsigned char *VAR_3,
                          size_t VAR_4)
{
    unsigned char* VAR_5;
    SIV_BLOCK VAR_6, VAR_7;
    int VAR_8;


    if (VAR_1->crypto_ok == 0)
        return 0;
    VAR_1->crypto_ok--;

    FUNC_1(&VAR_7, VAR_1->tag.byte, VAR_0);
    VAR_7.byte[8] &= 0x7f;
    VAR_7.byte[12] &= 0x7f;

    if (!FUNC_2(VAR_1->cipher_ctx, VAR_3, VAR_2, VAR_4, &VAR_7)
        || !FUNC_3(VAR_1, &VAR_6, VAR_3, VAR_4))
        return 0;

    VAR_5 = VAR_1->tag.byte;
    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
        VAR_6.byte[VAR_8] ^= VAR_5[VAR_8];

    if ((VAR_6.word[0] | VAR_6.word[1]) != 0) {
        FUNC_0(VAR_3, VAR_4);
        return 0;
    }
    VAR_1->final_ret = 0;
    return VAR_4;
}
