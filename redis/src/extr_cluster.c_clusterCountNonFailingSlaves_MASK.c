
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numslaves; int * slaves; } ;
typedef TYPE_1__ clusterNode ;


 int FUNC_0 (int ) ;

int FUNC_1(clusterNode *VAR_0) {
    int VAR_1, VAR_2 = 0;

    for (VAR_1 = 0; VAR_1 < VAR_0->numslaves; VAR_1++)
        if (!FUNC_0(VAR_0->slaves[VAR_1])) VAR_2++;
    return VAR_2;
}
