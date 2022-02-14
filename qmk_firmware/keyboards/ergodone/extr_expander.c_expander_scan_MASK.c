
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 () ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 () ;

void FUNC_5(void)
{
  FUNC_1("expander status: %d ... ", VAR_2);
  uint8_t VAR_3 = FUNC_3(VAR_0 | VAR_1);
  if (VAR_3 == 0) {
    FUNC_4();
    if (VAR_2 == 0) {
      FUNC_1("attached\n");
      VAR_2 = 1;
      FUNC_2();
      FUNC_0();
    }
  }
  else {
    if (VAR_2 == 1) {
      FUNC_1("detached\n");
      VAR_2 = 0;
      FUNC_0();
    }
  }
  FUNC_1("%d\n", VAR_2);
}
