
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 unsigned int VAR_0 ;
 int * FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *,int) ;
 double FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_4(mrb_state *VAR_2, mrb_value VAR_3, mrb_value VAR_4, mrb_int VAR_5, unsigned int VAR_6)
{
  int VAR_7;
  double VAR_8;
  uint8_t *VAR_9 = (uint8_t *)&VAR_8;
  VAR_4 = FUNC_3(VAR_2, VAR_4, VAR_5 + 8);
  VAR_8 = FUNC_2(VAR_3);

  if (VAR_6 & VAR_0) {
    if (VAR_1) {
      FUNC_1(FUNC_0(VAR_4) + VAR_5, VAR_9, 8);
    }
    else {
      for (VAR_7 = 0; VAR_7 < 8; ++VAR_7) {
        FUNC_0(VAR_4)[VAR_5 + VAR_7] = VAR_9[8 - VAR_7 - 1];
      }
    }
  } else {
    if (VAR_1) {
      for (VAR_7 = 0; VAR_7 < 8; ++VAR_7) {
        FUNC_0(VAR_4)[VAR_5 + VAR_7] = VAR_9[8 - VAR_7 - 1];
      }
    }
    else {
      FUNC_1(FUNC_0(VAR_4) + VAR_5, VAR_9, 8);
    }
  }

  return 8;
}
