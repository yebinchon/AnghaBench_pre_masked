
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numslaves; int flags; struct TYPE_6__** slaves; } ;
typedef TYPE_1__ clusterNode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__**,TYPE_1__**,int) ;

int FUNC_1(clusterNode *VAR_3, clusterNode *VAR_4) {
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3->numslaves; VAR_5++) {
        if (VAR_3->slaves[VAR_5] == VAR_4) {
            if ((VAR_5+1) < VAR_3->numslaves) {
                int VAR_6 = (VAR_3->numslaves - VAR_5) - 1;
                FUNC_0(VAR_3->slaves+VAR_5,VAR_3->slaves+(VAR_5+1),
                        (sizeof(*VAR_3->slaves) * VAR_6));
            }
            VAR_3->numslaves--;
            if (VAR_3->numslaves == 0)
                VAR_3->flags &= ~VAR_0;
            return VAR_2;
        }
    }
    return VAR_1;
}
