
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char uint8_t ;
typedef int mrb_value ;
typedef int mrb_state ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char const*,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,double) ;

__attribute__((used)) static int
FUNC_3(mrb_state *VAR_2, const unsigned char * VAR_3, int VAR_4, mrb_value VAR_5, unsigned int VAR_6)
{
  int VAR_7;
  double VAR_8;
  uint8_t *VAR_9 = (uint8_t *)&VAR_8;

  if (VAR_6 & VAR_0) {
    if (VAR_1) {
      FUNC_0(VAR_9, VAR_3, 8);
    }
    else {
      for (VAR_7 = 0; VAR_7 < 8; ++VAR_7) {
        VAR_9[8 - VAR_7 - 1] = VAR_3[VAR_7];
      }
    }
  } else {
    if (VAR_1) {
      for (VAR_7 = 0; VAR_7 < 8; ++VAR_7) {
        VAR_9[8 - VAR_7 - 1] = VAR_3[VAR_7];
      }
    }
    else {
      FUNC_0(VAR_9, VAR_3, 8);
    }
  }
  FUNC_1(VAR_2, VAR_5, FUNC_2(VAR_2, VAR_8));

  return 8;
}
