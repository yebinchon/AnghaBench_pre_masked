
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {size_t received_order; int type; scalar_t__ present; } ;
struct TYPE_6__ {TYPE_1__* clienthello; } ;
struct TYPE_5__ {size_t pre_proc_exts_len; TYPE_3__* pre_proc_exts; } ;
typedef TYPE_2__ SSL ;
typedef TYPE_3__ RAW_EXTENSION ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(SSL *VAR_2, int **VAR_3, size_t *VAR_4)
{
    RAW_EXTENSION *VAR_5;
    int *VAR_6;
    size_t VAR_7 = 0, VAR_8;

    if (VAR_2->clienthello == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
        return 0;
    for (VAR_8 = 0; VAR_8 < VAR_2->clienthello->pre_proc_exts_len; VAR_8++) {
        VAR_5 = VAR_2->clienthello->pre_proc_exts + VAR_8;
        if (VAR_5->present)
            VAR_7++;
    }
    if (VAR_7 == 0) {
        *VAR_3 = ((void*)0);
        *VAR_4 = 0;
        return 1;
    }
    if ((VAR_6 = FUNC_1(sizeof(*VAR_6) * VAR_7)) == ((void*)0)) {
        FUNC_2(VAR_1,
               VAR_0);
        return 0;
    }
    for (VAR_8 = 0; VAR_8 < VAR_2->clienthello->pre_proc_exts_len; VAR_8++) {
        VAR_5 = VAR_2->clienthello->pre_proc_exts + VAR_8;
        if (VAR_5->present) {
            if (VAR_5->received_order >= VAR_7)
                goto err;
            VAR_6[VAR_5->received_order] = VAR_5->type;
        }
    }
    *VAR_3 = VAR_6;
    *VAR_4 = VAR_7;
    return 1;
 err:
    FUNC_0(VAR_6);
    return 0;
}
