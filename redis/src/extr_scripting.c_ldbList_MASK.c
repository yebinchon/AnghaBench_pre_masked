
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lines; } ;


 int FUNC_0 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int) ;

void FUNC_2(int VAR_1, int VAR_2) {
    int VAR_3;

    for (VAR_3 = 1; VAR_3 <= VAR_0.lines; VAR_3++) {
        if (VAR_1 != 0 && FUNC_0(VAR_1-VAR_3) > VAR_2) continue;
        FUNC_1(VAR_3);
    }
}
