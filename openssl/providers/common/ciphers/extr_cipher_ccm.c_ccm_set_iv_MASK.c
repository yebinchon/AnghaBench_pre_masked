
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int len_set; int iv; TYPE_1__* hw; } ;
struct TYPE_6__ {int (* setiv ) (TYPE_2__*,int ,int ,size_t) ;} ;
typedef TYPE_1__ PROV_CCM_HW ;
typedef TYPE_2__ PROV_CCM_CTX ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ,size_t) ;

__attribute__((used)) static int FUNC_2(PROV_CCM_CTX *VAR_0, size_t VAR_1)
{
    const PROV_CCM_HW *VAR_2 = VAR_0->hw;

    if (!VAR_2->setiv(VAR_0, VAR_0->iv, FUNC_0(VAR_0), VAR_1))
        return 0;
    VAR_0->len_set = 1;
    return 1;
}
