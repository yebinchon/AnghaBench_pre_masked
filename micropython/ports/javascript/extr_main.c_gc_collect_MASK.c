
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_uint_t ;
typedef int jmp_buf ;


 int FUNC_0 () ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_0 ;

void FUNC_5(void) {


    jmp_buf VAR_1;
    if (FUNC_4(VAR_1) == 0) {
        FUNC_3(VAR_1, 1);
    }
    FUNC_2();
    FUNC_1((void*)VAR_0, ((mp_uint_t)(void*)(&VAR_1 + 1) - (mp_uint_t)VAR_0) / sizeof(mp_uint_t));
    FUNC_0();
}
