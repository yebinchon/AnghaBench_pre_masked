
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RClass {scalar_t__ tt; } ;
typedef int mrb_value ;
typedef int mrb_state ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct RClass*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,struct RClass*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,char*) ;

__attribute__((used)) static mrb_value
FUNC_6(mrb_state *VAR_1, struct RClass* VAR_2)
{
  mrb_value VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (FUNC_1(VAR_3)) {
    VAR_3 = VAR_2->tt == VAR_0 ? FUNC_5(VAR_1, "#<Module:") :
                                    FUNC_5(VAR_1, "#<Class:");
    FUNC_4(VAR_1, VAR_3, FUNC_2(VAR_1, VAR_2));
    FUNC_3(VAR_1, VAR_3, ">");
  }
  return VAR_3;
}
