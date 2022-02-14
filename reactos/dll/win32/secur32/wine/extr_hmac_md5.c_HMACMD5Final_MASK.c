
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int digest; } ;
struct TYPE_8__ {unsigned char* outer_padding; TYPE_1__ ctx; } ;
typedef TYPE_1__ MD5_CTX ;
typedef TYPE_2__ HMAC_MD5_CTX ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned char*,int) ;
 int FUNC_3 (unsigned char*,int ,int) ;

void FUNC_4(HMAC_MD5_CTX *VAR_0, unsigned char *VAR_1)
{
    MD5_CTX VAR_2;
    unsigned char VAR_3[16];

    FUNC_0(&(VAR_0->ctx));
    FUNC_3(VAR_3, VAR_0->ctx.digest, 16);

    FUNC_1(&VAR_2);
    FUNC_2(&VAR_2, VAR_0->outer_padding, 64);
    FUNC_2(&VAR_2, VAR_3, 16);
    FUNC_0(&VAR_2);

    FUNC_3(VAR_1, VAR_2.digest, 16);
}
