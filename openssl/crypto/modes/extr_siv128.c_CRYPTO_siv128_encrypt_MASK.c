
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int byte; } ;
struct TYPE_11__ {scalar_t__ crypto_ok; scalar_t__ final_ret; int cipher_ctx; TYPE_1__ tag; } ;
struct TYPE_10__ {int* byte; } ;
typedef TYPE_2__ SIV_BLOCK ;
typedef TYPE_3__ SIV128_CONTEXT ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (int ,unsigned char*,unsigned char const*,size_t,TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*,unsigned char const*,size_t) ;

int FUNC_3(SIV128_CONTEXT *VAR_1,
                          const unsigned char *VAR_2, unsigned char *VAR_3,
                          size_t VAR_4)
{
    SIV_BLOCK VAR_5;


    if (VAR_1->crypto_ok == 0)
        return 0;
    VAR_1->crypto_ok--;

    if (!FUNC_2(VAR_1, &VAR_5, VAR_2, VAR_4))
        return 0;

    FUNC_0(VAR_1->tag.byte, &VAR_5, VAR_0);
    VAR_5.byte[8] &= 0x7f;
    VAR_5.byte[12] &= 0x7f;

    if (!FUNC_1(VAR_1->cipher_ctx, VAR_3, VAR_2, VAR_4, &VAR_5))
        return 0;
    VAR_1->final_ret = 0;
    return VAR_4;
}
