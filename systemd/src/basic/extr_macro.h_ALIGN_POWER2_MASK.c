
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u ;


 int FUNC_0 (unsigned long) ;

__attribute__((used)) static inline unsigned long FUNC_1(unsigned long VAR_0) {

        if (VAR_0 == 1)
                return 1;


        if (FUNC_0(VAR_0 - 1UL) < 1)
                return 0;

        return 1UL << (sizeof(VAR_0) * 8 - FUNC_0(VAR_0 - 1UL));
}
