
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;
typedef int mrb_int ;


 int VAR_0 ;
 int FUNC_0 (int *,int const) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static mrb_value
FUNC_4(mrb_state *VAR_1, mrb_value *VAR_2, mrb_int VAR_3, const mrb_value *VAR_4)
{
  mrb_value VAR_5;

  if (!FUNC_3(*VAR_2)) return *VAR_2;
  if (VAR_3 != 2) {
    FUNC_2(VAR_1, VAR_0, "one hash required");
  }
  VAR_5 = FUNC_0(VAR_1, VAR_4[1]);
  if (FUNC_1(VAR_5)) {
    FUNC_2(VAR_1, VAR_0, "one hash required");
  }
  return (*VAR_2 = VAR_5);
}
