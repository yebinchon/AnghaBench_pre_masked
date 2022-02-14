
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int storage_number ;
typedef scalar_t__ RRD_MEMORY_MODE ;
typedef int RRDDIM ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (long) ;

inline long FUNC_2(RRD_MEMORY_MODE VAR_4, long VAR_5) {
    if(FUNC_1(VAR_5 < 5)) VAR_5 = 5;
    if(FUNC_1(VAR_5 > VAR_0)) VAR_5 = VAR_0;

    if(FUNC_1(VAR_4 == VAR_2 || VAR_4 == VAR_1))
        return VAR_5;

    long VAR_6 = (size_t)FUNC_0(VAR_3);
    long VAR_7 = sizeof(RRDDIM) + VAR_5 * sizeof(storage_number);
    if(FUNC_1(VAR_7 % VAR_6)) {
        VAR_7 -= (VAR_7 % VAR_6);
        VAR_7 += VAR_6;

        long VAR_8 = (VAR_7 - sizeof(RRDDIM)) / sizeof(storage_number);
        return VAR_8;
    }

    return VAR_5;
}
