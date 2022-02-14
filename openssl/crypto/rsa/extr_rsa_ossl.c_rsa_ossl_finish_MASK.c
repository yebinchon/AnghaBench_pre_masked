
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int prime_infos; int _method_mod_q; int _method_mod_p; int _method_mod_n; } ;
struct TYPE_5__ {int m; } ;
typedef TYPE_1__ RSA_PRIME_INFO ;
typedef TYPE_2__ RSA ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(RSA *VAR_0)
{
    int VAR_1;
    RSA_PRIME_INFO *VAR_2;

    FUNC_0(VAR_0->_method_mod_n);
    FUNC_0(VAR_0->_method_mod_p);
    FUNC_0(VAR_0->_method_mod_q);
    for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0->prime_infos); VAR_1++) {
        VAR_2 = FUNC_2(VAR_0->prime_infos, VAR_1);
        FUNC_0(VAR_2->m);
    }
    return 1;
}
