
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 () ;
 int * VAR_3 ;
 scalar_t__ FUNC_2 (size_t,size_t) ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,size_t,size_t) ;

uint8_t FUNC_8(void)
{

  if (VAR_5) {
      if (++VAR_4 == 0) {



          FUNC_4("trying to reset mcp23018\n");
          VAR_5 = FUNC_1();
          if (VAR_5) {
              FUNC_4("left side not responding\n");
          } else {
              FUNC_4("left side attached\n");
          }
      }
  }

    for (uint8_t VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
        FUNC_5(VAR_6);

        FUNC_5(VAR_6 + VAR_2);




        VAR_3[VAR_6] = FUNC_0(VAR_6);

        VAR_3[VAR_6 + VAR_2] = FUNC_0(VAR_6 + VAR_2);

        FUNC_6();
    }

    FUNC_3();







    return 1;
}
