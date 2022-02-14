
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int md_size; } ;
typedef TYPE_1__ KECCAK1600_CTX ;


 int FUNC_0 (TYPE_1__*,unsigned char,size_t) ;

int FUNC_1(KECCAK1600_CTX *VAR_0, unsigned char VAR_1, size_t VAR_2)
{
    int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);

    if (VAR_3)
        VAR_0->md_size *= 2;
    return VAR_3;
}
