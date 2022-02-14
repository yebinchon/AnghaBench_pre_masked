
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ netutils_endian_t ;
typedef int mp_uint_t ;
typedef int mp_obj_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int,char*,int,int,int,int) ;

mp_obj_t FUNC_2(uint8_t *VAR_1, netutils_endian_t VAR_2) {
    char VAR_3[16];
    mp_uint_t VAR_4;
    if (VAR_2 == VAR_0) {
        VAR_4 = FUNC_1(VAR_3, 16, "%u.%u.%u.%u", VAR_1[3], VAR_1[2], VAR_1[1], VAR_1[0]);
    } else {
        VAR_4 = FUNC_1(VAR_3, 16, "%u.%u.%u.%u", VAR_1[0], VAR_1[1], VAR_1[2], VAR_1[3]);
    }
    return FUNC_0(VAR_3, VAR_4);
}
