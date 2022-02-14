
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ccm_ctx; int * str; } ;
typedef TYPE_1__ PROV_CCM_CTX ;


 scalar_t__ FUNC_0 (int *,unsigned char const*,unsigned char*,size_t) ;
 scalar_t__ FUNC_1 (int *,unsigned char const*,unsigned char*,size_t,int *) ;
 scalar_t__ FUNC_2 (int *,unsigned char*,size_t) ;

int FUNC_3(PROV_CCM_CTX *VAR_0, const unsigned char *VAR_1,
                             unsigned char *VAR_2, size_t VAR_3,
                             unsigned char *VAR_4, size_t VAR_5)
{
    int VAR_6;

    if (VAR_0->str != ((void*)0))
        VAR_6 = FUNC_1(&VAR_0->ccm_ctx, VAR_1,
                                         VAR_2, VAR_3, VAR_0->str) == 0;
    else
        VAR_6 = FUNC_0(&VAR_0->ccm_ctx, VAR_1, VAR_2, VAR_3) == 0;

    if (VAR_6 == 1 && VAR_4 != ((void*)0))
        VAR_6 = (FUNC_2(&VAR_0->ccm_ctx, VAR_4, VAR_5) > 0);
    return VAR_6;
}
