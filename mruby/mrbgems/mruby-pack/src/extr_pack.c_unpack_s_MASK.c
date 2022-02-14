
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(mrb_state *VAR_2, const unsigned char *VAR_3, int VAR_4, mrb_value VAR_5, unsigned int VAR_6)
{
  int VAR_7;

  if (VAR_6 & VAR_0) {
    VAR_7 = VAR_3[1] * 256 + VAR_3[0];
  } else {
    VAR_7 = VAR_3[0] * 256 + VAR_3[1];
  }
  if ((VAR_6 & VAR_1) && (VAR_7 >= 0x8000)) {
    VAR_7 -= 0x10000;
  }
  FUNC_0(VAR_2, VAR_5, FUNC_1(VAR_7));
  return 2;
}
