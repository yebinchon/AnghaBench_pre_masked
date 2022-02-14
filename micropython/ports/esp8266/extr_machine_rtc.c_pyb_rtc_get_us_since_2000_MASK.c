
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int int64_t ;
typedef int delta ;
typedef int cal ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int ,int*,int) ;

uint64_t FUNC_3() {
    uint32_t VAR_3;
    int64_t VAR_4;
    uint32_t VAR_5;

    FUNC_1(VAR_0, &VAR_3, sizeof(VAR_3));
    FUNC_1(VAR_1, &VAR_4, sizeof(VAR_4));




    VAR_5 = FUNC_0();
    if (VAR_5 < VAR_2) {

        VAR_4 += (uint64_t)VAR_3 << 20;
        FUNC_2(VAR_1, &VAR_4, sizeof(VAR_4));
    }
    VAR_2 = VAR_5;

    return (((uint64_t)VAR_5 * VAR_3) >> 12) + VAR_4;
}
