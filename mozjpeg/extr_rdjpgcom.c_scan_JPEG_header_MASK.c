
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;

__attribute__((used)) static int
FUNC_7(int VAR_1, int VAR_2)
{
  int VAR_3;


  if (FUNC_1() != VAR_0)
    FUNC_0("Expected SOI marker first");


  for (;;) {
    VAR_3 = FUNC_2();
    switch (VAR_3) {



    case 141:
    case 140:
    case 134:
    case 133:
    case 132:
    case 131:
    case 130:
    case 129:
    case 139:
    case 138:
    case 137:
    case 136:
    case 135:
      if (VAR_1)
        FUNC_5(VAR_3);
      else
        FUNC_6();
      break;

    case 128:
      return VAR_3;

    case 142:
      return VAR_3;

    case 143:
      FUNC_4(VAR_2);
      break;

    case 144:



      if (VAR_1) {
        FUNC_3("APP12 contains:\n");
        FUNC_4(VAR_2);
      } else
        FUNC_6();
      break;

    default:
      FUNC_6();
      break;
    }
  }
}
