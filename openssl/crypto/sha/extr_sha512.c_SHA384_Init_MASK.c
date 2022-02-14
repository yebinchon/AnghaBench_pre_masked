
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int md_len; scalar_t__ num; scalar_t__ Nh; scalar_t__ Nl; void** h; } ;
typedef TYPE_1__ SHA512_CTX ;


 int VAR_0 ;
 void* FUNC_0 (int) ;

int FUNC_1(SHA512_CTX *VAR_1)
{
    VAR_1->h[0] = FUNC_0(0xcbbb9d5dc1059ed8);
    VAR_1->h[1] = FUNC_0(0x629a292a367cd507);
    VAR_1->h[2] = FUNC_0(0x9159015a3070dd17);
    VAR_1->h[3] = FUNC_0(0x152fecd8f70e5939);
    VAR_1->h[4] = FUNC_0(0x67332667ffc00b31);
    VAR_1->h[5] = FUNC_0(0x8eb44a8768581511);
    VAR_1->h[6] = FUNC_0(0xdb0c2e0d64f98fa7);
    VAR_1->h[7] = FUNC_0(0x47b5481dbefa4fa4);

    VAR_1->Nl = 0;
    VAR_1->Nh = 0;
    VAR_1->num = 0;
    VAR_1->md_len = VAR_0;
    return 1;
}
