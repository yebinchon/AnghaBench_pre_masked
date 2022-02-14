
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef size_t mrb_int ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ) ;
 size_t FUNC_2 (int const) ;
 scalar_t__ FUNC_3 (int const) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,char*,int const) ;
 scalar_t__ FUNC_6 (int *,int const,size_t*,size_t*,size_t,int ) ;

mrb_value
FUNC_7(mrb_state *VAR_3, mrb_value VAR_4, mrb_int VAR_5, mrb_int VAR_6, const mrb_value *VAR_7, mrb_value (*VAR_8)(mrb_state*, mrb_value, mrb_int))
{
  mrb_int VAR_9, VAR_10, VAR_11, VAR_12;
  mrb_value VAR_13;
  VAR_13 = FUNC_0(VAR_3);

  for (VAR_9 = 0; VAR_9 < VAR_6; ++VAR_9) {
    if (FUNC_3(VAR_7[VAR_9])) {
      FUNC_1(VAR_3, VAR_13, VAR_8(VAR_3, VAR_4, FUNC_2(VAR_7[VAR_9])));
    }
    else if (FUNC_6(VAR_3, VAR_7[VAR_9], &VAR_11, &VAR_12, VAR_5, VAR_1) == VAR_2) {
      mrb_int const VAR_14 = VAR_5 < VAR_11 + VAR_12 ? VAR_5 : VAR_11 + VAR_12;
      for (VAR_10 = VAR_11; VAR_10 < VAR_14; ++VAR_10) {
        FUNC_1(VAR_3, VAR_13, VAR_8(VAR_3, VAR_4, VAR_10));
      }

      for (; VAR_10 < VAR_11 + VAR_12; ++VAR_10) {
        FUNC_1(VAR_3, VAR_13, FUNC_4());
      }
    }
    else {
      FUNC_5(VAR_3, VAR_0, "invalid values selector: %v", VAR_7[VAR_9]);
    }
  }

  return VAR_13;
}
