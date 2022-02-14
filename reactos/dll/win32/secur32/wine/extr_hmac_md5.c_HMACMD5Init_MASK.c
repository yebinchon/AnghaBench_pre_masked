
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned char const* digest; } ;
struct TYPE_8__ {unsigned char* outer_padding; TYPE_1__ ctx; } ;
typedef TYPE_1__ MD5_CTX ;
typedef TYPE_2__ HMAC_MD5_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned char const*,int) ;
 int FUNC_3 (unsigned char*,unsigned char const*,unsigned int) ;
 int FUNC_4 (unsigned char*,int ,int) ;

void FUNC_5(HMAC_MD5_CTX *VAR_0, const unsigned char *VAR_1, unsigned int VAR_2)
{
    int VAR_3;
    unsigned char VAR_4[64];
    unsigned char VAR_5[16];

    if(VAR_2 > 64)
    {
        MD5_CTX VAR_6;

        FUNC_1(&VAR_6);
        FUNC_2(&VAR_6, VAR_1, VAR_2);
        FUNC_0(&VAR_6);
        FUNC_3(VAR_5, VAR_6.digest, 16);

        VAR_1 = VAR_5;
        VAR_2 = 16;
    }

    FUNC_4(VAR_4, 0, 64);
    FUNC_4(VAR_0->outer_padding, 0, 64);
    FUNC_3(VAR_4, VAR_1, VAR_2);
    FUNC_3(VAR_0->outer_padding, VAR_1, VAR_2);

    for(VAR_3 = 0; VAR_3 < 64; ++VAR_3)
    {
        VAR_4[VAR_3] ^= 0x36;
        VAR_0->outer_padding[VAR_3] ^= 0x5c;
    }

    FUNC_1(&(VAR_0->ctx));
    FUNC_2(&(VAR_0->ctx), VAR_4, 64);
}
