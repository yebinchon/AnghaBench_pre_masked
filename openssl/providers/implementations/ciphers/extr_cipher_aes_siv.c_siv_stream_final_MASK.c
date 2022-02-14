
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* hw; } ;
struct TYPE_3__ {int (* cipher ) (void*,unsigned char*,int *,int ) ;} ;
typedef TYPE_2__ PROV_AES_SIV_CTX ;


 int FUNC_0 (void*,unsigned char*,int *,int ) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned char *VAR_1, size_t *VAR_2,
                            size_t VAR_3)
{
    PROV_AES_SIV_CTX *VAR_4 = (PROV_AES_SIV_CTX *)VAR_0;

    if (!VAR_4->hw->cipher(VAR_0, VAR_1, ((void*)0), 0))
        return 0;

    if (VAR_2 != ((void*)0))
        *VAR_2 = 0;
    return 1;
}
