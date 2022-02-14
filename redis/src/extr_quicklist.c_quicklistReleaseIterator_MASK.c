
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ current; int quicklist; } ;
typedef TYPE_1__ quicklistIter ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(quicklistIter *VAR_0) {
    if (VAR_0->current)
        FUNC_0(VAR_0->quicklist, VAR_0->current);

    FUNC_1(VAR_0);
}
