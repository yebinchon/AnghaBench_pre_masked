
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numslots; int flags; int slots; } ;
typedef TYPE_1__ clusterNode ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 () ;

int FUNC_3(clusterNode *VAR_1, int VAR_2) {
    int VAR_3 = FUNC_1(VAR_1->slots,VAR_2);
    FUNC_0(VAR_1->slots,VAR_2);
    if (!VAR_3) {
        VAR_1->numslots++;
        if (VAR_1->numslots == 1 && FUNC_2())
            VAR_1->flags |= VAR_0;
    }
    return VAR_3;
}
