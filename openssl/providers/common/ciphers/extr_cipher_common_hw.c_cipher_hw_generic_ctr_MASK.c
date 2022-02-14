
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctr; } ;
struct TYPE_5__ {unsigned int num; int block; int buf; int iv; int ks; TYPE_1__ stream; } ;
typedef TYPE_2__ PROV_CIPHER_CTX ;


 int FUNC_0 (unsigned char const*,unsigned char*,size_t,int ,int ,int ,unsigned int*,int ) ;
 int FUNC_1 (unsigned char const*,unsigned char*,size_t,int ,int ,int ,unsigned int*,int ) ;

int FUNC_2(PROV_CIPHER_CTX *VAR_0, unsigned char *VAR_1,
                          const unsigned char *VAR_2, size_t VAR_3)
{
    unsigned int VAR_4 = VAR_0->num;

    if (VAR_0->stream.ctr)
        FUNC_1(VAR_2, VAR_1, VAR_3, VAR_0->ks, VAR_0->iv, VAR_0->buf,
                                    &VAR_4, VAR_0->stream.ctr);
    else
        FUNC_0(VAR_2, VAR_1, VAR_3, VAR_0->ks, VAR_0->iv, VAR_0->buf,
                              &VAR_4, VAR_0->block);
    VAR_0->num = VAR_4;

    return 1;
}
