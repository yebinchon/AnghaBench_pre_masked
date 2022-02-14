
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;
typedef int mrb_float ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static mrb_value
FUNC_2(mrb_state *VAR_4, mrb_int VAR_5, mrb_int VAR_6)
{
  if (VAR_6 < 0) {



    return FUNC_1(VAR_4, VAR_0);

  }
  if (VAR_5 > 0) {
    if ((VAR_6 > VAR_3) ||
        (VAR_5 > (VAR_1 >> VAR_6))) {



      goto bit_overflow;

    }
    return FUNC_0(VAR_5 << VAR_6);
  }
  else {
    if ((VAR_6 > VAR_3) ||
        (VAR_5 <= (VAR_2 >> VAR_6))) {



      goto bit_overflow;

    }
    return FUNC_0(VAR_5 * ((mrb_int)1 << VAR_6));
  }


bit_overflow:
  {
    mrb_float VAR_7 = (mrb_float)VAR_5;
    while (VAR_6--) {
      VAR_7 *= 2;
    }
    return FUNC_1(VAR_4, VAR_7);
  }

}
