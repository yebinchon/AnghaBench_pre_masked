
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__* FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;

void FUNC_1(void) {
    for (int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        if (FUNC_0(VAR_4)[VAR_6] == VAR_1) {
            continue;
        }
        FUNC_0(VAR_4)[VAR_6] = VAR_3;
        VAR_5[VAR_6] = VAR_0;
   }
}
