
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 struct RClass* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int ,struct RClass*) ;
 int FUNC_4 (struct RClass*) ;
 int FUNC_5 (int *,int ,char*) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_1) {
  struct RClass *VAR_2 = FUNC_0(VAR_1, "Random");
  mrb_value VAR_3 = FUNC_1(VAR_1, FUNC_4(VAR_2), FUNC_2(VAR_1, "DEFAULT"));
  if (!FUNC_3(VAR_1, VAR_3, VAR_2)) {
    FUNC_5(VAR_1, VAR_0, "Random::DEFAULT replaced");
  }
  return VAR_3;
}
