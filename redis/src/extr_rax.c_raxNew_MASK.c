
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numnodes; int * head; scalar_t__ numele; } ;
typedef TYPE_1__ rax ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int) ;

rax *FUNC_3(void) {
    rax *VAR_0 = FUNC_2(sizeof(*VAR_0));
    if (VAR_0 == ((void*)0)) return ((void*)0);
    VAR_0->numele = 0;
    VAR_0->numnodes = 1;
    VAR_0->head = FUNC_0(0,0);
    if (VAR_0->head == ((void*)0)) {
        FUNC_1(VAR_0);
        return ((void*)0);
    } else {
        return VAR_0;
    }
}
