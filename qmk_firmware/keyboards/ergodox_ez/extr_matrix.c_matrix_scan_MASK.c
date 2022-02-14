
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 () ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (char*) ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 () ;

uint8_t FUNC_9(void) {
  if (VAR_4) {
    if (++VAR_3 == 0) {



      FUNC_5("trying to reset mcp23018\n");
      VAR_4 = FUNC_3();
      if (VAR_4) {
        FUNC_5("left side not responding\n");
      } else {
        FUNC_5("left side attached\n");
        FUNC_1();
      }
    }
  }




  bool VAR_6 = 0;
  for (uint8_t VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {

    uint8_t VAR_8 = VAR_7;
    uint8_t VAR_9 = VAR_7 + VAR_1;
    FUNC_6(VAR_8);
    FUNC_6(VAR_9);




    VAR_6 |= FUNC_7(VAR_8);
    VAR_6 |= FUNC_7(VAR_9);

    FUNC_8();
  }

  FUNC_0(VAR_5, VAR_2, VAR_0, VAR_6);
  FUNC_4();

  return 1;
}
