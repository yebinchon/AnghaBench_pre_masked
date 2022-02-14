
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; int flags; struct TYPE_4__* cblkdatabuffer; int encoder; } ;
typedef TYPE_1__ opj_t1_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(opj_t1_t *VAR_0)
{
    if (! VAR_0) {
        return;
    }


    if (!VAR_0->encoder && VAR_0->data) {
        FUNC_0(VAR_0->data);
        VAR_0->data = 00;
    }

    if (VAR_0->flags) {
        FUNC_0(VAR_0->flags);
        VAR_0->flags = 00;
    }

    FUNC_1(VAR_0->cblkdatabuffer);

    FUNC_1(VAR_0);
}
