
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int mp_uint_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;

mp_uint_t FUNC_5(void) {
    mp_uint_t VAR_0 = FUNC_2();
    uint32_t VAR_1 = FUNC_1();
    uint32_t VAR_2 = FUNC_4();
    FUNC_3(VAR_0);

    uint32_t VAR_3 = FUNC_0();
    VAR_1 = VAR_3 - VAR_1;
    return (VAR_2 * 1000) + ((VAR_1 * 1000) / VAR_3);
}
