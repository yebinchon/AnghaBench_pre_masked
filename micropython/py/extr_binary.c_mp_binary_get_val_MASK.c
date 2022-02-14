
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ mp_uint_t ;
typedef int mp_obj_t ;
typedef int mp_int_t ;
typedef int byte ;


 scalar_t__ FUNC_0 (int,size_t) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (char) ;
 long long FUNC_2 (size_t,scalar_t__,int,int *) ;
 size_t FUNC_3 (char,char,size_t*) ;
 int FUNC_4 (float) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (long long) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (long long) ;
 int FUNC_9 (char const*,int ) ;
 int FUNC_10 (char const*) ;

mp_obj_t FUNC_11(char VAR_2, char VAR_3, byte *VAR_4, byte **VAR_5) {
    byte *VAR_6 = *VAR_5;
    size_t VAR_7;

    size_t VAR_8 = FUNC_3(VAR_2, VAR_3, &VAR_7);
    if (VAR_2 == '@') {

        VAR_6 = VAR_4 + (uintptr_t)FUNC_0(VAR_6 - VAR_4, VAR_7);



        VAR_2 = '>';

    }
    *VAR_5 = VAR_6 + VAR_8;

    long long VAR_9 = FUNC_2(VAR_8, FUNC_1(VAR_3), (VAR_2 == '>'), VAR_6);

    if (VAR_3 == 'O') {
        return (mp_obj_t)(mp_uint_t)VAR_9;
    } else if (VAR_3 == 'S') {
        const char *VAR_10 = (const char*)(uintptr_t)(mp_uint_t)VAR_9;
        return FUNC_9(VAR_10, FUNC_10(VAR_10));
    } else if (FUNC_1(VAR_3)) {
        if ((long long)VAR_1 <= VAR_9 && VAR_9 <= (long long)VAR_0) {
            return FUNC_5((mp_int_t)VAR_9);
        } else {
            return FUNC_6(VAR_9);
        }
    } else {
        if ((unsigned long long)VAR_9 <= (unsigned long long)VAR_0) {
            return FUNC_7((mp_uint_t)VAR_9);
        } else {
            return FUNC_8(VAR_9);
        }
    }
}
