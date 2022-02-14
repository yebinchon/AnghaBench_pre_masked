
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int it_flags; scalar_t__ refcount; int nbytes; int nkey; } ;
typedef TYPE_1__ item ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

void FUNC_5(item *VAR_1) {
    FUNC_1(FUNC_0(VAR_1), VAR_1->nkey, VAR_1->nbytes);
    FUNC_2((VAR_1->it_flags & VAR_0) == 0);
    FUNC_2(VAR_1->refcount > 0);

    if (FUNC_4(VAR_1) == 0) {
        FUNC_3(VAR_1);
    }
}
