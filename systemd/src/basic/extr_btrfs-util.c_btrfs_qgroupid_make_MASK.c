
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;

int FUNC_2(uint64_t VAR_2, uint64_t VAR_3, uint64_t *VAR_4) {
        FUNC_1(VAR_4);

        if (VAR_2 >= (FUNC_0(1) << (64 - VAR_0)))
                return -VAR_1;

        if (VAR_3 >= (FUNC_0(1) << VAR_0))
                return -VAR_1;

        *VAR_4 = (VAR_2 << VAR_0) | VAR_3;
        return 0;
}
