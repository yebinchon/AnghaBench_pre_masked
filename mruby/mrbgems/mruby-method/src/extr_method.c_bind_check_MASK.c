
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 int FUNC_4 (int *,int ,char*) ;
 int FUNC_5 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(mrb_state *VAR_1, mrb_value VAR_2, mrb_value VAR_3)
{
  if (!FUNC_1(VAR_3) &&
      FUNC_0(VAR_3) != FUNC_2(VAR_1, VAR_2) &&
      !FUNC_3(VAR_1, VAR_2, FUNC_0(VAR_3))) {
    if (FUNC_6(VAR_3)) {
      FUNC_4(VAR_1, VAR_0, "singleton method called for a different object");
    } else {
      FUNC_5(VAR_1, VAR_0, "bind argument must be an instance of %v", VAR_3);
    }
  }
}
