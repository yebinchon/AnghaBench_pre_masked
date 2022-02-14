
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* cbc ) (unsigned char const*,unsigned char*,size_t,int ,int ,scalar_t__) ;} ;
struct TYPE_5__ {int block; int iv; int ks; scalar_t__ enc; TYPE_1__ stream; } ;
typedef TYPE_2__ PROV_CIPHER_CTX ;


 int FUNC_0 (unsigned char const*,unsigned char*,size_t,int ,int ,int ) ;
 int FUNC_1 (unsigned char const*,unsigned char*,size_t,int ,int ,int ) ;
 int FUNC_2 (unsigned char const*,unsigned char*,size_t,int ,int ,scalar_t__) ;

int FUNC_3(PROV_CIPHER_CTX *VAR_0, unsigned char *VAR_1,
                          const unsigned char *VAR_2, size_t VAR_3)
{
    if (VAR_0->stream.cbc)
        (*VAR_0->stream.cbc) (VAR_2, VAR_1, VAR_3, VAR_0->ks, VAR_0->iv, VAR_0->enc);
    else if (VAR_0->enc)
        FUNC_1(VAR_2, VAR_1, VAR_3, VAR_0->ks, VAR_0->iv, VAR_0->block);
    else
        FUNC_0(VAR_2, VAR_1, VAR_3, VAR_0->ks, VAR_0->iv, VAR_0->block);

    return 1;
}
