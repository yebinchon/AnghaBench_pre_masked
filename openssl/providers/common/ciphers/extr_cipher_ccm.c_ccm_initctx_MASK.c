
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t keylen; int l; int m; int const* hw; int tls_aad_len; scalar_t__ len_set; scalar_t__ tag_set; scalar_t__ iv_set; scalar_t__ key_set; } ;
typedef int PROV_CCM_HW ;
typedef TYPE_1__ PROV_CCM_CTX ;


 int VAR_0 ;

void FUNC_0(PROV_CCM_CTX *VAR_1, size_t VAR_2, const PROV_CCM_HW *VAR_3)
{
    VAR_1->keylen = VAR_2 / 8;
    VAR_1->key_set = 0;
    VAR_1->iv_set = 0;
    VAR_1->tag_set = 0;
    VAR_1->len_set = 0;
    VAR_1->l = 8;
    VAR_1->m = 12;
    VAR_1->tls_aad_len = VAR_0;
    VAR_1->hw = VAR_3;
}
