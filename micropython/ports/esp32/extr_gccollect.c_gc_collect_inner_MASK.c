
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int volatile mp_uint_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (void**,int volatile) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(int VAR_2) {
    if (VAR_2 < VAR_0 / 8) {
        FUNC_4(VAR_2 + 1);
        if (VAR_2 != 0) {
            return;
        }
    }

    if (VAR_2 == VAR_0 / 8) {

        volatile uint32_t VAR_3 = (uint32_t)FUNC_2();
        FUNC_1((void**)VAR_3, ((mp_uint_t)FUNC_0(VAR_1) - VAR_3) / sizeof(uint32_t));
        return;
    }





}
