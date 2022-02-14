
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mp_uint_t ;
typedef int mp_int_t ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

mp_uint_t FUNC_2(mp_int_t VAR_1) {
    mp_uint_t VAR_2;
    for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
        if (VAR_1 == (1 << VAR_2)) {
            return VAR_2;
        }
    }
    FUNC_1(FUNC_0(&VAR_0, "prescaler must be a power of 2 between 1 and 128, not %d", VAR_1));
}
