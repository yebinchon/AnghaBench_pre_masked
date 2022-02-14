
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ sigalg; } ;
typedef TYPE_1__ SIGALG_LOOKUP ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const SIGALG_LOOKUP *FUNC_1(uint16_t VAR_1)
{
    size_t VAR_2;
    const SIGALG_LOOKUP *VAR_3;

    for (VAR_2 = 0, VAR_3 = VAR_0; VAR_2 < FUNC_0(VAR_0);
         VAR_2++, VAR_3++) {
        if (VAR_3->sigalg == VAR_1)
            return VAR_3;
    }
    return ((void*)0);
}
