
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int level; scalar_t__ enable; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 scalar_t__ FUNC_0 () ;

int FUNC_1(void) {
    int VAR_7 = (VAR_3) ? (VAR_0) : 0;

    if (FUNC_0()) {
        return 1;
    }

    for (int VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
        VAR_4[VAR_7+VAR_8] = VAR_6[VAR_8];
    }





    return 0;
}
