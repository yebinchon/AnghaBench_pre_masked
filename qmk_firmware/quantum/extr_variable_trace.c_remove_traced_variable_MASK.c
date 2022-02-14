
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * addr; scalar_t__ name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,scalar_t__) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (char const*,int) ;

void FUNC_2(const char* VAR_2, const char* VAR_3, int VAR_4) {
    FUNC_1(VAR_3, VAR_4);
    for (int VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
        if (FUNC_0(VAR_2, VAR_1[VAR_5].name) == 0) {
            VAR_1[VAR_5].name = 0;
            VAR_1[VAR_5].addr = ((void*)0);
            break;
        }
    }
}
