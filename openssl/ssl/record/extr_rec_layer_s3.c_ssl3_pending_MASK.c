
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ rstate; int * rrec; } ;
struct TYPE_4__ {TYPE_3__ rlayer; } ;
typedef TYPE_1__ SSL ;


 size_t FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

size_t FUNC_3(const SSL *VAR_2)
{
    size_t VAR_3, VAR_4 = 0;

    if (VAR_2->rlayer.rstate == VAR_1)
        return 0;

    for (VAR_3 = 0; VAR_3 < FUNC_0(&VAR_2->rlayer); VAR_3++) {
        if (FUNC_2(&VAR_2->rlayer.rrec[VAR_3])
            != VAR_0)
            return 0;
        VAR_4 += FUNC_1(&VAR_2->rlayer.rrec[VAR_3]);
    }

    return VAR_4;
}
