
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numslots; int slots; } ;
typedef TYPE_1__ clusterNode ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;

int FUNC_2(clusterNode *VAR_0, int VAR_1) {
    int VAR_2 = FUNC_1(VAR_0->slots,VAR_1);
    FUNC_0(VAR_0->slots,VAR_1);
    if (VAR_2) VAR_0->numslots--;
    return VAR_2;
}
