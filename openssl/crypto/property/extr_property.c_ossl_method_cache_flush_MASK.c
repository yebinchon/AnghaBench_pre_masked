
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int cache; } ;
struct TYPE_7__ {int nelem; } ;
typedef TYPE_1__ OSSL_METHOD_STORE ;
typedef TYPE_2__ ALGORITHM ;


 int FUNC_0 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(OSSL_METHOD_STORE *VAR_0, int VAR_1)
{
    ALGORITHM *VAR_2 = FUNC_2(VAR_0, VAR_1);

    if (VAR_2 != ((void*)0)) {
        VAR_0->nelem -= FUNC_1(VAR_2->cache);
        FUNC_0(0, VAR_2);
    }
}
