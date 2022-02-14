
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ a; TYPE_1__** curctx; int c; } ;
typedef TYPE_2__ opj_mqc_t ;
struct TYPE_5__ {scalar_t__ qeval; struct TYPE_5__* nlps; } ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(opj_mqc_t *VAR_0)
{
    VAR_0->a -= (*VAR_0->curctx)->qeval;
    if (VAR_0->a < (*VAR_0->curctx)->qeval) {
        VAR_0->c += (*VAR_0->curctx)->qeval;
    } else {
        VAR_0->a = (*VAR_0->curctx)->qeval;
    }
    *VAR_0->curctx = (*VAR_0->curctx)->nlps;
    FUNC_0(VAR_0);
}
