
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * counter; } ;
struct TYPE_4__ {scalar_t__ oiv; scalar_t__ iv_set; } ;
typedef TYPE_1__ PROV_CIPHER_CTX ;
typedef TYPE_2__ PROV_CHACHA20_CTX ;


 unsigned int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(PROV_CIPHER_CTX *VAR_1)
{
    PROV_CHACHA20_CTX *VAR_2 = (PROV_CHACHA20_CTX *)VAR_1;
    unsigned int VAR_3;

    if (VAR_1->iv_set) {
        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3 += 4)
            VAR_2->counter[VAR_3 / 4] = FUNC_0(VAR_1->oiv + VAR_3);
    }
    return 1;
}
