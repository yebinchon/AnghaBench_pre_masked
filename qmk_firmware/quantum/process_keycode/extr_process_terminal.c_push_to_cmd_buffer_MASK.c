
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

void FUNC_2(void) {
    if (VAR_3) {
        if (VAR_2 == ((void*)0)) {
            return;
        } else {
            if (VAR_4) {
                VAR_4 = 0;
                FUNC_0(VAR_2[0], VAR_1);
                return;
            }

            for (int VAR_5 = VAR_0 - 1; VAR_5 > 0; --VAR_5) {
                FUNC_1(VAR_2[VAR_5], VAR_2[VAR_5 - 1], 80);
            }

            FUNC_0(VAR_2[0], VAR_1);

            return;
        }
    }
}
