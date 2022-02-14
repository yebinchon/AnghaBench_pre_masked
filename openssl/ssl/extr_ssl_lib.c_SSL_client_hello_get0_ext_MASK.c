
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned int type; int data; scalar_t__ present; } ;
struct TYPE_6__ {TYPE_1__* clienthello; } ;
struct TYPE_5__ {size_t pre_proc_exts_len; TYPE_3__* pre_proc_exts; } ;
typedef TYPE_2__ SSL ;
typedef TYPE_3__ RAW_EXTENSION ;


 unsigned char* FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;

int FUNC_2(SSL *VAR_0, unsigned int VAR_1, const unsigned char **VAR_2,
                       size_t *VAR_3)
{
    size_t VAR_4;
    RAW_EXTENSION *VAR_5;

    if (VAR_0->clienthello == ((void*)0))
        return 0;
    for (VAR_4 = 0; VAR_4 < VAR_0->clienthello->pre_proc_exts_len; ++VAR_4) {
        VAR_5 = VAR_0->clienthello->pre_proc_exts + VAR_4;
        if (VAR_5->present && VAR_5->type == VAR_1) {
            if (VAR_2 != ((void*)0))
                *VAR_2 = FUNC_0(&VAR_5->data);
            if (VAR_3 != ((void*)0))
                *VAR_3 = FUNC_1(&VAR_5->data);
            return 1;
        }
    }
    return 0;
}
