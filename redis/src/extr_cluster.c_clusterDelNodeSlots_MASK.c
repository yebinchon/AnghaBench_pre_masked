
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int clusterNode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;

int FUNC_2(clusterNode *VAR_1) {
    int VAR_2 = 0, VAR_3;

    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        if (FUNC_1(VAR_1,VAR_3)) {
            FUNC_0(VAR_3);
            VAR_2++;
        }
    }
    return VAR_2;
}
