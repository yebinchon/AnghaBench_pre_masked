
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sds ;
struct TYPE_3__ {int* slots; } ;
typedef TYPE_1__ clusterManagerNode ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static sds FUNC_4(clusterManagerNode *VAR_1) {
    sds VAR_2 = FUNC_2();
    int VAR_3 = -1, VAR_4 = -1, VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        int VAR_6 = VAR_1->slots[VAR_5];
        if (VAR_6) {
            if (VAR_3 == -1) {
                if (FUNC_3(VAR_2)) VAR_2 = FUNC_0(VAR_2, ",");
                VAR_3 = VAR_5;
                VAR_2 = FUNC_1(VAR_2, "[%u", VAR_5);
            }
            VAR_4 = VAR_5;
        } else {
            if (VAR_4 >= 0) {
                if (VAR_3 == VAR_4)
                    VAR_2 = FUNC_0(VAR_2, "]");
                else VAR_2 = FUNC_1(VAR_2, "-%u]", VAR_4);
            }
            VAR_4 = -1;
            VAR_3 = -1;
        }
    }
    if (VAR_4 >= 0) {
        if (VAR_3 == VAR_4) VAR_2 = FUNC_0(VAR_2, "]");
        else VAR_2 = FUNC_1(VAR_2, "-%u]", VAR_4);
    }
    return VAR_2;
}
