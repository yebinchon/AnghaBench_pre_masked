
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 () ;
 unsigned int FUNC_5 () ;
 int FUNC_6 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_7(int VAR_2)
{
  unsigned int VAR_3;
  int VAR_4;
  int VAR_5 = 0;







  VAR_3 = FUNC_5();

  if (VAR_3 < 2)
    FUNC_0("Erroneous JPEG marker length");
  VAR_3 -= 2;

  while (VAR_3 > 0) {
    VAR_4 = FUNC_4();
    if (VAR_2) {
      FUNC_3(VAR_4, VAR_1);





    } else if (VAR_4 == '\r') {
      FUNC_2("\n");
    } else if (VAR_4 == '\n') {
      if (VAR_5 != '\r')
        FUNC_2("\n");
    } else if (VAR_4 == '\\') {
      FUNC_2("\\\\");
    } else if (FUNC_1(VAR_4)) {
      FUNC_3(VAR_4, VAR_1);
    } else {
      FUNC_2("\\%03o", VAR_4);
    }
    VAR_5 = VAR_4;
    VAR_3--;
  }
  FUNC_2("\n");





}
