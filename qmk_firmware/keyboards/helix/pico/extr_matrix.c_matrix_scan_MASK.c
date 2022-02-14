
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * VAR_4 ;

uint8_t FUNC_3(void)
{
    if (VAR_2) {
        FUNC_0();
    }else{
        FUNC_2();

          int VAR_5 = (VAR_1) ? VAR_0 : 0;

          for (int VAR_6 = 0; VAR_6 < VAR_0; ++VAR_6) {
              VAR_3[VAR_5+VAR_6] = VAR_4[VAR_6];
          }

        FUNC_1();
    }
    return 1;
}
