
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t blocksize; int ks; int (* block ) (unsigned char const*,unsigned char*,int ) ;} ;
typedef TYPE_1__ PROV_CIPHER_CTX ;


 int FUNC_0 (unsigned char const*,unsigned char*,int ) ;

int FUNC_1(PROV_CIPHER_CTX *VAR_0, unsigned char *VAR_1,
                          const unsigned char *VAR_2, size_t VAR_3)
{
    size_t VAR_4, VAR_5 = VAR_0->blocksize;

    if (VAR_3 < VAR_5)
        return 1;

    for (VAR_4 = 0, VAR_3 -= VAR_5; VAR_4 <= VAR_3; VAR_4 += VAR_5)
        (*VAR_0->block) (VAR_2 + VAR_4, VAR_1 + VAR_4, VAR_0->ks);

    return 1;
}
