
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (unsigned long*) ;
 scalar_t__ FUNC_5 (void const*,int,int const*) ;
 int FUNC_6 (unsigned int) ;

void FUNC_7(void) {
        static bool VAR_2 = 0;
        unsigned VAR_3;



        unsigned long VAR_4;

        if (VAR_2)
                return;
                VAR_3 = 0;

        VAR_3 ^= (unsigned) FUNC_3(VAR_1);
        VAR_3 ^= (unsigned) FUNC_2();

        if (FUNC_4(&VAR_4) >= 0)
                VAR_3 ^= (unsigned) VAR_4;

        FUNC_6(VAR_3);
        VAR_2 = 1;
}
