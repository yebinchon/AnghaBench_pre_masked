
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct provider_store_st {scalar_t__ use_fallbacks; int providers; } ;
struct TYPE_4__ {scalar_t__ flag_fallback; } ;
typedef TYPE_1__ OSSL_PROVIDER ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct provider_store_st *VAR_0)
{
    if (VAR_0->use_fallbacks) {
        int VAR_1 = FUNC_1(VAR_0->providers);
        int VAR_2 = 0;
        int VAR_3;

        for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
            OSSL_PROVIDER *VAR_4 = FUNC_2(VAR_0->providers, VAR_3);






            if (VAR_4->flag_fallback) {
                VAR_2++;
                FUNC_0(VAR_4);
            }
        }







        if (VAR_2 > 0)
            VAR_0->use_fallbacks = 0;
    }
}
