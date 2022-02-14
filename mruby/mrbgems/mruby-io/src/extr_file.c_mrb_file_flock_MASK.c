
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*,int*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ,char*) ;
 int FUNC_7 (int *,char*) ;

mrb_value
FUNC_8(mrb_state *VAR_3, mrb_value VAR_4)
{



  mrb_int VAR_5;
  int VAR_6;

  FUNC_4(VAR_3, "i", &VAR_5);
  VAR_6 = (int)FUNC_2(FUNC_5(VAR_3, VAR_4));

  while (FUNC_0(VAR_6, (int)VAR_5) == -1) {
    switch (VAR_2) {
      case 129:

        break;
      case 130:

      case 128:

        if (VAR_5 & VAR_1) {
          return FUNC_1();
        }

      default:
        FUNC_7(VAR_3, "flock failed");
        break;
    }
  }

  return FUNC_3(0);
}
