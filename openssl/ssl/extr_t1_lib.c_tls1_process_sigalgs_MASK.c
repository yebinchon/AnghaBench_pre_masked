
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_11__ {int sig_idx; scalar_t__ sig; } ;
struct TYPE_8__ {int* valid_flags; } ;
struct TYPE_9__ {TYPE_1__ tmp; } ;
struct TYPE_10__ {size_t shared_sigalgslen; TYPE_4__** shared_sigalgs; TYPE_2__ s3; } ;
typedef TYPE_3__ SSL ;
typedef TYPE_4__ SIGALG_LOOKUP ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 size_t VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;

int FUNC_3(SSL *VAR_4)
{
    size_t VAR_5;
    uint32_t *VAR_6 = VAR_4->s3.tmp.valid_flags;

    if (!FUNC_2(VAR_4))
        return 0;

    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
        VAR_6[VAR_5] = 0;

    for (VAR_5 = 0; VAR_5 < VAR_4->shared_sigalgslen; VAR_5++) {
        const SIGALG_LOOKUP *VAR_7 = VAR_4->shared_sigalgs[VAR_5];
        int VAR_8 = VAR_7->sig_idx;


        if (FUNC_0(VAR_4) && VAR_7->sig == VAR_2)
            continue;

        if (VAR_6[VAR_8] == 0 && !FUNC_1(VAR_8))
            VAR_6[VAR_8] = VAR_0 | VAR_1;
    }
    return 1;
}
