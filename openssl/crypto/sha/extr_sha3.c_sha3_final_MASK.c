
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t block_size; size_t bufsz; scalar_t__ md_size; int* buf; int pad; int A; } ;
typedef TYPE_1__ KECCAK1600_CTX ;


 int FUNC_0 (int ,int*,size_t,size_t) ;
 int FUNC_1 (int ,unsigned char*,scalar_t__,size_t) ;
 int FUNC_2 (int*,int ,size_t) ;

int FUNC_3(unsigned char *VAR_0, KECCAK1600_CTX *VAR_1)
{
    size_t VAR_2 = VAR_1->block_size;
    size_t VAR_3 = VAR_1->bufsz;

    if (VAR_1->md_size == 0)
        return 1;






    FUNC_2(VAR_1->buf + VAR_3, 0, VAR_2 - VAR_3);
    VAR_1->buf[VAR_3] = VAR_1->pad;
    VAR_1->buf[VAR_2 - 1] |= 0x80;

    (void)FUNC_0(VAR_1->A, VAR_1->buf, VAR_2, VAR_2);

    FUNC_1(VAR_1->A, VAR_0, VAR_1->md_size, VAR_2);

    return 1;
}
