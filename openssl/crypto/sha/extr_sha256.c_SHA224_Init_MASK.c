
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* h; int md_len; } ;
typedef TYPE_1__ SHA256_CTX ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;

int FUNC_1(SHA256_CTX *VAR_1)
{
    FUNC_0(VAR_1, 0, sizeof(*VAR_1));
    VAR_1->h[0] = 0xc1059ed8UL;
    VAR_1->h[1] = 0x367cd507UL;
    VAR_1->h[2] = 0x3070dd17UL;
    VAR_1->h[3] = 0xf70e5939UL;
    VAR_1->h[4] = 0xffc00b31UL;
    VAR_1->h[5] = 0x68581511UL;
    VAR_1->h[6] = 0x64f98fa7UL;
    VAR_1->h[7] = 0xbefa4fa4UL;
    VAR_1->md_len = VAR_0;
    return 1;
}
