
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {int dummy; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 int VAR_0 ;
 struct RClass* FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ,struct RClass*) ;
 int FUNC_3 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_4(mrb_state *VAR_1, mrb_value VAR_2) {
  struct RClass *VAR_3 = FUNC_0(VAR_1, "Random");
  if (!FUNC_2(VAR_1, VAR_2, VAR_3) || !FUNC_1(VAR_2)) {
    FUNC_3(VAR_1, VAR_0, "Random instance required");
  }
}
