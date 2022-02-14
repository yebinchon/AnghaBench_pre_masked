
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int success ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 unsigned long VAR_3 ;
 scalar_t__ FUNC_1 (int,int*,int*,int*,int*) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,unsigned long) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(unsigned long *VAR_5) {
        static int VAR_6 = -1;
        unsigned long VAR_7;
        uint8_t VAR_8;

        if (VAR_6 < 0) {
                uint32_t VAR_9, VAR_10, VAR_11, VAR_12;


                if (FUNC_1(1, &VAR_9, &VAR_10, &VAR_11, &VAR_12) == 0) {
                        VAR_6 = 0;
                        return -VAR_1;
                }






                VAR_6 = !!(VAR_11 & (1U << 30));
        }

        if (VAR_6 == 0)
                return -VAR_1;

        asm volatile("rdrand %0;"
                     "setc %1"
                     : "=r" (VAR_7),
                       "=qm" (VAR_8));
        FUNC_3(&VAR_8, sizeof(VAR_8));
        if (!VAR_8)
                return -VAR_0;
        if (VAR_7 == 0 || VAR_7 == VAR_3)
                return FUNC_2(FUNC_0(VAR_2),
                                       "RDRAND returned suspicious value %lx, assuming bad hardware RNG, not using value.", VAR_7);

        *VAR_5 = VAR_7;
        return 0;



}
