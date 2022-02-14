
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_8__ {scalar_t__ sig; int curve; } ;
struct TYPE_7__ {TYPE_1__* cert; } ;
struct TYPE_6__ {size_t conf_sigalgslen; int * conf_sigalgs; } ;
typedef TYPE_2__ SSL ;
typedef TYPE_3__ SIGALG_LOOKUP ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int *) ;
 int * VAR_2 ;
 TYPE_3__* FUNC_1 (int const) ;

int FUNC_2(const SSL *VAR_3, int VAR_4)
{
   const uint16_t *VAR_5;
   size_t VAR_6, VAR_7;

    if (VAR_3->cert->conf_sigalgs) {
        VAR_5 = VAR_3->cert->conf_sigalgs;
        VAR_6 = VAR_3->cert->conf_sigalgslen;
    } else {
        VAR_5 = VAR_2;
        VAR_6 = FUNC_0(VAR_2);
    }

    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        const SIGALG_LOOKUP *VAR_8 = FUNC_1(VAR_5[VAR_7]);

        if (VAR_8 == ((void*)0))
            continue;
        if (VAR_8->sig == VAR_0
                && VAR_8->curve != VAR_1
                && VAR_4 == VAR_8->curve)
            return 1;
    }

    return 0;
}
