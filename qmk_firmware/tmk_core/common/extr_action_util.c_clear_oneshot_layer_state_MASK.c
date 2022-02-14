
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int oneshot_fullfillment_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 () ;

void FUNC_4(oneshot_fullfillment_t VAR_1) {
    uint8_t VAR_2 = VAR_0;
    VAR_0 &= ~VAR_1;
    if (!FUNC_1() && VAR_2 != VAR_0) {
        FUNC_2(FUNC_0());
        FUNC_3();
    }
}
