
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num; int block; int enc; int iv; int ks; } ;
typedef TYPE_1__ PROV_CIPHER_CTX ;


 int FUNC_0 (unsigned char const*,unsigned char*,size_t,int ,int ,int*,int ,int ) ;

int FUNC_1(PROV_CIPHER_CTX *VAR_0, unsigned char *VAR_1,
                           const unsigned char *VAR_2, size_t VAR_3)
{
    int VAR_4 = VAR_0->num;

    FUNC_0(VAR_2, VAR_1, VAR_3, VAR_0->ks, VAR_0->iv, &VAR_4, VAR_0->enc,
                            VAR_0->block);
    VAR_0->num = VAR_4;

    return 1;
}
