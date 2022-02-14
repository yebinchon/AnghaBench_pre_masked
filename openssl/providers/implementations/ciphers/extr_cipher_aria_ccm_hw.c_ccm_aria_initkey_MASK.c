
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int block128_f ;
struct TYPE_5__ {int ks; } ;
struct TYPE_7__ {TYPE_1__ ks; } ;
struct TYPE_6__ {int key_set; int * str; int l; int m; int ccm_ctx; } ;
typedef TYPE_2__ PROV_CCM_CTX ;
typedef TYPE_3__ PROV_ARIA_CCM_CTX ;


 int FUNC_0 (int *,int ,int ,int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (unsigned char const*,size_t,int *) ;

__attribute__((used)) static int FUNC_2(PROV_CCM_CTX *VAR_1,
                            const unsigned char *VAR_2, size_t VAR_3)
{
    PROV_ARIA_CCM_CTX *VAR_4 = (PROV_ARIA_CCM_CTX *)VAR_1;

    FUNC_1(VAR_2, VAR_3 * 8, &VAR_4->ks.ks);
    FUNC_0(&VAR_1->ccm_ctx, VAR_1->m, VAR_1->l, &VAR_4->ks.ks,
                       (block128_f)VAR_0);
    VAR_1->str = ((void*)0);
    VAR_1->key_set = 1;
    return 1;
}
