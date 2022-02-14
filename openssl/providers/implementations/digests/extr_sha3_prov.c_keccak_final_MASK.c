
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* final ) (unsigned char*,TYPE_2__*) ;} ;
struct TYPE_5__ {size_t md_size; TYPE_1__ meth; } ;
typedef TYPE_2__ KECCAK1600_CTX ;


 int FUNC_0 (unsigned char*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned char *VAR_1, size_t *VAR_2,
                        size_t VAR_3)
{
    int VAR_4 = 1;
    KECCAK1600_CTX *VAR_5 = VAR_0;

    if (VAR_3 > 0)
        VAR_4 = VAR_5->meth.final(VAR_1, VAR_5);

    *VAR_2 = VAR_5->md_size;
    return VAR_4;
}
