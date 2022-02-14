
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nlast_block; int tbl; int cctx; } ;
typedef TYPE_1__ CMAC_CTX ;


 int FUNC_0 (int ,int *,int *,int *,int ) ;

int FUNC_1(CMAC_CTX *VAR_0)
{
    if (VAR_0->nlast_block == -1)
        return 0;







    return FUNC_0(VAR_0->cctx, ((void*)0), ((void*)0), ((void*)0), VAR_0->tbl);
}
