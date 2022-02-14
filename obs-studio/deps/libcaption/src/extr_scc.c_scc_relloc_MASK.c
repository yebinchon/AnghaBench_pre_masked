
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_5__ {unsigned int cc_aloc; } ;
typedef TYPE_1__ scc_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static scc_t* FUNC_1(scc_t* VAR_0, unsigned int VAR_1)
{
    if (0 == VAR_0 || VAR_0->cc_aloc < VAR_1) {

        VAR_0 = (scc_t*)FUNC_0(VAR_0, sizeof(scc_t) + ((VAR_1 * 15 / 10) * sizeof(uint16_t)));
        VAR_0->cc_aloc = VAR_1;
    }

    return VAR_0;
}
